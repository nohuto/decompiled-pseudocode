/*
 * XREFs of sub_18008A008 @ 0x18008A008
 * Callers:
 *     sub_18008B370 @ 0x18008B370 (sub_18008B370.c)
 *     sub_18008B500 @ 0x18008B500 (sub_18008B500.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18008A008(_QWORD *a1, float *a2)
{
  *a1 = (unsigned int)(int)(float)(*a2 * 1000000000.0);
  return a1;
}
