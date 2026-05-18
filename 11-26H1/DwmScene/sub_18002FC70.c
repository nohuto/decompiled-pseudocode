/*
 * XREFs of sub_18002FC70 @ 0x18002FC70
 * Callers:
 *     sub_18002CF4C @ 0x18002CF4C (sub_18002CF4C.c)
 * Callees:
 *     <none>
 */

float *__fastcall sub_18002FC70(float *a1, _QWORD *a2)
{
  float *result; // rax

  result = a1;
  *a1 = (float)(int)*a2 / 1000000000.0;
  return result;
}
