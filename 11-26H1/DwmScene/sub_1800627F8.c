/*
 * XREFs of sub_1800627F8 @ 0x1800627F8
 * Callers:
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180012C78 @ 0x180012C78 (sub_180012C78.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180013E60 @ 0x180013E60 (sub_180013E60.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_18003B55C @ 0x18003B55C (sub_18003B55C.c)
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 *     sub_18003F830 @ 0x18003F830 (sub_18003F830.c)
 *     sub_18004FFB0 @ 0x18004FFB0 (sub_18004FFB0.c)
 *     sub_180057650 @ 0x180057650 (sub_180057650.c)
 *     sub_18005E70C @ 0x18005E70C (sub_18005E70C.c)
 *     sub_18005E830 @ 0x18005E830 (sub_18005E830.c)
 *     sub_18005E954 @ 0x18005E954 (sub_18005E954.c)
 *     sub_18005EA78 @ 0x18005EA78 (sub_18005EA78.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     sub_180060EAC @ 0x180060EAC (sub_180060EAC.c)
 *     sub_180087548 @ 0x180087548 (sub_180087548.c)
 *     sub_180087584 @ 0x180087584 (sub_180087584.c)
 *     sub_1800896CC @ 0x1800896CC (sub_1800896CC.c)
 */

// Hidden C++ exception states: #wind=51
__int64 __fastcall sub_1800627F8(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  signed int v14; // r15d
  int v15; // r12d
  __int64 *v16; // rdi
  _QWORD *v17; // r14
  _BYTE *v18; // rsi
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rbx
  __m128 si128; // xmm6
  __m128 v29; // xmm2
  __m128 v30; // xmm0
  __int64 v31; // rbx
  __m128 v32; // xmm3
  __m128 v33; // xmm0
  __int64 v34; // rbx
  __m128 v35; // xmm3
  __m128 v36; // xmm0
  __int64 *v37; // rsi
  __int64 v38; // rdi
  _QWORD *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdi
  _QWORD *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdi
  _QWORD *v45; // rbx
  __int64 v46; // rax
  __m128 v47; // xmm6
  __int64 *v48; // rax
  __int64 *v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rdi
  _QWORD *v52; // rbx
  __int64 v53; // rax
  __int64 *v54; // rax
  __int64 v56; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v57; // [rsp+30h] [rbp-D8h]
  __m128 v58; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B8h]
  __int64 *v61; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+70h] [rbp-98h]
  __int64 v63; // [rsp+78h] [rbp-90h] BYREF
  __int64 v64; // [rsp+80h] [rbp-88h]
  _QWORD v65[4]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-48h]
  _QWORD v68[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v69; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v70; // [rsp+100h] [rbp-8h]
  __int64 v71; // [rsp+118h] [rbp+10h] BYREF
  __int64 v72; // [rsp+120h] [rbp+18h]
  __int64 v73; // [rsp+138h] [rbp+30h] BYREF
  __int64 v74; // [rsp+140h] [rbp+38h]
  __int64 v75; // [rsp+158h] [rbp+50h] BYREF
  __int64 v76; // [rsp+160h] [rbp+58h]
  __int64 v77; // [rsp+178h] [rbp+70h] BYREF
  __int64 v78; // [rsp+180h] [rbp+78h]
  _QWORD v79[4]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v80[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v81[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v82[16]; // [rsp+1D8h] [rbp+D0h] BYREF

  v61 = a2;
  sub_180013440(v79, (__int64)&unk_1801C90B8);
  v3 = *a2;
  v58.m128_u64[0] = (unsigned __int64)v68;
  v4 = sub_180013440(v68, (__int64)v79);
  sub_180011CC4(&v69, "Key");
  v5 = sub_18003B55C((__int64)&v69);
  sub_18003F830(v3, (__int64)v80, v5, (__int64)v4);
  sub_1800129D0((__int64)&v69);
  v6 = *a2;
  v58.m128_u64[0] = (unsigned __int64)&v63;
  v7 = sub_180013440(&v63, (__int64)v79);
  sub_180011CC4(&v75, "Fill");
  v8 = sub_18003B55C((__int64)&v75);
  sub_18003F830(v6, (__int64)v81, v8, (__int64)v7);
  sub_1800129D0((__int64)&v75);
  v9 = *a2;
  v58.m128_u64[0] = (unsigned __int64)v68;
  v10 = sub_180013440(v68, (__int64)v79);
  sub_180011CC4(&v69, "Back");
  v11 = sub_18003B55C((__int64)&v69);
  sub_18003F830(v9, (__int64)v82, v11, (__int64)v10);
  sub_1800129D0((__int64)&v69);
  v13 = sub_18005F93C(*a2, v12);
  v14 = 0;
  v15 = 3;
  v16 = (__int64 *)(v13 + 136);
  v17 = (_QWORD *)(v13 + 56);
  v18 = &v80[-v13];
  do
  {
    v19 = sub_180012C78(*(__int64 *)((char *)v16 + (_QWORD)v18 - 136), &v69);
    sub_180011F5C(v17 - 6, v19);
    if ( v70 )
      sub_180010EC8(v70);
    v20 = sub_18005E70C(*(__int64 *)((char *)v16 + (_QWORD)v18 - 136), &v75);
    sub_180011F5C(v17, v20);
    if ( v76 )
      sub_180010EC8(v76);
    v21 = sub_18005EA78(*(__int64 *)((char *)v16 + (_QWORD)v18 - 136), &v63);
    sub_180011F5C(v17 + 10, v21);
    if ( v64 )
      sub_180010EC8(v64);
    sub_180087584(*v16, 1LL);
    v22 = *v16;
    v23 = sub_180028AE4(&v71, v14);
    v24 = sub_18001C928((__int64)v68, (__int64)"ShadowMap", v23);
    sub_1800143E4(v22 + 24, v24);
    sub_1800129D0((__int64)v68);
    sub_1800129D0((__int64)&v71);
    sub_180057650(*v16, (__int64)&unk_1801C9038);
    *(_DWORD *)(*v16 + 292) = v15;
    v25 = sub_180028AE4(v68, v14);
    sub_18001C928((__int64)&v73, (__int64)"Global/ShadowBuffer", v25);
    sub_1800129D0((__int64)v68);
    v26 = sub_180028AE4(&v71, v14);
    sub_18001C928((__int64)&v66, (__int64)"Global/ColoredShadowBuffer", v26);
    sub_1800129D0((__int64)&v71);
    sub_180087548(*v16, &v73, &v66);
    sub_1800129D0((__int64)&v66);
    sub_1800129D0((__int64)&v73);
    ++v14;
    v17 += 2;
    --v15;
    v16 += 2;
  }
  while ( v15 > 0 );
  sub_180012C40(&v69, (_QWORD *)(v13 + 8));
  sub_180012C40(&v75, (_QWORD *)(v13 + 24));
  sub_180012C40(&v63, (_QWORD *)(v13 + 40));
  sub_180011CC4(&v66, "Key");
  v27 = v69;
  sub_1800143E4(v69 + 24, (__int64)&v66);
  sub_1800129D0((__int64)&v66);
  *(_BYTE *)(v27 + 72) = 1;
  *(_BYTE *)(v27 + 124) = 1;
  sub_180012A94(v27 + 56, &v59);
  LODWORD(v57) = -1074818325;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_180191600);
  v29 = 0LL;
  v29.m128_u64[0] = _mm_unpacklo_ps((__m128)0xBFDE17FA, (__m128)0x40153B12u).m128_u64[0];
  v56 = 0LL;
  v30 = _mm_mul_ps(_mm_movelh_ps(v29, (__m128)0xBFEF92EB), si128);
  v58.m128_u64[0] = v30.m128_u64[0];
  v58.m128_i32[2] = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
  sub_180013E60(v59, &v58);
  if ( v60 )
    sub_180010EC8(v60);
  sub_180012A94(v27 + 56, &v59);
  v58.m128_u64[0] = 0x3F80000000000000LL;
  v58.m128_i32[2] = 0;
  v56 = 0LL;
  LODWORD(v57) = 0;
  sub_18003BF34(v59, (unsigned __int64 *)&v56, (__int64)&v58);
  if ( v60 )
    sub_180010EC8(v60);
  *(_DWORD *)(v27 + 104) = 1092370432;
  *(_DWORD *)(v27 + 116) = 1028443341;
  sub_180011CC4(&v66, "Fill");
  v31 = v75;
  sub_1800143E4(v75 + 24, (__int64)&v66);
  sub_1800129D0((__int64)&v66);
  *(_BYTE *)(v31 + 72) = 1;
  *(_BYTE *)(v31 + 124) = 1;
  *(_DWORD *)(v31 + 88) = 1060487823;
  *(_DWORD *)(v31 + 92) = 1061997773;
  *(_DWORD *)(v31 + 96) = 1065151889;
  *(_DWORD *)(v31 + 100) = 1065353216;
  sub_180012A94(v31 + 56, &v59);
  v32 = 0LL;
  v32.m128_u64[0] = _mm_unpacklo_ps((__m128)0x3FE02A60u, (__m128)0x4011700Cu).m128_u64[0];
  v33 = _mm_mul_ps(_mm_movelh_ps(v32, (__m128)0xC023EE53), si128);
  v56 = v33.m128_u64[0];
  LODWORD(v57) = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
  sub_180013E60(v59, &v56);
  if ( v60 )
    sub_180010EC8(v60);
  sub_180012A94(v31 + 56, &v59);
  v56 = 0x3F80000000000000LL;
  LODWORD(v57) = 0;
  v58.m128_u64[0] = 0LL;
  v58.m128_i32[2] = 0;
  sub_18003BF34(v59, (unsigned __int64 *)&v58, (__int64)&v56);
  if ( v60 )
    sub_180010EC8(v60);
  *(_DWORD *)(v31 + 104) = 1086849024;
  *(_DWORD *)(v31 + 116) = 1036831949;
  sub_180011CC4(&v66, "Back");
  v34 = v63;
  sub_1800143E4(v63 + 24, (__int64)&v66);
  sub_1800129D0((__int64)&v66);
  *(_BYTE *)(v34 + 72) = 1;
  *(_BYTE *)(v34 + 124) = 1;
  *(_DWORD *)(v34 + 88) = 1063144775;
  *(_DWORD *)(v34 + 92) = 1060773036;
  *(_DWORD *)(v34 + 96) = 1065353216;
  *(_DWORD *)(v34 + 100) = 1065353216;
  sub_180012A94(v34 + 56, &v59);
  v35 = 0LL;
  v35.m128_u64[0] = _mm_unpacklo_ps((__m128)0x3FD6B197u, (__m128)0x4025238Bu).m128_u64[0];
  v36 = _mm_mul_ps(_mm_movelh_ps(v35, (__m128)0x3FC5CCF6u), si128);
  v56 = v36.m128_u64[0];
  LODWORD(v57) = _mm_shuffle_ps(v36, v36, 170).m128_u32[0];
  sub_180013E60(v59, &v56);
  if ( v60 )
    sub_180010EC8(v60);
  sub_180012A94(v34 + 56, &v59);
  v56 = 0x3F80000000000000LL;
  LODWORD(v57) = 0;
  v58.m128_u64[0] = 0LL;
  v58.m128_i32[2] = 0;
  sub_18003BF34(v59, (unsigned __int64 *)&v58, (__int64)&v56);
  if ( v60 )
    sub_180010EC8(v60);
  *(_DWORD *)(v34 + 104) = 1078460416;
  *(_DWORD *)(v34 + 116) = 1045220557;
  v37 = v61;
  v38 = *v61;
  v58.m128_u64[0] = (unsigned __int64)v68;
  v39 = sub_180013440(v68, (__int64)&unk_1801C90B8);
  sub_180011CC4(&v73, "LightProbe0");
  v40 = sub_18003B55C((__int64)&v73);
  sub_18003F830(v38, (__int64)&v66, v40, (__int64)v39);
  sub_1800129D0((__int64)&v73);
  v41 = *v37;
  v58.m128_u64[0] = (unsigned __int64)&v59;
  v42 = sub_180013440(&v59, (__int64)&unk_1801C90B8);
  sub_180011CC4(&v71, "LightProbe1");
  v43 = sub_18003B55C((__int64)&v71);
  sub_18003F830(v41, (__int64)&v73, v43, (__int64)v42);
  sub_1800129D0((__int64)&v71);
  v44 = *v37;
  v58.m128_u64[0] = (unsigned __int64)v68;
  v45 = sub_180013440(v68, (__int64)&unk_1801C90B8);
  sub_180011CC4(&v77, "LightProbe2");
  v46 = sub_18003B55C((__int64)&v77);
  sub_18003F830(v44, (__int64)&v71, v46, (__int64)v45);
  sub_1800129D0((__int64)&v77);
  sub_18005E954(v66, &v59);
  sub_18005E954(v73, &v77);
  sub_18005E954(v71, &v56);
  v47 = _mm_mul_ps((__m128)_mm_load_si128((const __m128i *)&xmmword_180191690), (__m128)xmmword_180191620);
  v58 = v47;
  sub_18004FFB0(v59, (__int64)&v58);
  v58 = v47;
  sub_18004FFB0(v77, (__int64)&v58);
  v58 = v47;
  sub_18004FFB0(v56, (__int64)&v58);
  LODWORD(v61) = 0;
  v48 = (__int64 *)sub_180060EAC((__int64 *)(v13 + 104), &v61);
  sub_180013540(v48, &v59);
  LODWORD(v61) = 1;
  v49 = (__int64 *)sub_180060EAC((__int64 *)(v13 + 104), &v61);
  sub_180013540(v49, &v77);
  LODWORD(v61) = 2;
  v50 = (__int64 *)sub_180060EAC((__int64 *)(v13 + 104), &v61);
  sub_180013540(v50, &v56);
  v51 = *v37;
  v58.m128_u64[0] = (unsigned __int64)v65;
  v52 = sub_180013440(v65, (__int64)&unk_1801C90B8);
  sub_180011CC4(v68, "ColorTransform");
  v53 = sub_18003B55C((__int64)v68);
  sub_18003F830(v51, (__int64)&v58, v53, (__int64)v52);
  sub_1800129D0((__int64)v68);
  v54 = sub_18005E830(v58.m128_i64[0], &v61);
  sub_180011F5C((_QWORD *)(v13 + 120), v54);
  if ( v62 )
    sub_180010EC8(v62);
  sub_1800896CC(*(_QWORD *)(v13 + 120));
  if ( v58.m128_u64[1] )
    sub_180010EC8(v58.m128_i64[1]);
  if ( v57 )
    sub_180010EC8(v57);
  if ( v78 )
    sub_180010EC8(v78);
  if ( v60 )
    sub_180010EC8(v60);
  if ( v72 )
    sub_180010EC8(v72);
  if ( v74 )
    sub_180010EC8(v74);
  if ( v67 )
    sub_180010EC8(v67);
  if ( v64 )
    sub_180010EC8(v64);
  if ( v76 )
    sub_180010EC8(v76);
  if ( v70 )
    sub_180010EC8(v70);
  sub_18000BFA4((__int64)v80, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_180014244((__int64)v79);
}
