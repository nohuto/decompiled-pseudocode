/*
 * XREFs of sub_1800D3C4C @ 0x1800D3C4C
 * Callers:
 *     sub_1800D2300 @ 0x1800D2300 (sub_1800D2300.c)
 *     sub_1800D2658 @ 0x1800D2658 (sub_1800D2658.c)
 *     sub_1800D40A8 @ 0x1800D40A8 (sub_1800D40A8.c)
 * Callees:
 *     sub_180041964 @ 0x180041964 (sub_180041964.c)
 */

unsigned __int64 __fastcall sub_1800D3C4C(_QWORD *a1)
{
  unsigned __int64 v2; // rax

  v2 = sub_180041964((__int64)a1, a1[2] + 1LL);
  return sub_1800D3A88(a1, v2);
}
