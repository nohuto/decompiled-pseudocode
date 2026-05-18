/*
 * XREFs of sub_1800481F0 @ 0x1800481F0
 * Callers:
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 *     sub_180048114 @ 0x180048114 (sub_180048114.c)
 * Callees:
 *     sub_1800461F4 @ 0x1800461F4 (sub_1800461F4.c)
 */

__int64 __fastcall sub_1800481F0(__int64 a1, int a2, int a3, char a4)
{
  int v4; // r9d
  int v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x10u;
  *(_DWORD *)(a1 + 292) |= 0x10u;
  v4 = *(_DWORD *)(a1 + 124);
  v7 = *(_QWORD *)(a1 + 72);
  v6 = *(_DWORD *)(a1 + 304);
  v8 = 1;
  return sub_1800461F4((__int64 *)(a1 + 160), a2, a3, v4, v6, v7, (__int64)&v8);
}
