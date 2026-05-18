/*
 * XREFs of sub_180025238 @ 0x180025238
 * Callers:
 *     sub_180024738 @ 0x180024738 (sub_180024738.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_180025238(float *a1, _QWORD *a2)
{
  float *result; // rax

  result = a1;
  *a1 = (float)(int)*a2 / 1000000.0;
  return result;
}
