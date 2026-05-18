/*
 * XREFs of sub_180098E70 @ 0x180098E70
 * Callers:
 *     sub_180098010 @ 0x180098010 (sub_180098010.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180098E70(__int64 a1, unsigned __int64 a2)
{
  return (a2 >> 1) & (*(_QWORD *)(a1 + 16) - 1LL);
}
