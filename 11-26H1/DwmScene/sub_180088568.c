/*
 * XREFs of sub_180088568 @ 0x180088568
 * Callers:
 *     sub_180088358 @ 0x180088358 (sub_180088358.c)
 *     sub_180088BE0 @ 0x180088BE0 (sub_180088BE0.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_180088568(float *a1, unsigned int a2)
{
  float *result; // rax

  *a1 = (float)BYTE2(a2) / 255.0;
  a1[1] = (float)BYTE1(a2) / 255.0;
  a1[2] = (float)(unsigned __int8)a2 / 255.0;
  result = a1;
  a1[3] = (float)HIBYTE(a2) / 255.0;
  return result;
}
