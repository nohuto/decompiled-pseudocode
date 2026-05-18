/*
 * XREFs of sub_18006904C @ 0x18006904C
 * Callers:
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001205C @ 0x18001205C (sub_18001205C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001896C @ 0x18001896C (sub_18001896C.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_18002D818 @ 0x18002D818 (sub_18002D818.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_18003B614 @ 0x18003B614 (sub_18003B614.c)
 *     sub_18003B950 @ 0x18003B950 (sub_18003B950.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     GsDriverEntry @ 0x18003C900 (GsDriverEntry.c)
 *     sub_18003D360 @ 0x18003D360 (sub_18003D360.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_18005A6E8 @ 0x18005A6E8 (sub_18005A6E8.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A85C @ 0x18005A85C (sub_18005A85C.c)
 *     sub_18005A88C @ 0x18005A88C (sub_18005A88C.c)
 *     sub_18005A8BC @ 0x18005A8BC (sub_18005A8BC.c)
 *     sub_18005A92C @ 0x18005A92C (sub_18005A92C.c)
 *     sub_18005AA68 @ 0x18005AA68 (sub_18005AA68.c)
 *     sub_18005AE7C @ 0x18005AE7C (sub_18005AE7C.c)
 *     sub_18005E630 @ 0x18005E630 (sub_18005E630.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     sub_18005FB08 @ 0x18005FB08 (sub_18005FB08.c)
 *     sub_1800606B0 @ 0x1800606B0 (sub_1800606B0.c)
 *     sub_18006A09C @ 0x18006A09C (sub_18006A09C.c)
 *     sub_18006D84C @ 0x18006D84C (sub_18006D84C.c)
 *     sub_18006E9F0 @ 0x18006E9F0 (sub_18006E9F0.c)
 *     sub_18006EAE0 @ 0x18006EAE0 (sub_18006EAE0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_18006904C(__int64 a1, __int64 *a2, int a3, _QWORD *a4)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm3
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // di
  void (__fastcall *v11)(__int64, _BYTE *, void *, __int64); // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  void (__fastcall *v14)(__int64, __int64 *, _QWORD *, _QWORD *); // r10
  char v15; // r13
  float v16; // xmm9_4
  __m128 v17; // xmm11
  __m128 v18; // xmm12
  __int32 v19; // xmm13_4
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, _QWORD *, void *, __int64); // rbx
  __int64 v25; // rax
  __m128 si128; // xmm10
  __int64 v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // rbx
  __int64 *v30; // r15
  __int64 *v31; // r14
  _QWORD *v32; // rax
  const void *v33; // rax
  size_t v34; // rdx
  const void *v35; // r10
  bool v36; // bl
  unsigned int *v37; // rax
  __m128 v38; // xmm2
  __m128 v39; // xmm2
  __m128 v40; // xmm0
  __m128 v41; // xmm2
  __int128 v42; // xmm0
  __m128 v43; // xmm1
  __m128 v44; // xmm0
  __m128 v45; // xmm1
  float v46; // xmm6_4
  _QWORD *v47; // rax
  __int64 v48; // r14
  __m128i v49; // xmm0
  __int128 *v50; // rax
  __int64 v51; // rbx
  char v52; // al
  __int64 v53; // rcx
  double v54; // xmm0_8
  _QWORD *v55; // rax
  _DWORD *v56; // rbx
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  char v59; // r15
  unsigned int v60; // ebx
  __int64 *v61; // rax
  __int64 *v62; // rax
  float v63; // xmm3_4
  float v64; // xmm0_4
  float v65; // xmm7_4
  float v66; // xmm6_4
  float v67; // xmm6_4
  float v68; // xmm0_4
  __int64 v69; // rbx
  _QWORD *v70; // rax
  __int64 v71; // rbx
  _QWORD *v72; // rax
  __int64 v73; // rbx
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // r8
  __int64 v80; // rbx
  __int64 result; // rax
  __int128 v82; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v83; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v84; // [rsp+50h] [rbp-B8h]
  __int64 v85; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v86; // [rsp+60h] [rbp-A8h]
  __m128 v87; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+78h] [rbp-90h] BYREF
  __int64 v89; // [rsp+80h] [rbp-88h] BYREF
  __int64 v90; // [rsp+88h] [rbp-80h]
  _QWORD *v91; // [rsp+90h] [rbp-78h]
  __int64 v92; // [rsp+98h] [rbp-70h] BYREF
  __int64 v93; // [rsp+A0h] [rbp-68h]
  __int64 v94; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v95; // [rsp+B0h] [rbp-58h]
  __int64 v96; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-38h]
  __int128 v98; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v99; // [rsp+E8h] [rbp-20h]
  int v100; // [rsp+F0h] [rbp-18h]
  __int64 v101; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v102; // [rsp+100h] [rbp-8h]
  _BYTE v103[64]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v104[4]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v105[8]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v106[64]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v107[4]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v108[4]; // [rsp+228h] [rbp+120h] BYREF
  _QWORD v109[4]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v110[32]; // [rsp+268h] [rbp+160h] BYREF

  v91 = a4;
  LODWORD(v88) = a3;
  v8 = sub_18005F93C(*a2, (__int64)a2);
  sub_180012C40(&v101, (_QWORD *)(v8 + 184));
  v9 = sub_180033D14(a1, *(_DWORD *)(*a2 + 112));
  v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801CAAD8, 1LL);
  v11 = *(void (__fastcall **)(__int64, _BYTE *, void *, __int64))(*(_QWORD *)v9 + 96LL);
  v12 = sub_18001E58C((__int64)v107, (__int64)&unk_1800FAA68);
  v11(v9, v110, &unk_1801CAB78, v12);
  sub_18002D818(v109, (__int64)v110);
  v13 = sub_180012C40(&v94, a2);
  v14(a1, &v85, v109, v13);
  v15 = 0;
  if ( v85 )
    v15 = v10;
  v98 = 0LL;
  v16 = 0.0;
  v17.m128_i32[0] = 0;
  v18.m128_i32[0] = 0;
  v19 = 0;
  v20 = *a2;
  v21 = sub_180013440(v107, (__int64)&unk_1801C90B8);
  v22 = *(_QWORD *)sub_180040570(v20, (__int64)&v94, (__int64)v21);
  sub_18003D718(v22);
  v99 = *(_QWORD *)(v22 + 172);
  v100 = *(_DWORD *)(v22 + 180);
  if ( v95 )
    sub_180010EC8(v95);
  v23 = v101;
  if ( v15 )
  {
    v24 = *(void (__fastcall **)(__int64, _QWORD *, void *, __int64))(*(_QWORD *)v9 + 96LL);
    v25 = sub_18001E58C((__int64)&v94, (__int64)&unk_1800FAA68);
    v24(v9, v107, &unk_1801CAB98, v25);
    sub_18002D818(v108, (__int64)v107);
    sub_180012A94(v85 + 56, &v89);
    sub_18003BCCC(v89, v104);
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_180191420);
    v82 = (__int128)si128;
    v27 = *a2;
    v28 = sub_180013440(v105, (__int64)&unk_1801C9078);
    sub_180040570(v27, (__int64)&v94, (__int64)v28);
    v29 = v94;
    sub_18003D718(v94);
    v30 = *(__int64 **)(v29 + 40);
    v31 = *(__int64 **)(v29 + 32);
    if ( v31 != v30 )
    {
      do
      {
        v32 = sub_18003B614(*v31, v106);
        sub_1800148EC((__int64)v32);
        v33 = (const void *)sub_1800148EC((__int64)v108);
        v36 = sub_18001CFB0(v35, v34, v33, v108[2]);
        sub_1800129D0((__int64)v106);
        if ( v36 )
        {
          sub_180013540((__int64 *)&v98, v31);
          v37 = (unsigned int *)sub_18003B950(v98, (__int64)&v87);
          v17 = (__m128)*v37;
          v18 = (__m128)v37[1];
          v19 = v37[2];
          LODWORD(v97) = v19;
          v83 = 0x3F80000000000000LL;
          LODWORD(v84) = 0;
          sub_18003D360(v98, (__int64)&v92, &v83);
          v5 = _mm_movelh_ps((__m128)(unsigned __int64)v92, (__m128)(unsigned int)v93);
          v38 = 0LL;
          v38.m128_u64[0] = _mm_unpacklo_ps(v17, v18).m128_u64[0];
          v39 = _mm_mul_ps(_mm_movelh_ps(v38, (__m128)(unsigned int)v97), v5);
          v40 = _mm_shuffle_ps(v39, v39, 153);
          v39.m128_f32[0] = (float)(v39.m128_f32[0] + v40.m128_f32[0]) + _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
          v41 = _mm_or_ps(
                  _mm_andnot_ps((__m128)xmmword_1800FA1C0, _mm_sub_ps((__m128)0LL, _mm_shuffle_ps(v39, v39, 0))),
                  _mm_and_ps((__m128)xmmword_1800FA1C0, v5));
          LODWORD(v82) = v41.m128_i32[0];
          DWORD1(v82) = _mm_shuffle_ps(v41, v41, 85).m128_u32[0];
          DWORD2(v82) = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
          v4 = _mm_shuffle_ps(v41, v41, 255);
          HIDWORD(v82) = v4.m128_i32[0];
        }
        v31 += 2;
      }
      while ( v31 != v30 );
      si128 = (__m128)v82;
    }
    *(_OWORD *)&v103[4] = 0LL;
    *(_OWORD *)&v103[24] = 0LL;
    *(_OWORD *)&v103[44] = 0LL;
    *((_QWORD *)&v42 + 1) = si128.m128_u64[1];
    *(double *)&v42 = sub_18006A09C();
    *(_OWORD *)v103 = v42;
    *(_OWORD *)&v103[16] = 0LL;
    *(__m128 *)&v103[32] = v4;
    *(__m128 *)&v103[48] = v5;
    sub_18003B950(v89, (__int64)&v83);
    *(_QWORD *)&v82 = v83;
    *((_QWORD *)&v82 + 1) = (unsigned int)v84 | 0x3F80000000000000LL;
    v43 = _mm_mul_ps((__m128)v82, si128);
    v44 = _mm_add_ps(_mm_shuffle_ps((__m128)v82, v43, 64), v43);
    v45 = _mm_add_ps(_mm_shuffle_ps(v43, v44, 48), v44);
    v46 = 0.0;
    v47 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v91 + 152LL))(*v91);
    sub_180012C40(&v92, v47);
    v48 = v92;
    if ( _mm_shuffle_ps(v45, v45, 170).m128_f32[0] >= 0.0 )
    {
      v49 = _mm_load_si128((const __m128i *)&xmmword_180191420);
      *(_OWORD *)&v106[4] = 0LL;
      *(_OWORD *)&v106[24] = 0LL;
      *(_OWORD *)&v106[44] = 0LL;
      *(double *)v49.m128i_i64 = sub_18006A09C();
      *(__m128i *)v106 = v49;
      memset(&v106[16], 0, 32);
      *(__m128 *)&v106[48] = v5;
      v50 = sub_18001896C((__int64)v105, (__int128 *)v106, v104);
      sub_18001896C((__int64)v104, v50, v103);
      sub_180012A94(v23 + 56, &v82);
      GsDriverEntry(v82, (__int64)v104);
      if ( *((_QWORD *)&v82 + 1) )
        sub_180010EC8(*((__int64 *)&v82 + 1));
      sub_18005A88C(v23, *(float *)(v85 + 328));
      v51 = v85;
      v52 = *(_BYTE *)(v85 + 336);
      if ( v52 != *(_BYTE *)(v23 + 336) )
      {
        *(_BYTE *)(v23 + 336) = v52;
        *(_BYTE *)(v23 + 1612) = v52;
        v51 = v85;
      }
      sub_18005AE7C(v51);
      sub_18005A6E8(v23, *(float *)(v51 + 332));
      sub_18005A92C(v53, *(float *)(v85 + 320));
      sub_18005A85C(v23, *(float *)(v85 + 324));
      v54 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 88LL))(v9, &unk_1801CAAF8);
      v46 = *(float *)&v54;
      sub_18005FB08(v48, &v87);
      if ( !v87.m128_u64[0] )
      {
        sub_180033E4C(a1, &v96, v88);
        v55 = sub_1800606B0(&v82);
        v56 = (_DWORD *)*v55;
        v57 = v55[1];
        *v55 = 0LL;
        v55[1] = 0LL;
        v87.m128_u64[0] = (unsigned __int64)v56;
        v58 = v87.m128_i64[1];
        v87.m128_u64[1] = v57;
        if ( v58 )
          sub_180010EC8(v58);
        if ( *((_QWORD *)&v82 + 1) )
          sub_180010EC8(*((__int64 *)&v82 + 1));
        (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v56 + 40LL))(v56, v96, 1LL);
        v56[44] = 1;
        v82 = (__int128)v87;
        v87 = 0LL;
        sub_18006D84C(v48, &v82);
        v88 = *sub_18000D954(&v83, a1);
        *(_QWORD *)(v23 + 1696) = &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor';
        sub_18005E630(v23 + 1704, &v88);
        if ( v97 )
          sub_180010EC8(v97);
      }
      if ( v87.m128_u64[1] )
        sub_180010EC8(v87.m128_i64[1]);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, &unk_1801CAB58, 0LL);
    v83 = 0x400000005LL;
    LODWORD(v84) = 2;
    v60 = *((_DWORD *)&v83 + (*(int (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 72LL))(v9, &unk_1801CAB18));
    v61 = (__int64 *)sub_18006EAE0(v48, &v82, v60);
    sub_18005A8BC(v23, v61);
    v62 = (__int64 *)sub_18006E9F0(v48, &v82, v60);
    sub_18005A750(v23, v62);
    *(_BYTE *)(v23 + 465) |= 3u;
    v63 = v46 + v46;
    if ( v46 >= 0.5 )
    {
      v67 = 1.0 - (float)(v63 - 1.0);
      v65 = (float)(v67 * 0.050000001) + (float)(v63 - 1.0);
      v66 = (float)(v67 * 0.5) + (float)(v63 - 1.0);
    }
    else
    {
      v64 = (float)(1.0 - v63) * 0.0;
      v65 = (float)(v63 * 0.050000001) + v64;
      v66 = (float)(v63 * 0.5) + v64;
    }
    if ( v59 )
    {
      v65 = 1.0;
      v66 = 1.0;
    }
    v68 = sub_18001205C(v63, 0.0, 1.0);
    if ( !v59 )
      v16 = 1.0 / (float)(*(float *)&v99 * 3.5);
    *(_QWORD *)&v82 = __PAIR64__(LODWORD(v65), LODWORD(v68));
    *((_QWORD *)&v82 + 1) = __PAIR64__(LODWORD(v16), LODWORD(v66));
    v69 = v85;
    if ( v85 )
    {
      v70 = sub_1800181BC(v106, (__int64)&unk_1801CC378);
      sub_18005AA68(v69, (__int64)v70, &v82, -1);
      v71 = v85;
      v72 = sub_1800181BC(v106, (__int64)&unk_1801CC358);
      v82 = xmmword_1800FA7D0;
      sub_18005AA68(v71, (__int64)v72, &v82, -1);
      v73 = v85;
      v74 = sub_1800181BC(v106, (__int64)&unk_1801CC398);
      v82 = xmmword_1800FA7D0;
      sub_18005AA68(v73, (__int64)v74, &v82, -1);
    }
    v75 = sub_1800181BC(v106, (__int64)&unk_1801CC378);
    v82 = xmmword_1800FA7D0;
    sub_18005AA68(v23, (__int64)v75, &v82, -1);
    v76 = sub_1800181BC(v106, (__int64)&unk_1801CC358);
    LODWORD(v82) = 1053609165;
    *(_QWORD *)((char *)&v82 + 4) = __PAIR64__(v18.m128_u32[0], v17.m128_u32[0]);
    HIDWORD(v82) = v19;
    sub_18005AA68(v23, (__int64)v76, &v82, -1);
    v77 = sub_1800181BC(v106, (__int64)&unk_1801CC398);
    v82 = (__int128)si128;
    sub_18005AA68(v23, (__int64)v77, &v82, -1);
    if ( v93 )
      sub_180010EC8(v93);
    if ( v95 )
      sub_180010EC8(v95);
    if ( v90 )
      sub_180010EC8(v90);
    sub_1800129D0((__int64)v108);
    sub_180014244((__int64)v107);
  }
  *(_BYTE *)(v23 + 72) = v15;
  v78 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v91 + 152LL))(*v91);
  sub_180012C40(&v89, v78);
  sub_18005FB08(v89, &v94);
  v80 = v94;
  if ( v94 )
  {
    LOBYTE(v79) = 1;
    *(_BYTE *)(v80 + 232) = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 64LL))(
                              v9,
                              &unk_1801CAB38,
                              v79);
  }
  if ( v95 )
    sub_180010EC8(v95);
  if ( v90 )
    sub_180010EC8(v90);
  if ( *((_QWORD *)&v98 + 1) )
    sub_180010EC8(*((__int64 *)&v98 + 1));
  if ( v86 )
    sub_180010EC8(v86);
  sub_1800129D0((__int64)v109);
  result = sub_180014244((__int64)v110);
  if ( v102 )
    return sub_180010EC8(v102);
  return result;
}
