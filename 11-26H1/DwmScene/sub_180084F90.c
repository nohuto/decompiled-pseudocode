/*
 * XREFs of sub_180084F90 @ 0x180084F90
 * Callers:
 *     sub_180080AA4 @ 0x180080AA4 (sub_180080AA4.c)
 * Callees:
 *     sub_180028A44 @ 0x180028A44 (sub_180028A44.c)
 *     sub_180029420 @ 0x180029420 (sub_180029420.c)
 */

__int64 __fastcall sub_180084F90(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180028A44((__int64 *)(a1 + 144), &v5);
  v5 = a2;
  return sub_180029420((__int64 *)(a1 + 80), &v5);
}
