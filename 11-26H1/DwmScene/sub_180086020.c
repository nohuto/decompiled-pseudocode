/*
 * XREFs of sub_180086020 @ 0x180086020
 * Callers:
 *     sub_18005FD40 @ 0x18005FD40 (sub_18005FD40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800252C4 @ 0x1800252C4 (sub_1800252C4.c)
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_180056AE0 @ 0x180056AE0 (sub_180056AE0.c)
 *     sub_1800576C8 @ 0x1800576C8 (sub_1800576C8.c)
 *     sub_18005A95C @ 0x18005A95C (sub_18005A95C.c)
 *     sub_18005A9B0 @ 0x18005A9B0 (sub_18005A9B0.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_1800608B8 @ 0x1800608B8 (sub_1800608B8.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 */

// Hidden C++ exception states: #wind=22
_QWORD *__fastcall sub_180086020(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  __m128i *v6; // rax
  __int64 v7; // rbx
  __m128i *v8; // rax
  __int64 v9; // rbx
  __m128i *v10; // rax
  __m128i v12; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h]
  void *v16[2]; // [rsp+68h] [rbp-98h] BYREF
  void *v17[2]; // [rsp+78h] [rbp-88h] BYREF
  void *v18[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v19[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v20[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v21[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v22; // [rsp+100h] [rbp+0h] BYREF

  v18[2] = a1;
  v3 = sub_180012C40(&v13, a2);
  sub_180056AE0((__int64)a1, (__int64)v3);
  *a1 = &Spectre::Engine::ShadowMapCamera::`vftable';
  sub_1800143C0((__int64)(a1 + 221));
  a1[225] = 0LL;
  a1[226] = 0LL;
  a1[227] = 0LL;
  a1[228] = 0LL;
  a1[229] = 0LL;
  a1[230] = 0LL;
  sub_1800143C0((__int64)(a1 + 231));
  a1[235] = 0LL;
  a1[236] = 0LL;
  a1[237] = 0LL;
  a1[238] = 0LL;
  a1[239] = 0LL;
  a1[240] = 0LL;
  *(_QWORD *)((char *)a1 + 1940) = 360LL;
  *((_DWORD *)a1 + 487) = 0;
  *((_WORD *)a1 + 976) = 257;
  *(_QWORD *)((char *)a1 + 1956) = 0LL;
  *((_DWORD *)a1 + 491) = 1;
  *((_DWORD *)a1 + 492) = 1065353216;
  *((_DWORD *)a1 + 493) = 6;
  *((_DWORD *)a1 + 494) = 21;
  v4 = *(_QWORD *)(sub_18007AB60((__int64)a1) + 512);
  sub_1800181BC(v19, (__int64)&unk_1801CCE38);
  v12.m128i_i64[0] = (__int64)v19;
  v12.m128i_i64[1] = (__int64)v20;
  sub_1800608B8((__int64 *)v18, &v12);
  sub_18000BFA4((__int64)v19, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v13.m128i_i64, v18);
  v5 = sub_18004E254(v4, (void **)&v13);
  v6 = (__m128i *)sub_1800252C4(&v14);
  v12 = 0LL;
  v12 = *v6;
  v6->m128i_i64[0] = 0LL;
  v6->m128i_i64[1] = 0LL;
  *((_DWORD *)a1 + 482) = sub_1800576C8(a1, 0x10000LL, 0LL, &v12, v5);
  if ( v15 )
    sub_180010EC8(v15);
  sub_1800181BC(v21, (__int64)&unk_1801CCEB8);
  v13.m128i_i64[0] = (__int64)v21;
  v13.m128i_i64[1] = (__int64)&v22;
  sub_1800608B8((__int64 *)v17, &v13);
  sub_18000BFA4((__int64)v21, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v13.m128i_i64, v17);
  v7 = sub_18004E254(v4, (void **)&v13);
  v8 = (__m128i *)sub_1800252C4(&v14);
  v12 = 0LL;
  v12 = *v8;
  v8->m128i_i64[0] = 0LL;
  v8->m128i_i64[1] = 0LL;
  *((_DWORD *)a1 + 483) = sub_1800576C8(a1, 0x10000LL, 0LL, &v12, v7);
  if ( v15 )
    sub_180010EC8(v15);
  sub_1800181BC(v19, (__int64)&unk_1801CCEB8);
  sub_1800181BC(v20, (__int64)&unk_1801CCE98);
  v13.m128i_i64[0] = (__int64)v19;
  v13.m128i_i64[1] = (__int64)v21;
  sub_1800608B8((__int64 *)v16, &v13);
  sub_18000BFA4((__int64)v19, 32LL, 2LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v13.m128i_i64, v16);
  v9 = sub_18004E254(v4, (void **)&v13);
  v10 = (__m128i *)sub_1800252C4(&v14);
  v12 = 0LL;
  v12 = *v10;
  v10->m128i_i64[0] = 0LL;
  v10->m128i_i64[1] = 0LL;
  *((_DWORD *)a1 + 484) = sub_1800576C8(a1, 256LL, 0LL, &v12, v9);
  if ( v15 )
    sub_180010EC8(v15);
  sub_18005A9B0((__int64)a1, *((_DWORD *)a1 + 482), 1);
  sub_18005A9B0((__int64)a1, *((_DWORD *)a1 + 483), 0);
  sub_18005A9B0((__int64)a1, *((_DWORD *)a1 + 484), 0);
  sub_18005A95C((__int64)a1, 1024, 1);
  *((_DWORD *)a1 + 74) = 1065353216;
  *((_DWORD *)a1 + 75) = 1065353216;
  *((_DWORD *)a1 + 76) = 1065353216;
  *((_DWORD *)a1 + 77) = 1065353216;
  *((_DWORD *)a1 + 32) = 1;
  sub_18004C0E0(v16, (__int64)v16);
  sub_18004C0E0(v17, (__int64)v17);
  sub_18004C0E0(v18, (__int64)v18);
  return a1;
}
