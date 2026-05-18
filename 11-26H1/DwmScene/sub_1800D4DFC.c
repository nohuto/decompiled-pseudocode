/*
 * XREFs of sub_1800D4DFC @ 0x1800D4DFC
 * Callers:
 *     sub_1800D4BF0 @ 0x1800D4BF0 (sub_1800D4BF0.c)
 * Callees:
 *     <none>
 */

double *__fastcall sub_1800D4DFC(double *a1, _QWORD *a2)
{
  double *result; // rax

  result = a1;
  *a1 = (double)(int)*a2 / 1000000000.0;
  return result;
}
