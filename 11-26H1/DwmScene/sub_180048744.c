/*
 * XREFs of sub_180048744 @ 0x180048744
 * Callers:
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 *     sub_18004866C @ 0x18004866C (sub_18004866C.c)
 * Callees:
 *     sub_180046150 @ 0x180046150 (sub_180046150.c)
 */

__int64 __fastcall sub_180048744(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 2u;
  v4 = 5;
  return sub_180046150(
           (__int64 *)(a1 + 256),
           a2,
           a3,
           *(_DWORD *)(a1 + 124),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72),
           (__int64)&v4);
}
