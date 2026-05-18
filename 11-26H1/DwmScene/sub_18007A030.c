/*
 * XREFs of sub_18007A030 @ 0x18007A030
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800187D4 @ 0x1800187D4 (sub_1800187D4.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004DE74 @ 0x18004DE74 (sub_18004DE74.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_18005D05C @ 0x18005D05C (sub_18005D05C.c)
 *     sub_18005D420 @ 0x18005D420 (sub_18005D420.c)
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_18005D8B8 @ 0x18005D8B8 (sub_18005D8B8.c)
 *     sub_1800608B8 @ 0x1800608B8 (sub_1800608B8.c)
 *     sub_180078B44 @ 0x180078B44 (sub_180078B44.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 *     sub_180080D3C @ 0x180080D3C (sub_180080D3C.c)
 *     sub_180080E34 @ 0x180080E34 (sub_180080E34.c)
 *     sub_1800812CC @ 0x1800812CC (sub_1800812CC.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18007A030(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  char v12; // r13
  char v13; // al
  _DWORD *v14; // rsi
  _DWORD *v15; // r12
  char v16; // r14
  __int64 v17; // r15
  __int64 *v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __m128i v24; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int128 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  void *v33[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-38h]
  _QWORD v40[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v41[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v42[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v43[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v44; // [rsp+160h] [rbp+60h] BYREF

  v4 = a2;
  v32 = a2;
  v5 = a1;
  v31 = a1;
  v24.m128i_i64[0] = (__int64)&v34;
  v6 = sub_18004232C(a1 + 8, &v34);
  v7 = sub_1800181BC(&v38, (__int64)&unk_1801CD518);
  v8 = sub_18004DE74(v4, &v36, (__int64)v7, v6);
  v9 = (__int64 *)(v5 + 56);
  sub_180011F5C((_QWORD *)(v5 + 56), v8);
  if ( v37 )
    sub_180010EC8(v37);
  v10 = *v9;
  v11 = sub_180011CC4(&v38, "BackgroundUnlit");
  sub_180078B44(v10, (__int64)v11);
  sub_1800187D4((__int64 *)(*v9 + 528), (__int64)a3);
  sub_18005D05C(*v9, (__int64)&unk_1801CD538);
  sub_18005D05C(*v9, (__int64)&unk_1801CD558);
  sub_18005D05C(*v9, (__int64)&unk_1801CD578);
  sub_18005D05C(*v9, (__int64)&unk_1801CD598);
  v12 = sub_18005D05C(*v9, (__int64)&unk_1801CD5B8);
  sub_1800181BC(v40, (__int64)&unk_1801CD538);
  sub_1800181BC(v41, (__int64)&unk_1801CD558);
  sub_1800181BC(v42, (__int64)&unk_1801CD578);
  sub_1800181BC(v43, (__int64)&unk_1801CD598);
  v24.m128i_i64[0] = (__int64)v40;
  v24.m128i_i64[1] = (__int64)&v44;
  sub_1800608B8((__int64 *)v33, &v24);
  sub_18000BFA4((__int64)v40, 32LL, 4LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v24.m128i_i64, v33);
  v24.m128i_i64[0] = sub_18004E254(v4, (void **)&v24);
  v13 = sub_18005D05C(*v9, (__int64)&unk_1801CD5D8);
  v14 = (_DWORD *)*a3;
  v15 = (_DWORD *)a3[1];
  if ( v14 != v15 )
  {
    v16 = v13;
    v17 = v24.m128i_i64[0];
    do
    {
      *(_DWORD *)(*v9 + 552) = *v14;
      v25 = 0LL;
      v18 = (__int64 *)sub_18005D420(*v9, (__int64)&v36, v12);
      sub_180011F5C(&v25, v18);
      if ( v37 )
        sub_180010EC8(v37);
      LODWORD(v26) = 0;
      v27 = 1LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v19 = v25;
      sub_1800812CC(v25, &v26);
      sub_180080D3C(v19, 0, 1, 3, 1);
      v20 = sub_180011CC4(&v26, byte_1800F9DE0);
      sub_180080E34(v19, 5LL, v20);
      v21 = sub_18005D458(*v9, &v34, v17, 0LL, 1);
      sub_180011F5C(&v25, v21);
      if ( v35 )
        sub_180010EC8(v35);
      LODWORD(v26) = 0;
      v27 = 1LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      sub_1800812CC(v25, &v26);
      sub_180080D3C(v25, 0, 1, 1, 1);
      v22 = (__int64 *)sub_18005D420(*v9, (__int64)&v38, v16);
      sub_180011F5C(&v25, v22);
      if ( v39 )
        sub_180010EC8(v39);
      LODWORD(v26) = 0;
      v27 = 1LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      sub_1800812CC(v25, &v26);
      sub_180080D3C(v25, 1, 1, 1, 1);
      *(_DWORD *)(*v9 + 552) = 0;
      if ( *((_QWORD *)&v25 + 1) )
        sub_180010EC8(*((__int64 *)&v25 + 1));
      ++v14;
    }
    while ( v14 != v15 );
    v5 = v31;
    v4 = v32;
  }
  sub_180079644(v5, v4);
  sub_18005D8B8(*v9);
  return sub_18004C0E0(v33, (__int64)v33);
}
