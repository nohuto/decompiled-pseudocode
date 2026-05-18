/*
 * XREFs of sub_1800CDCB4 @ 0x1800CDCB4
 * Callers:
 *     sub_1800BA354 @ 0x1800BA354 (sub_1800BA354.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18002AF84 @ 0x18002AF84 (sub_18002AF84.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800CDCB4(__int64 a1, _OWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v11[0] = *a4;
  v11[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v12[0] = *a3;
  v12[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v13[0] = *a2;
  v13[1] = a2[1];
  sub_18002AF84(a1, (__int64)v13, v12, v11);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::`vftable';
  *(_BYTE *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  v7 = sub_180011790(0x38uLL);
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 552) = v7;
  v8 = a3[1];
  if ( v8 )
    sub_180010EC8(v8);
  v9 = a4[1];
  if ( v9 )
    sub_180010EC8(v9);
  return a1;
}
