/*
 * XREFs of sub_180096B40 @ 0x180096B40
 * Callers:
 *     sub_180096C00 @ 0x180096C00 (sub_180096C00.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180096B40(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3] || a1[4] != a2[4] || a1[5] != a2[5];
}
