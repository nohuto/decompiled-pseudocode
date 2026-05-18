/*
 * XREFs of sub_180047CD8 @ 0x180047CD8
 * Callers:
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 *     sub_180047C00 @ 0x180047C00 (sub_180047C00.c)
 * Callees:
 *     sub_1800463D8 @ 0x1800463D8 (sub_1800463D8.c)
 */

__int64 __fastcall sub_180047CD8(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 0x80u;
  v4 = 3;
  return sub_1800463D8(
           (__int64 *)(a1 + 176),
           a2,
           a3,
           *(_DWORD *)(a1 + 124),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72),
           (__int64)&v4);
}
