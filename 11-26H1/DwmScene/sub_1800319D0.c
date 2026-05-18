/*
 * XREFs of sub_1800319D0 @ 0x1800319D0
 * Callers:
 *     sub_180032490 @ 0x180032490 (sub_180032490.c)
 *     sub_180060D20 @ 0x180060D20 (sub_180060D20.c)
 *     sub_1800DC4C1 @ 0x1800DC4C1 (sub_1800DC4C1.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011964 @ 0x180011964 (sub_180011964.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_180018460 @ 0x180018460 (sub_180018460.c)
 *     sub_18001850C @ 0x18001850C (sub_18001850C.c)
 *     sub_180025B90 @ 0x180025B90 (sub_180025B90.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_18003148C @ 0x18003148C (sub_18003148C.c)
 *     sub_1800314BC @ 0x1800314BC (sub_1800314BC.c)
 *     sub_180031850 @ 0x180031850 (sub_180031850.c)
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_180031F14 @ 0x180031F14 (sub_180031F14.c)
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 *     sub_180038000 @ 0x180038000 (sub_180038000.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=29
__int64 __fastcall sub_1800319D0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD **v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  sub_180029C10(a1 + 8, (__int64)v17);
  if ( !*(_BYTE *)(a1 + 1160) )
  {
    sub_180036544(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    *(_BYTE *)(a1 + 1160) = 1;
  }
  sub_180011E54((__int64)v17);
  sub_180031D30(a1 + 1424);
  sub_180014244(a1 + 1392);
  sub_180031F14(a1 + 1184);
  sub_180025B90(a1 + 1104);
  sub_180027AF0((void **)(a1 + 1080));
  sub_180031850((void ***)(a1 + 984));
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
    sub_180010EC8(v2);
  v3 = *(_QWORD *)(a1 + 888);
  if ( v3 )
  {
    sub_180011964(v3, *(_QWORD *)(a1 + 896));
    sub_18000E26C(*(void **)(a1 + 888), (*(_QWORD *)(a1 + 904) - *(_QWORD *)(a1 + 888)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 888) = 0LL;
    *(_QWORD *)(a1 + 896) = 0LL;
    *(_QWORD *)(a1 + 904) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 864);
  if ( v4 )
  {
    sub_180011964(v4, *(_QWORD *)(a1 + 872));
    sub_18000E26C(*(void **)(a1 + 864), (*(_QWORD *)(a1 + 880) - *(_QWORD *)(a1 + 864)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 864) = 0LL;
    *(_QWORD *)(a1 + 872) = 0LL;
    *(_QWORD *)(a1 + 880) = 0LL;
  }
  sub_180025B90(a1 + 808);
  sub_1800314BC((void **)(a1 + 728));
  v5 = *(_QWORD *)(a1 + 704);
  if ( v5 )
  {
    sub_1800130CC(v5, *(_QWORD *)(a1 + 712));
    sub_18000E26C(*(void **)(a1 + 704), (*(_QWORD *)(a1 + 720) - *(_QWORD *)(a1 + 704)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 704) = 0LL;
    *(_QWORD *)(a1 + 712) = 0LL;
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  sub_18001850C(a1 + 568);
  v6 = *(_QWORD *)(a1 + 520);
  if ( v6 )
    sub_180010EC8(v6);
  v7 = *(_QWORD *)(a1 + 504);
  if ( v7 )
    sub_180010EC8(v7);
  v8 = *(_QWORD *)(a1 + 488);
  if ( v8 )
    sub_180010EC8(v8);
  v9 = *(_QWORD *)(a1 + 472);
  if ( v9 )
    sub_180010EC8(v9);
  sub_180038000(a1 + 432);
  sub_180025B90(a1 + 312);
  v10 = *(_QWORD *)(a1 + 288);
  if ( v10 )
  {
    sub_180011964(v10, *(_QWORD *)(a1 + 296));
    sub_18000E26C(*(void **)(a1 + 288), (*(_QWORD *)(a1 + 304) - *(_QWORD *)(a1 + 288)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 288) = 0LL;
    *(_QWORD *)(a1 + 296) = 0LL;
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  sub_180038000(a1 + 256);
  sub_18003148C((void **)(a1 + 184));
  v11 = *(_QWORD ***)(a1 + 168);
  *v11[1] = 0LL;
  v12 = *v11;
  if ( *v11 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      v14 = v12[3];
      if ( v14 )
        sub_180010EC8(v14);
      sub_18000E26C(v12, 0x20uLL);
      v12 = v13;
    }
    while ( v13 );
  }
  sub_18000E26C(*(void **)(a1 + 168), 0x20uLL);
  sub_180025B90(a1 + 112);
  sub_1800141F0(a1 + 88);
  sub_180018460((__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 80));
  v15 = *(_QWORD *)(a1 + 72);
  if ( v15 )
    sub_180010EC8(v15);
  return sub_180025B90(a1 + 8);
}
