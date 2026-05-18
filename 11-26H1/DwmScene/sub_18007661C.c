/*
 * XREFs of sub_18007661C @ 0x18007661C
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

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_18007661C(__int64 a1, __int64 a2)
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
  __m128i v15; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v16; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *v19[2]; // [rsp+70h] [rbp-90h] BYREF
  void *v20[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v21[2]; // [rsp+90h] [rbp-70h] BYREF
  void *v22[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-48h]
  __int64 v25; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-28h]
  __int64 v29; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-18h]
  __int128 v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp+0h] BYREF
  __int64 v33; // [rsp+108h] [rbp+8h]
  __int64 v34; // [rsp+120h] [rbp+20h] BYREF
  __int64 v35; // [rsp+128h] [rbp+28h]
  _QWORD v36[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v37[4]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v38[4]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v39[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v40; // [rsp+1C0h] [rbp+C0h] BYREF

  sub_1800181BC(&v29, (__int64)&unk_1801CCE18);
  sub_1800181BC(&v32, (__int64)&unk_1801CCDF8);
  v15.m128i_i64[0] = (__int64)&v29;
  v15.m128i_i64[1] = (__int64)&v34;
  sub_1800608B8((__int64 *)v22, &v15);
  sub_18000BFA4((__int64)&v29, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_1800181BC(&v34, (__int64)&unk_1801CCE18);
  v15.m128i_i64[0] = (__int64)&v34;
  v15.m128i_i64[1] = (__int64)v36;
  sub_1800608B8((__int64 *)v21, &v15);
  sub_18000BFA4((__int64)&v34, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_1800181BC(&v29, (__int64)&unk_1801CCE58);
  sub_1800181BC(&v32, (__int64)&unk_1801CCE18);
  v15.m128i_i64[0] = (__int64)&v29;
  v15.m128i_i64[1] = (__int64)&v34;
  sub_1800608B8((__int64 *)v20, &v15);
  sub_18000BFA4((__int64)&v29, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_1800181BC(v37, (__int64)&unk_1801CCE58);
  sub_1800181BC(v38, (__int64)&unk_1801CCE18);
  sub_1800181BC(v39, (__int64)&unk_1801CCDF8);
  v15.m128i_i64[0] = (__int64)v37;
  v15.m128i_i64[1] = (__int64)&v40;
  sub_1800608B8((__int64 *)v19, &v15);
  sub_18000BFA4((__int64)v37, 32LL, 3LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v15.m128i_i64, v21);
  v4 = sub_18004E254(a2, (void **)&v15);
  sub_18005BBE8(v15.m128i_i64, v22);
  v5 = sub_18004E254(a2, (void **)&v15);
  sub_18005BBE8(v15.m128i_i64, v20);
  v6 = sub_18004E254(a2, (void **)&v15);
  sub_18005BBE8(v15.m128i_i64, v19);
  v7 = sub_18004E254(a2, (void **)&v15);
  v15 = 0LL;
  sub_1800181BC(v36, (__int64)&unk_1801CCF38);
  v16.m128i_i64[0] = (__int64)v36;
  v16.m128i_i64[1] = (__int64)v37;
  sub_1800608B8((__int64 *)v18, &v16);
  sub_18000BFA4((__int64)v36, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v16.m128i_i64, v18);
  v17[0] = sub_18004E254(a2, (void **)&v16);
  v17[1] = 0LL;
  v8 = (void **)v17;
  do
  {
    v9 = (unsigned __int64)*v8;
    v10 = sub_18005D458(*(_QWORD *)(a1 + 56), &v23, v7 | (unsigned __int64)*v8, 0LL, 1);
    sub_180011F5C(&v15, v10);
    if ( v24 )
      sub_180010EC8(v24);
    LODWORD(v29) = 0;
    v30 = *(_QWORD *)(a1 + 112);
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    sub_1800812CC(v15.m128i_i64[0], &v29);
    sub_180080D3C(v15.m128i_i32[0], 1, 1, 3, 1);
    v11 = sub_18005D458(*(_QWORD *)(a1 + 56), &v25, v6 | v9, 0LL, 1);
    sub_180011F5C(&v15, v11);
    if ( v26 )
      sub_180010EC8(v26);
    LODWORD(v29) = 0;
    v30 = *(_QWORD *)(a1 + 112);
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    sub_1800812CC(v15.m128i_i64[0], &v29);
    sub_180080D3C(v15.m128i_i32[0], 0, 1, 3, 1);
    v12 = sub_18005D458(*(_QWORD *)(a1 + 56), &v27, v5 | v9, 0LL, 1);
    sub_180011F5C(&v15, v12);
    if ( v28 )
      sub_180010EC8(v28);
    LODWORD(v29) = 0;
    v30 = *(_QWORD *)(a1 + 112);
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    sub_1800812CC(v15.m128i_i64[0], &v29);
    sub_180080D3C(v15.m128i_i32[0], 1, 1, 3, 1);
    v13 = sub_18005D458(*(_QWORD *)(a1 + 56), &v34, v4 | v9, 0LL, 1);
    sub_180011F5C(&v15, v13);
    if ( v35 )
      sub_180010EC8(v35);
    LODWORD(v29) = 0;
    v30 = *(_QWORD *)(a1 + 112);
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    sub_1800812CC(v15.m128i_i64[0], &v29);
    sub_180080D3C(v15.m128i_i32[0], 0, 1, 3, 1);
    ++v8;
  }
  while ( v8 != v18 );
  sub_18004C0E0(v18, (__int64)v18);
  if ( v15.m128i_i64[1] )
    sub_180010EC8(v15.m128i_i64[1]);
  sub_18004C0E0(v19, (__int64)v19);
  sub_18004C0E0(v20, (__int64)v20);
  sub_18004C0E0(v21, (__int64)v21);
  return sub_18004C0E0(v22, (__int64)v22);
}
