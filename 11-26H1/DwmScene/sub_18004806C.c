/*
 * XREFs of sub_18004806C @ 0x18004806C
 * Callers:
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 *     sub_180047F8C @ 0x180047F8C (sub_180047F8C.c)
 * Callees:
 *     sub_1800463D8 @ 0x1800463D8 (sub_1800463D8.c)
 */

__int64 __fastcall sub_18004806C(__int64 a1, int a2, int a3, int a4)
{
  int v7; // r9d
  int v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 0x400u;
  v11 = 6;
  sub_1800463D8(
    (__int64 *)(a1 + 208),
    a2,
    a4,
    *(_DWORD *)(a1 + 124),
    *(_DWORD *)(a1 + 304),
    *(_QWORD *)(a1 + 72),
    (__int64)&v11);
  v7 = *(_DWORD *)(a1 + 124);
  v10 = *(_QWORD *)(a1 + 72);
  v9 = *(_DWORD *)(a1 + 304);
  v11 = 7;
  return sub_1800463D8((__int64 *)(a1 + 224), a3, a4, v7, v9, v10, (__int64)&v11);
}
