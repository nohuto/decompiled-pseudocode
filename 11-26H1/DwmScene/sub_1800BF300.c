/*
 * XREFs of sub_1800BF300 @ 0x1800BF300
 * Callers:
 *     sub_180011D1C @ 0x180011D1C (sub_180011D1C.c)
 *     sub_1800BF440 @ 0x1800BF440 (sub_1800BF440.c)
 *     sub_1800BF500 @ 0x1800BF500 (sub_1800BF500.c)
 *     sub_1800BF5EC @ 0x1800BF5EC (sub_1800BF5EC.c)
 *     sub_1800BF6AC @ 0x1800BF6AC (sub_1800BF6AC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18002901C @ 0x18002901C (sub_18002901C.c)
 *     sub_18002AF84 @ 0x18002AF84 (sub_18002AF84.c)
 *     sub_180030B88 @ 0x180030B88 (sub_180030B88.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800BF300(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v7; // rax
  _OWORD *v8; // r10
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF

  v13[0] = *a4;
  v13[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v7 = sub_180012C40(&v14, a3);
  v15[0] = *v8;
  v15[1] = v8[1];
  sub_18002AF84(a1, (__int64)v15, v7, v13);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_DWORD *)(a1 + 512) = 0;
  sub_18002901C(a1 + 520, 56LL, 20LL, sub_1800BF2E0);
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  v9 = sub_180011790(0x48uLL);
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *(_WORD *)(v9 + 24) = 257;
  *(_QWORD *)(a1 + 1648) = v9;
  sub_180030B88((__int64 *)(a1 + 1664));
  sub_180030B88((__int64 *)(a1 + 1680));
  v10 = a3[1];
  if ( v10 )
    sub_180010EC8(v10);
  v11 = a4[1];
  if ( v11 )
    sub_180010EC8(v11);
  return a1;
}
