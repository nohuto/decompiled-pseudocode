/*
 * XREFs of sub_18002B48C @ 0x18002B48C
 * Callers:
 *     sub_18002B760 @ 0x18002B760 (sub_18002B760.c)
 *     sub_1800BF7A8 @ 0x1800BF7A8 (sub_1800BF7A8.c)
 *     sub_1800CDED8 @ 0x1800CDED8 (sub_1800CDED8.c)
 *     sub_1800E4B33 @ 0x1800E4B33 (sub_1800E4B33.c)
 *     unknown_libname_76 @ 0x1800E4EF3 (unknown_libname_76.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180024D50 @ 0x180024D50 (sub_180024D50.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002CDF4 @ 0x18002CDF4 (sub_18002CDF4.c)
 */

__int64 __fastcall sub_18002B48C(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rcx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  *(_OWORD *)v12 = 0LL;
  sub_180011F5C((_QWORD *)(a1 + 208), v12);
  if ( v12[1] )
    sub_180010EC8(v12[1]);
  v2 = *(volatile signed __int32 **)(a1 + 496);
  if ( v2 )
    sub_180010F00(v2);
  sub_18002B3EC((_QWORD *)(a1 + 472));
  v3 = *(_QWORD *)(a1 + 464);
  if ( v3 )
    sub_180010EC8(v3);
  v4 = *(_QWORD *)(a1 + 448);
  if ( v4 )
    sub_180010EC8(v4);
  sub_18002CDF4(a1 + 416);
  v5 = *(_QWORD *)(a1 + 392);
  if ( v5 )
    sub_180010EC8(v5);
  v6 = *(_QWORD *)(a1 + 264);
  if ( v6 )
    sub_180010EC8(v6);
  v7 = *(_QWORD *)(a1 + 248);
  if ( v7 )
    sub_180010EC8(v7);
  v8 = *(_QWORD *)(a1 + 216);
  if ( v8 )
    sub_180010EC8(v8);
  v9 = *(_QWORD *)(a1 + 128);
  if ( v9 )
  {
    sub_180024D50(v9, *(_QWORD *)(a1 + 136));
    sub_18000E26C(*(void **)(a1 + 128), (*(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 128)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v10 = *(volatile signed __int32 **)(a1 + 88);
  if ( v10 )
    sub_180010F00(v10);
  return sub_18002B454((_QWORD *)a1);
}
