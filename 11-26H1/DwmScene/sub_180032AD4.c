/*
 * XREFs of sub_180032AD4 @ 0x180032AD4
 * Callers:
 *     sub_1800167D4 @ 0x1800167D4 (sub_1800167D4.c)
 *     sub_1800168F8 @ 0x1800168F8 (sub_1800168F8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180024D18 @ 0x180024D18 (sub_180024D18.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_1800266A4 @ 0x1800266A4 (sub_1800266A4.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18002CEB0 @ 0x18002CEB0 (sub_18002CEB0.c)
 *     sub_18002D578 @ 0x18002D578 (sub_18002D578.c)
 *     sub_18002D818 @ 0x18002D818 (sub_18002D818.c)
 *     sub_18002F858 @ 0x18002F858 (sub_18002F858.c)
 *     sub_18002FCC0 @ 0x18002FCC0 (sub_18002FCC0.c)
 *     sub_180032F74 @ 0x180032F74 (sub_180032F74.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_18003437C @ 0x18003437C (sub_18003437C.c)
 *     sub_180035438 @ 0x180035438 (sub_180035438.c)
 *     sub_180035614 @ 0x180035614 (sub_180035614.c)
 *     sub_180054DA8 @ 0x180054DA8 (sub_180054DA8.c)
 *     sub_180055064 @ 0x180055064 (sub_180055064.c)
 *     sub_18005D174 @ 0x18005D174 (sub_18005D174.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180032AD4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r8
  _BYTE *v12; // rbx
  _QWORD *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 i; // rbx
  _QWORD *v26; // rcx
  __int64 *v27; // rbx
  __int64 *v28; // r14
  _QWORD *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rcx
  _BYTE *v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h]
  __int128 v35; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v37; // [rsp+58h] [rbp-A8h]
  _BYTE v38[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v40[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v41[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v42[7]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v43; // [rsp+F8h] [rbp-8h]
  _BYTE pExceptionObject[56]; // [rsp+100h] [rbp+0h] BYREF

  sub_180029C10(a1 + 8, (__int64)v39);
  sub_180029C10(a1 + 1104, (__int64)v38);
  sub_180029EF8(*a2 + 24, v4);
  if ( !*(_DWORD *)(a1 + 552) && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v5 = *(_QWORD **)(a1 + 88);
    v6 = *(_QWORD **)(a1 + 96);
    while ( v5 != v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5) )
      {
        sub_180011CC4(
          v41,
          "This Engine instance cannot create multiple devices because it was created with option General.EngineDeviceMode==Single.");
        v7 = (unsigned int)sub_180011CC4(
                             v40,
                             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\sourc"
                             "e\\engine\\engine.cpp");
        sub_18006A84C((unsigned int)pExceptionObject, v7, v8, (unsigned int)v41, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v5 += 2;
    }
  }
  sub_18001DCFC(&qword_1801BD288, 3);
  v9 = sub_18002D818(v40, *a2 + 80);
  sub_1800148EC((__int64)v9);
  sub_18001DCFC(&qword_1801BD288, 3);
  sub_1800129D0((__int64)v40);
  if ( (unsigned int)sub_1800266A4(*a2) )
  {
    sub_180032F74(a1, &v33, v10, 0LL);
    v35 = 0LL;
    sub_180033B20(a1, &v36, v11, &v35);
    if ( v36 )
      sub_180054DA8(v33, &v36);
    if ( v37 )
      sub_180010EC8((__int64)v37);
    v12 = v33;
    v13 = sub_180026650(*a2, &v36, 0);
    sub_180055064(v12, v13);
    if ( v37 )
      sub_180010EC8((__int64)v37);
    sub_1800162D0(&v36, a2);
    sub_18002F858((__int64 *)(a1 + 184), (__int64)v40, (__int64)&v36);
    v14 = sub_180012C40(&v35, &v33);
    v15 = *v14;
    *v14 = *(_QWORD *)(v16 + 48);
    *(_QWORD *)(v16 + 48) = v15;
    v17 = v14[1];
    v14[1] = *(_QWORD *)(v16 + 56);
    *(_QWORD *)(v16 + 56) = v17;
    if ( *((_QWORD *)&v35 + 1) )
      sub_180010EC8(*((__int64 *)&v35 + 1));
    if ( v37 )
      sub_180010F00(v37);
    if ( v34 )
      sub_180010EC8(v34);
  }
  sub_180029C50(a1 + 112, (__int64)&v33);
  sub_18002FCC0((_QWORD *)(a1 + 88), a2);
  sub_180011E54((__int64)&v33);
  sub_180035614(a1);
  v18 = sub_180012C40(v41, a2);
  v36 = v18;
  v20 = **(_QWORD **)(v19 + 18560);
  *(_QWORD *)&v35 = v20;
  while ( !*(_BYTE *)(v20 + 25) )
  {
    v21 = sub_180012C40(v40, v18);
    sub_18005D174(v22, v21);
    sub_18001D6F4((__int64 *)&v35, v23);
    v20 = v35;
  }
  v24 = v18[1];
  if ( v24 )
    sub_180010EC8(v24);
  for ( i = 0LL; i < (__int64)(*(_QWORD *)(a1 + 896) - *(_QWORD *)(a1 + 888)) >> 4; ++i )
  {
    sub_18003437C(a1, &v33, i);
    if ( v33 && (v33[40] & 2) != 0 )
      (*(void (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)v33 + 16LL))(v33, a2);
    if ( v34 )
      sub_180010EC8(v34);
  }
  sub_180012C40(&v33, a2);
  v43 = 0LL;
  v26 = (_QWORD *)sub_18002CEB0(v42, &v33);
  v43 = v26;
  if ( v34 )
  {
    sub_180010EC8(v34);
    v26 = v43;
  }
  v27 = *(__int64 **)(a1 + 704);
  v28 = *(__int64 **)(a1 + 712);
  if ( v27 != v28 )
  {
    do
    {
      sub_180029C50(*v27 + 16, (__int64)v40);
      sub_18002D578(*v27, (__int64)v42);
      sub_180011E54((__int64)v40);
      v27 += 2;
    }
    while ( v27 != v28 );
    v26 = v43;
  }
  if ( v26 )
  {
    v29 = v42;
    LOBYTE(v29) = v26 != v42;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v26 + 32LL))(v26, v29);
  }
  v30 = *a2;
  sub_180012B20((__int64 *)&v35);
  v31 = v35;
  *(_QWORD *)(v30 + 440) = v35;
  sub_180024D18(v31 - *(_QWORD *)(v30 + 424));
  sub_18001DCFC(&qword_1801BD228, 3);
  sub_180035438(a1);
  sub_180011E54((__int64)v38);
  return sub_180011E54((__int64)v39);
}
