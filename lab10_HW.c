#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846

void print_sq(double symbol, double r) {

    double size = 2 * r;

    printf(" вадрат с вписанной окружностью (r=%d):\n", r);

    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= size; j++)
        { 
            int x = j - r;
            int y = i - r;

            int dist_sq = x * x + y * y;

            int on_square = (i == 0 || i == size || j == 0 || j == size);

            int on_circle = (dist_sq >= r * r - r && dist_sq <= r * r + r);

            if (on_square || on_circle) {
                printf("%c", symbol);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}