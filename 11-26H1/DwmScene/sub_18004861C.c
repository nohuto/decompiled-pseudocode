/*
 * XREFs of sub_18004861C @ 0x18004861C
 * Callers:
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 *     sub_180048544 @ 0x180048544 (sub_180048544.c)
 * Callees:
 *     sub_180046150 @ 0x180046150 (sub_180046150.c)
 */

__int64 __fastcall sub_18004861C(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 1u;
  v4 = 4;
  return sub_180046150(
           (__int64 *)(a1 + 240),
           a2,
           a3,
           *(_DWORD *)(a1 + 124),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72),
           (__int64)&v4);
}
