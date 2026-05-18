/*
 * XREFs of sub_180047F40 @ 0x180047F40
 * Callers:
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 *     sub_180047E18 @ 0x180047E18 (sub_180047E18.c)
 * Callees:
 *     sub_18004633C @ 0x18004633C (sub_18004633C.c)
 */

__int64 __fastcall sub_180047F40(__int64 a1, int a2, int a3)
{
  *(_DWORD *)(a1 + 292) |= 0x10000040u;
  *(_DWORD *)(a1 + 288) = 1;
  return sub_18004633C(
           (__int64 *)(a1 + 272),
           a2,
           a3,
           *(_DWORD *)(a1 + 116),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72));
}
