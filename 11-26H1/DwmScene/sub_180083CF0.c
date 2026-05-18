/*
 * XREFs of sub_180083CF0 @ 0x180083CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028A44 @ 0x180028A44 (sub_180028A44.c)
 *     sub_180029420 @ 0x180029420 (sub_180029420.c)
 */

__int64 __fastcall sub_180083CF0(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180028A44((__int64 *)(a1 + 136), &v5);
  v5 = a2;
  return sub_180029420((__int64 *)(a1 + 80), &v5);
}
