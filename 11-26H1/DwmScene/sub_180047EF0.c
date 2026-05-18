/*
 * XREFs of sub_180047EF0 @ 0x180047EF0
 * Callers:
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 *     sub_180047D40 @ 0x180047D40 (sub_180047D40.c)
 * Callees:
 *     sub_18004647C @ 0x18004647C (sub_18004647C.c)
 */

__int64 __fastcall sub_180047EF0(__int64 a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 292) &= ~0x10000000u;
  *(_DWORD *)(a1 + 292) |= 0x40u;
  *(_DWORD *)(a1 + 288) = 0;
  return sub_18004647C(
           (__int64 *)(a1 + 272),
           a2,
           a3,
           *(_DWORD *)(a1 + 116),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72));
}
