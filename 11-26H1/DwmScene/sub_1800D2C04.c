/*
 * XREFs of sub_1800D2C04 @ 0x1800D2C04
 * Callers:
 *     sub_1800D1CE8 @ 0x1800D1CE8 (sub_1800D1CE8.c)
 *     sub_1800D2E40 @ 0x1800D2E40 (sub_1800D2E40.c)
 * Callees:
 *     sub_180031F38 @ 0x180031F38 (sub_180031F38.c)
 *     sub_180041964 @ 0x180041964 (sub_180041964.c)
 *     sub_1800D1CE8 @ 0x1800D1CE8 (sub_1800D1CE8.c)
 *     sub_1800D2B84 @ 0x1800D2B84 (sub_1800D2B84.c)
 *     sub_1800D3A88 @ 0x1800D3A88 (sub_1800D3A88.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D2C04(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_180031F38(a1 + 8, a2 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  if ( a1 + 64 != a2 + 64 )
  {
    v6 = a1 + 64;
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
    sub_1800D1CE8(a1 + 72, **(_QWORD ***)(a2 + 72), *(_QWORD **)(a2 + 72));
    v4 = sub_180041964(a1 + 64, *(_QWORD *)(a1 + 80));
    sub_1800D3A88(a1 + 64, v4);
    v6 = 0LL;
    sub_1800D2B84(&v6);
  }
  return a1;
}
