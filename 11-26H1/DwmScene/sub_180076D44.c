/*
 * XREFs of sub_180076D44 @ 0x180076D44
 * Callers:
 *     sub_180076C20 @ 0x180076C20 (sub_180076C20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_1800608B8 @ 0x1800608B8 (sub_1800608B8.c)
 *     sub_180080D3C @ 0x180080D3C (sub_180080D3C.c)
 *     sub_1800812CC @ 0x1800812CC (sub_1800812CC.c)
 */

// Hidden C++ exception states: #wind=38
__int64 __fastcall sub_180076D44(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  void **v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __m128i v19; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  _QWORD v25[2]; // [rsp+70h] [rbp-90h] BYREF
  void *v26[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v27[2]; // [rsp+90h] [rbp-70h] BYREF
  void *v28[2]; // [rsp+A0h] [rbp-60h] BYREF
  void *v29[2]; // [rsp+B0h] [rbp-50h] BYREF
  void *v30[2]; // [rsp+C0h] [rbp-40h] BYREF
  void *v31[2]; // [rsp+D0h] [rbp-30h] BYREF
  void *v32[2]; // [rsp+E0h] [rbp-20h] BYREF
  void *v33[2]; // [rsp+F0h] [rbp-10h] BYREF
  void *v34[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v35; // [rsp+110h] [rbp+10h] BYREF
  __int64 v36; // [rsp+118h] [rbp+18h]
  __int64 v37; // [rsp+120h] [rbp+20h] BYREF
  __int64 v38; // [rsp+128h] [rbp+28h]
  __int64 v39; // [rsp+130h] [rbp+30h] BYREF
  __int64 v40; // [rsp+138h] [rbp+38h]
  __int64 v41; // [rsp+140h] [rbp+40h] BYREF
  __int64 v42; // [rsp+148h] [rbp+48h]
  __int64 v43; // [rsp+150h] [rbp+50h] BYREF
  __int64 v44; // [rsp+158h] [rbp+58h]
  __int64 v45; // [rsp+160h] [rbp+60h] BYREF
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 v47; // [rsp+170h] [rbp+70h] BYREF
  __int64 v48; // [rsp+178h] [rbp+78h]
  __int64 v49; // [rsp+180h] [rbp+80h] BYREF
  __int64 v50; // [rsp+188h] [rbp+88h]
  __int128 v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v53; // [rsp+1A8h] [rbp+A8h]
  _QWORD v54[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v55; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v56; // [rsp+1E8h] [rbp+E8h]
  _QWORD v57[4]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v58[4]; // [rsp+220h] [rbp+120h] BYREF
  _QWORD v59[4]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v60[4]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v61; // [rsp+280h] [rbp+180h] BYREF

  sub_1800181BC(&v55, (__int64)&unk_1801CCEB8);
  v19.m128i_i64[0] = (__int64)&v55;
  v19.m128i_i64[1] = (__int64)v57;
  sub_1800608B8((__int64 *)v34, &v19);
  sub_18000BFA4((__int64)&v55, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_1800181BC(&v49, (__int64)&unk_1801CCEB8);
  sub_1800181BC(&v52, (__int64)&unk_1801CCF18);
  v19.m128i_i64[0] = (__int64)&v49;
  v19.m128i_i64[1] = (__int64)v54;
  sub_1800608B8((__int64 *)v33, &v19);
  sub_18000BFA4((__int64)&v49, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_1800181BC(&v55, (__int64)&unk_1801CCE98);
  v19.m128i_i64[0] = (__int64)&v55;
  v19.m128i_i64[1] = (__int64)v57;
  sub_1800608B8((__int64 *)v32, &v19);
  sub_18000BFA4((__int64)&v55, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_1800181BC(&v49, (__int64)&unk_1801CCEB8);
  sub_1800181BC(&v52, (__int64)&unk_1801CCE98);
  v19.m128i_i64[0] = (__int64)&v49;
  v19.m128i_i64[1] = (__int64)v54;
  sub_1800608B8((__int64 *)v31, &v19);
  sub_18000BFA4((__int64)&v49, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_1800181BC(v57, (__int64)&unk_1801CCEB8);
  sub_1800181BC(v58, (__int64)&unk_1801CCDD8);
  v19.m128i_i64[0] = (__int64)v57;
  v19.m128i_i64[1] = (__int64)v59;
  sub_1800608B8((__int64 *)v30, &v19);
  sub_18000BFA4((__int64)v57, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_1800181BC(&v49, (__int64)&unk_1801CCEB8);
  sub_1800181BC(&v52, (__int64)&unk_1801CCE98);
  sub_1800181BC(v54, (__int64)&unk_1801CCDF8);
  v19.m128i_i64[0] = (__int64)&v49;
  v19.m128i_i64[1] = (__int64)&v55;
  sub_1800608B8((__int64 *)v29, &v19);
  sub_18000BFA4((__int64)&v49, 32LL, 3LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_1800181BC(v57, (__int64)&unk_1801CCEB8);
  sub_1800181BC(v58, (__int64)&unk_1801CCE98);
  sub_1800181BC(v59, (__int64)&unk_1801CCDD8);
  sub_1800181BC(v60, (__int64)&unk_1801CCDF8);
  v19.m128i_i64[0] = (__int64)v57;
  v19.m128i_i64[1] = (__int64)&v61;
  sub_1800608B8((__int64 *)v28, &v19);
  sub_18000BFA4((__int64)v57, 32LL, 4LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_1800181BC(&v49, (__int64)&unk_1801CCEB8);
  sub_1800181BC(&v52, (__int64)&unk_1801CCE98);
  sub_1800181BC(v54, (__int64)&unk_1801CCDD8);
  v19.m128i_i64[0] = (__int64)&v49;
  v19.m128i_i64[1] = (__int64)&v55;
  sub_1800608B8((__int64 *)v27, &v19);
  sub_18000BFA4((__int64)&v49, 32LL, 3LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v19.m128i_i64, v34);
  v4 = sub_18004E254(a2, (void **)&v19);
  sub_18005BBE8(v19.m128i_i64, v33);
  v5 = sub_18004E254(a2, (void **)&v19);
  sub_18005BBE8(v19.m128i_i64, v32);
  v6 = sub_18004E254(a2, (void **)&v19);
  sub_18005BBE8(v19.m128i_i64, v31);
  v24 = sub_18004E254(a2, (void **)&v19);
  sub_18005BBE8(v19.m128i_i64, v30);
  v21 = sub_18004E254(a2, (void **)&v19);
  sub_18005BBE8(v19.m128i_i64, v29);
  v23 = sub_18004E254(a2, (void **)&v19);
  sub_18005BBE8(v19.m128i_i64, v28);
  v7 = sub_18004E254(a2, (void **)&v19);
  sub_18005BBE8(v19.m128i_i64, v27);
  v22 = sub_18004E254(a2, (void **)&v19);
  v19 = 0LL;
  sub_1800181BC(v57, (__int64)&unk_1801CCF38);
  v20.m128i_i64[0] = (__int64)v57;
  v20.m128i_i64[1] = (__int64)v58;
  sub_1800608B8((__int64 *)v26, &v20);
  sub_18000BFA4((__int64)v57, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v20.m128i_i64, v26);
  v25[0] = sub_18004E254(a2, (void **)&v20);
  v25[1] = 0LL;
  v8 = (void **)v25;
  do
  {
    v9 = (unsigned __int64)*v8;
    v10 = sub_18005D458(*(_QWORD *)(a1 + 56), &v35, v7 | (unsigned __int64)*v8, 0LL, 1);
    sub_180011F5C(&v19, v10);
    if ( v36 )
      sub_180010EC8(v36);
    LODWORD(v49) = 0;
    v50 = *(_QWORD *)(a1 + 112);
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    sub_1800812CC(v19.m128i_i64[0], &v49);
    sub_180080D3C(v19.m128i_i32[0], 15, 2, 1, 1);
    v11 = sub_18005D458(*(_QWORD *)(a1 + 56), &v37, v22 | v9, 0LL, 1);
    sub_180011F5C(&v19, v11);
    if ( v38 )
      sub_180010EC8(v38);
    LODWORD(v49) = 0;
    v50 = *(_QWORD *)(a1 + 112);
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    sub_1800812CC(v19.m128i_i64[0], &v49);
    sub_180080D3C(v19.m128i_i32[0], 15, 2, 1, 1);
    v12 = sub_18005D458(*(_QWORD *)(a1 + 56), &v39, v23 | v9, 0LL, 1);
    sub_180011F5C(&v19, v12);
    if ( v40 )
      sub_180010EC8(v40);
    LODWORD(v49) = 0;
    v50 = *(_QWORD *)(a1 + 112);
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    sub_1800812CC(v19.m128i_i64[0], &v49);
    sub_180080D3C(v19.m128i_i32[0], 15, 2, 1, 1);
    v13 = sub_18005D458(*(_QWORD *)(a1 + 56), &v41, v24 | v9, 0LL, 1);
    sub_180011F5C(&v19, v13);
    if ( v42 )
      sub_180010EC8(v42);
    LODWORD(v49) = 0;
    v50 = *(_QWORD *)(a1 + 112);
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    sub_1800812CC(v19.m128i_i64[0], &v49);
    sub_180080D3C(v19.m128i_i32[0], 15, 2, 1, 1);
    v14 = sub_18005D458(*(_QWORD *)(a1 + 56), &v43, v21 | v9, 0LL, 1);
    sub_180011F5C(&v19, v14);
    if ( v44 )
      sub_180010EC8(v44);
    LODWORD(v49) = 0;
    v50 = *(_QWORD *)(a1 + 112);
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    sub_1800812CC(v19.m128i_i64[0], &v49);
    sub_180080D3C(v19.m128i_i32[0], 15, 2, 3, 1);
    v15 = sub_18005D458(*(_QWORD *)(a1 + 56), &v45, v4 | v9, 0LL, 1);
    sub_180011F5C(&v19, v15);
    if ( v46 )
      sub_180010EC8(v46);
    LODWORD(v49) = 0;
    v50 = *(_QWORD *)(a1 + 112);
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    sub_1800812CC(v19.m128i_i64[0], &v49);
    sub_180080D3C(v19.m128i_i32[0], 0, 2, 3, 1);
    v16 = sub_18005D458(*(_QWORD *)(a1 + 56), &v47, v6 | v9, 0LL, 1);
    sub_180011F5C(&v19, v16);
    if ( v48 )
      sub_180010EC8(v48);
    LODWORD(v49) = 0;
    v50 = *(_QWORD *)(a1 + 112);
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    sub_1800812CC(v19.m128i_i64[0], &v49);
    sub_180080D3C(v19.m128i_i32[0], 15, 2, 1, 1);
    v17 = sub_18005D458(*(_QWORD *)(a1 + 56), &v55, v5 | v9, 0LL, 1);
    sub_180011F5C(&v19, v17);
    if ( v56 )
      sub_180010EC8(v56);
    LODWORD(v49) = 0;
    v50 = *(_QWORD *)(a1 + 112);
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    sub_1800812CC(v19.m128i_i64[0], &v49);
    sub_180080D3C(v19.m128i_i32[0], 0, 2, 3, 1);
    ++v8;
  }
  while ( v8 != v26 );
  sub_18004C0E0(v26, (__int64)v26);
  if ( v19.m128i_i64[1] )
    sub_180010EC8(v19.m128i_i64[1]);
  sub_18004C0E0(v27, (__int64)v27);
  sub_18004C0E0(v28, (__int64)v28);
  sub_18004C0E0(v29, (__int64)v29);
  sub_18004C0E0(v30, (__int64)v30);
  sub_18004C0E0(v31, (__int64)v31);
  sub_18004C0E0(v32, (__int64)v32);
  sub_18004C0E0(v33, (__int64)v33);
  return sub_18004C0E0(v34, (__int64)v34);
}
