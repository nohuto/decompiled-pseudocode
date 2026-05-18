/*
 * XREFs of sub_180048324 @ 0x180048324
 * Callers:
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 *     sub_18004824C @ 0x18004824C (sub_18004824C.c)
 * Callees:
 *     sub_1800461F4 @ 0x1800461F4 (sub_1800461F4.c)
 */

__int64 __fastcall sub_180048324(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 292) |= 0x100u;
  v4 = 0;
  return sub_1800461F4(
           (__int64 *)(a1 + 144),
           a2,
           a3,
           *(_DWORD *)(a1 + 124),
           *(_DWORD *)(a1 + 304),
           *(_QWORD *)(a1 + 72),
           (__int64)&v4);
}
