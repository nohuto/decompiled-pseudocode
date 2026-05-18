/*
 * XREFs of sub_180098E04 @ 0x180098E04
 * Callers:
 *     sub_180098010 @ 0x180098010 (sub_180098010.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180098E04(__int64 a1, unsigned __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * ((a2 >> 1) & (*(_QWORD *)(a1 + 16) - 1LL))) + 8 * (a2 & 1);
}
