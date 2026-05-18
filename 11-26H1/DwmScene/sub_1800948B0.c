/*
 * XREFs of sub_1800948B0 @ 0x1800948B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memcmp @ 0x18000CEC4 (memcmp.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_1800284F0 @ 0x1800284F0 (sub_1800284F0.c)
 *     sub_180028540 @ 0x180028540 (sub_180028540.c)
 *     sub_18002901C @ 0x18002901C (sub_18002901C.c)
 *     sub_18004EDEC @ 0x18004EDEC (sub_18004EDEC.c)
 *     sub_18007C6B8 @ 0x18007C6B8 (sub_18007C6B8.c)
 *     sub_18007E81C @ 0x18007E81C (sub_18007E81C.c)
 *     sub_18007E978 @ 0x18007E978 (sub_18007E978.c)
 *     sub_1800942A4 @ 0x1800942A4 (sub_1800942A4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
_QWORD *__fastcall sub_1800948B0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v6; // r13
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, __int64); // rbx
  __int64 v10; // rax
  __int64 *v11; // r12
  __int64 *v12; // r15
  __int64 v13; // r13
  void (__fastcall *v14)(__int64 *, __int64 *, __int64, __int64, _QWORD *, _QWORD *); // rsi
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 *v19; // r15
  float v20; // xmm0_4
  int *v21; // rax
  int v22; // ecx
  __int64 v23; // rbx
  unsigned __int16 v24; // bx
  __int64 v25; // rsi
  _OWORD *v26; // rbx
  __int64 v27; // r12
  _OWORD *v28; // rax
  __int64 v29; // rcx
  void (__fastcall *v30)(__int64 *, __int64, __int64, _QWORD *, _QWORD *); // rsi
  _QWORD *v31; // rdi
  _QWORD *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdi
  _OWORD *v35; // rbx
  _OWORD *v36; // rax
  __m128 v37; // xmm2
  __m128 v38; // xmm1
  __m128 v39; // xmm3
  __m128 v40; // xmm1
  __m128 v41; // xmm0
  __m128 v42; // xmm2
  __m128 v43; // xmm3
  __m128 v44; // xmm4
  __m128 v45; // xmm2
  void (__fastcall *v46)(__int64 *, __int64, __int64, __int64, _QWORD *); // rsi
  _QWORD *v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rax
  unsigned __int64 v51; // [rsp+48h] [rbp-C0h]
  unsigned int v52; // [rsp+50h] [rbp-B8h]
  unsigned __int16 v53; // [rsp+58h] [rbp-B0h]
  __int64 v55; // [rsp+88h] [rbp-80h]
  __m128i si128; // [rsp+98h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-60h]
  __int64 v58; // [rsp+B0h] [rbp-58h]
  __int64 v59; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-48h]
  __int64 v61; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-38h]
  __int64 v63; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v64; // [rsp+E0h] [rbp-28h]
  __int64 *v65; // [rsp+F0h] [rbp-18h]
  _QWORD v66[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE Buf2[256]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v68[256]; // [rsp+218h] [rbp+110h] BYREF

  v58 = a4;
  v6 = a2;
  sub_18002901C((__int64)Buf2, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_8);
  sub_18002901C((__int64)v68, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_8);
  v8 = a1[3];
  v9 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 88LL);
  v57 = a3 + 8;
  v10 = sub_180012BF8(a3 + 8, &v63);
  v9(v8, v10);
  sub_180012C40(&v59, a5);
  v55 = *(_QWORD *)(a3 + 3984);
  v11 = (__int64 *)a1[27];
  v65 = (__int64 *)a1[28];
  v12 = (__int64 *)(v55 + 512);
  if ( v11 != v65 )
  {
    v13 = 0LL;
    do
    {
      sub_1800284F0(*v11);
      sub_180028540(*v11);
      sub_18004EDEC(*v12, (__int64)&unk_1801CD038);
      v14 = *(void (__fastcall **)(__int64 *, __int64 *, __int64, __int64, _QWORD *, _QWORD *))(*a1 + 56);
      v15 = sub_180012C40(&v61, v11);
      v16 = sub_180012C40(v66, &v59);
      v17 = sub_180012BF8(v57, &si128);
      v14(a1, &v63, v17, v58, v16, v15);
      if ( si128.m128i_i64[1] )
        sub_180010EC8(si128.m128i_i64[1]);
      sub_180013540(&v59, &v63);
      v13 += 8LL;
      if ( v64 )
        sub_180010EC8(v64);
      v11 += 2;
    }
    while ( v11 != v65 );
    v6 = a2;
  }
  v18 = v59;
  if ( v59 )
  {
    v19 = a1 + 23;
    v20 = (float)(int)sub_1800284F0(a1[23]);
    v21 = *(int **)(v18 + 128);
    if ( v21 )
      v22 = *v21;
    else
      v22 = 0;
    sub_1800942A4((__int64)a1, (__int64)Buf2, (__int64)v68, (float)v22, v20);
    v23 = *(_QWORD *)sub_18007E81C(a1[36], &si128);
    sub_180011CC4(v66, "BlurSampleArray");
    v24 = sub_18007C6B8(v23, (__int64)v66);
    v53 = v24;
    sub_1800129D0((__int64)v66);
    if ( si128.m128i_i64[1] )
      sub_180010EC8(si128.m128i_i64[1]);
    v25 = a1[36];
    v26 = (_OWORD *)sub_18007E978(v25, v24, 5);
    v27 = 2LL;
    if ( memcmp(v26, Buf2, 0x100uLL) )
    {
      v28 = Buf2;
      v29 = 2LL;
      do
      {
        *v26 = *v28;
        v26[1] = v28[1];
        v26[2] = v28[2];
        v26[3] = v28[3];
        v26[4] = v28[4];
        v26[5] = v28[5];
        v26[6] = v28[6];
        v26 += 8;
        *(v26 - 1) = v28[7];
        v28 += 8;
        --v29;
      }
      while ( v29 );
      ++*(_DWORD *)(v25 + 80);
    }
    sub_1800284F0(*v19);
    sub_180028540(*v19);
    v12 = (__int64 *)(v55 + 512);
    sub_18004EDEC(*(_QWORD *)(v55 + 512), (__int64)&unk_1801CD038);
    v30 = *(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD *, _QWORD *))(*a1 + 48);
    v31 = sub_180012C40(&si128, a1 + 23);
    v32 = sub_180012C40(v66, &v59);
    v33 = sub_180012BF8(v57, &v61);
    v30(a1, v33, v58, v32, v31);
    if ( v62 )
      sub_180010EC8(v62);
    v34 = a1[36];
    v35 = (_OWORD *)sub_18007E978(v34, v53, 5);
    if ( memcmp(v35, v68, 0x100uLL) )
    {
      v36 = v68;
      do
      {
        *v35 = *v36;
        v35[1] = v36[1];
        v35[2] = v36[2];
        v35[3] = v36[3];
        v35[4] = v36[4];
        v35[5] = v36[5];
        v35[6] = v36[6];
        v35 += 8;
        *(v35 - 1) = v36[7];
        v36 += 8;
        --v27;
      }
      while ( v27 );
      ++*(_DWORD *)(v34 + 80);
    }
    v37 = 0LL;
    v37.m128_f32[0] = (float)(int)sub_1800284F0(a1[23]);
    v38 = 0LL;
    v38.m128_f32[0] = (float)(int)sub_180028540(a1[23]);
    v39 = (__m128)(unsigned __int64)a1[33];
    v37.m128_u64[0] = _mm_unpacklo_ps(v38, v37).m128_u64[0];
    *(float *)&v52 = v39.m128_f32[0] / v37.m128_f32[0];
    v40 = 0LL;
    v40.m128_f32[0] = (float)(int)sub_1800284F0(a1[25]);
    v41 = 0LL;
    v41.m128_f32[0] = (float)(int)sub_180028540(a1[25]);
    v42 = 0LL;
    v42.m128_u64[0] = _mm_unpacklo_ps(v41, v40).m128_u64[0];
    v51 = _mm_div_ps(v42, v39).m128_u64[0];
    v43 = 0LL;
    v43.m128_u64[0] = _mm_unpacklo_ps((__m128)(unsigned int)v51, (__m128)HIDWORD(v51)).m128_u64[0];
    v45 = 0LL;
    v45.m128_u64[0] = _mm_unpacklo_ps((__m128)v52, v44).m128_u64[0];
    si128 = (__m128i)_mm_mul_ps(v43, v45).m128_u64[0];
    sub_18004EDEC(*v12, (__int64)&unk_1801CD038);
    v46 = *(void (__fastcall **)(__int64 *, __int64, __int64, __int64, _QWORD *))(*a1 + 48);
    v47 = sub_180012C40(&si128, a1 + 25);
    v48 = sub_180026A6C(a1[23], v66);
    v49 = sub_180012BF8(v57, &v61);
    v46(a1, v49, v58, v48, v47);
    if ( v62 )
      sub_180010EC8(v62);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191430);
  sub_18004EDEC(*v12, (__int64)&unk_1801CD038);
  sub_180026A6C(a1[25], v6);
  if ( v60 )
    sub_180010EC8(v60);
  return v6;
}
