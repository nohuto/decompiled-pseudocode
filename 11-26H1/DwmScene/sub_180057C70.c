/*
 * XREFs of sub_180057C70 @ 0x180057C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180039078 @ 0x180039078 (sub_180039078.c)
 *     sub_18003B950 @ 0x18003B950 (sub_18003B950.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_180042248 @ 0x180042248 (sub_180042248.c)
 *     sub_18004ED60 @ 0x18004ED60 (sub_18004ED60.c)
 *     sub_18004ED7C @ 0x18004ED7C (sub_18004ED7C.c)
 *     sub_18004EDEC @ 0x18004EDEC (sub_18004EDEC.c)
 *     sub_1800592A0 @ 0x1800592A0 (sub_1800592A0.c)
 *     sub_1800592E4 @ 0x1800592E4 (sub_1800592E4.c)
 *     sub_180059370 @ 0x180059370 (sub_180059370.c)
 *     sub_1800593B4 @ 0x1800593B4 (sub_1800593B4.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_180059534 @ 0x180059534 (sub_180059534.c)
 *     sub_18005ADF0 @ 0x18005ADF0 (sub_18005ADF0.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     sub_18007ED34 @ 0x18007ED34 (sub_18007ED34.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180057C70(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // r13
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  _QWORD *v11; // rbx
  float v12; // xmm6_4
  float v13; // xmm0_4
  __int64 v14; // rax
  __m128i si128; // xmm14
  __m128 v16; // xmm10
  __m128 v17; // xmm9
  unsigned __int64 v18; // rcx
  __m128i v19; // xmm0
  __m128i v20; // xmm6
  char v21; // si
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __m128 v25; // xmm1
  __m128 v26; // xmm5
  double v27; // xmm2_8
  __m128 v28; // xmm3
  __m128 v29; // xmm1
  double v30; // xmm4_8
  __m128 v31; // xmm2
  __m128 v32; // xmm3
  __m128 v33; // xmm1
  __m128 v34; // xmm2
  float v35; // xmm9_4
  float v36; // xmm10_4
  float v37; // xmm12_4
  float v38; // xmm13_4
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 *v46; // rax
  __m128 v47; // xmm3
  __m128 v48; // xmm6
  unsigned __int32 v49; // xmm6_4
  __m128i *v50; // rax
  __int64 result; // rax
  _BYTE v52[20]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v53; // [rsp+5Ch] [rbp-ACh]
  __int128 v54; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v55; // [rsp+78h] [rbp-90h] BYREF
  __m128i v56; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v57; // [rsp+98h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-68h]
  __m128i v59; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v60; // [rsp+B8h] [rbp-50h]
  __m128i v61; // [rsp+C8h] [rbp-40h]
  __m128i v62; // [rsp+D8h] [rbp-30h]
  __m128i v63; // [rsp+E8h] [rbp-20h] BYREF
  __m128i v64; // [rsp+F8h] [rbp-10h]
  __m128i v65; // [rsp+108h] [rbp+0h]
  __m128i v66; // [rsp+118h] [rbp+10h]
  __m128i v67; // [rsp+128h] [rbp+20h]
  char v68; // [rsp+138h] [rbp+30h]
  unsigned __int64 v69; // [rsp+208h] [rbp+100h] BYREF
  unsigned __int64 v70; // [rsp+220h] [rbp+118h]

  sub_1800592E4(a1, &v57, a2);
  if ( (*(_BYTE *)(a1 + 440) & 1) != 0 )
  {
    v5 = *(_QWORD *)(sub_18007AB60(a1) + 512);
    if ( *(_QWORD *)(a1 + 200) )
    {
      v54 = 0LL;
      sub_18004ED7C(v5, a1 + 184, &v54);
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      v54 = 0LL;
      sub_18004ED7C(v5, a1 + 216, &v54);
    }
    if ( *(_QWORD *)(a1 + 264) )
    {
      v59 = (__m128i)xmmword_1800FA780;
      v60 = (__m128i)xmmword_1800FA790;
      v61 = (__m128i)xmmword_1800FA7A0;
      v62 = (__m128i)xmmword_1800FA7B0;
      sub_18004ED60(v5);
    }
  }
  v6 = (_QWORD *)(a1 + 152);
  v7 = a1 + 152;
  if ( *(_QWORD *)(a1 + 136) || *(_QWORD *)(a1 + 152) )
  {
    v11 = v57;
    sub_180039078((__int64)v57, (_QWORD *)(a1 + 136), (_QWORD *)(a1 + 152));
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(*(_QWORD *)*a3 + 40LL))(*a3, &v55);
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 32LL))(*a3, &v54);
    v10 = (_QWORD *)v8;
    v11 = v57;
    sub_180039078((__int64)v57, v9, v10);
    if ( *((_QWORD *)&v54 + 1) )
      sub_180010EC8(*((__int64 *)&v54 + 1));
    if ( v55.m128i_i64[1] )
      sub_180010EC8(v55.m128i_i64[1]);
    v12 = (float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 88LL))(*a3);
    v13 = (float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 80LL))(*a3);
    v14 = v11[12];
    *(_QWORD *)(v14 + 14544) = 0LL;
    *(float *)(v14 + 14552) = v13;
    *(float *)(v14 + 14556) = v12;
    *(_DWORD *)(v14 + 14560) = 0;
    *(_DWORD *)(v14 + 14564) = 1065353216;
    v6 = (_QWORD *)(a1 + 152);
    v7 = a1 + 152;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191430);
  v56 = si128;
  sub_1800592A0(a1, &v69);
  *(_QWORD *)&v54 = 0LL;
  v16 = (__m128)(unsigned int)v69;
  DWORD2(v54) = (int)o_roundf();
  v17 = (__m128)HIDWORD(v69);
  HIDWORD(v54) = (int)o_roundf();
  v68 = 0;
  v18 = (unsigned __int64)sub_18005B8F0 & -(__int64)(*(_BYTE *)(a1 + 388) != 0);
  if ( v18 )
  {
    v19 = *(__m128i *)(a1 + 372);
    v67 = v19;
    v68 = 1;
  }
  else
  {
    v19 = v67;
  }
  if ( v18 )
  {
    v55 = v19;
  }
  else
  {
    sub_180059458(a1, v52);
    v55.m128i_i32[0] = (int)o_roundf();
    v55.m128i_i32[1] = (int)o_roundf();
    v55.m128i_i32[2] = (int)o_roundf();
    v55.m128i_i32[3] = (int)o_roundf();
  }
  v20 = *(__m128i *)sub_180059534(v52, &v55, &v54);
  v55 = v20;
  v21 = 0;
  sub_180059458(a1, v52);
  v24 = v11[12];
  if ( (*(_DWORD *)(a1 + 440) & 0x1000000) != 0 )
  {
    *(_QWORD *)(v24 + 14544) = 0LL;
    *(_DWORD *)(v24 + 14552) = v16.m128_i32[0];
    *(_DWORD *)(v24 + 14556) = v17.m128_i32[0];
    v25 = (__m128)*(unsigned int *)&v52[8];
    *(_DWORD *)(v24 + 14560) = *(_DWORD *)&v52[8];
    v26 = (__m128)v53;
    *(_DWORD *)(v24 + 14564) = v53;
    if ( v16.m128_f32[0] == 0.0 || v17.m128_f32[0] == 0.0 )
      v21 = 1;
    v27 = *(double *)_mm_movelh_ps((__m128)*(unsigned __int64 *)v52, v25).m128_u64;
    v28 = 0LL;
    v28.m128_u64[0] = _mm_unpacklo_ps(v16, v17).m128_u64[0];
    v29 = 0LL;
    *(double *)v29.m128_u64 = v27;
    v30 = *(double *)_mm_div_ps(v29, v28).m128_u64;
    v31 = 0LL;
    v31.m128_u64[0] = _mm_movelh_ps((__m128)*(unsigned __int64 *)&v52[12], v26).m128_u64[0];
    v31.m128_u64[0] = _mm_div_ps(v31, v28).m128_u64[0];
    v32 = 0LL;
    v32.m128_u64[0] = v31.m128_u64[0];
    v33 = 0LL;
    *(double *)v33.m128_u64 = v30;
    v69 = _mm_sub_ps(v32, v33).m128_u64[0];
    v34 = 0LL;
    v34.m128_u64[0] = _mm_unpacklo_ps((__m128)0x3F800000u, (__m128)0x3F800000u).m128_u64[0];
    v70 = _mm_sub_ps(_mm_add_ps(v33, v32), v34).m128_u64[0];
    v56.m128i_i64[0] = v69;
    v56.m128i_i32[2] = v70;
    *(float *)&v56.m128i_i32[3] = -*((float *)&v70 + 1);
    v35 = *(float *)v52;
    LODWORD(v54) = (int)o_roundf();
    v36 = *(float *)&v52[4];
    DWORD1(v54) = (int)o_roundf();
    v37 = *(float *)&v52[12];
    DWORD2(v54) = (int)o_roundf();
    v38 = *(float *)&v52[16];
    HIDWORD(v54) = (int)o_roundf();
    sub_180059534(v52, &v55, &v54);
    *(_OWORD *)(v11[12] + 14632LL) = *(_OWORD *)v52;
    v39 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 12));
    v40 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
    v41 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 8));
    si128 = v56;
  }
  else
  {
    v35 = *(float *)v52;
    *(_DWORD *)(v24 + 14544) = *(_DWORD *)v52;
    v36 = *(float *)&v52[4];
    *(_DWORD *)(v24 + 14548) = *(_DWORD *)&v52[4];
    v37 = *(float *)&v52[12];
    *(float *)(v24 + 14552) = *(float *)&v52[12] - v35;
    v38 = *(float *)&v52[16];
    *(float *)(v24 + 14556) = *(float *)&v52[16] - v36;
    *(_DWORD *)(v24 + 14560) = *(_DWORD *)&v52[8];
    *(_DWORD *)(v24 + 14564) = v53;
    *(__m128i *)(v11[12] + 14632LL) = v20;
    v39 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 12));
    v40 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
    v41 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 8));
  }
  v42 = (v41 - _mm_cvtsi128_si32(v20)) * (v39 - v40);
  if ( v35 == v37 || v36 == v38 )
    v21 = 1;
  if ( !v42 )
  {
    sub_1800148EC(a1 + 24);
    sub_18001DCFC(&qword_1801BD388, 4);
  }
  if ( v21 )
  {
    sub_1800148EC(a1 + 24);
    sub_18001DCFC(&qword_1801BD388, 4);
  }
  if ( (*(_BYTE *)(a1 + 465) & 1) != 0 && *(_QWORD *)(a1 + 136) )
  {
    v43 = *v11;
    *(_OWORD *)v52 = *(_OWORD *)(a1 + 296);
    (*(void (__fastcall **)(_QWORD *, __int64, _BYTE *))(v43 + 88))(v11, a1 + 136, v52);
  }
  LOBYTE(v22) = *(_BYTE *)(a1 + 465);
  if ( (v22 & 6) != 0 && *v6 )
  {
    LOBYTE(v23) = (v22 & 4) != 0;
    LOBYTE(v22) = (v22 & 2) != 0;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, _DWORD, _BYTE))(*v11 + 104LL))(
      v11,
      v7,
      v22,
      v23,
      *(_DWORD *)(a1 + 312),
      *(_BYTE *)(a1 + 464));
  }
  v44 = *(_QWORD *)(sub_18007AB60(a1) + 512);
  v45 = sub_180042248(a1, v52);
  sub_18003B950(*v45, (__int64)&v56);
  if ( *(_QWORD *)&v52[8] )
    sub_180010EC8(*(__int64 *)&v52[8]);
  v55.m128i_i64[0] = v56.m128i_i64[0];
  v55.m128i_i64[1] = v56.m128i_u32[2] | 0x3F80000000000000LL;
  if ( *(_DWORD *)(a1 + 316) == 3 )
  {
    v46 = sub_180042248(a1, v52);
    sub_18003BCCC(*v46, &v63);
    *(float *)&v56.m128i_i32[2] = -*(float *)&v65.m128i_i32[2];
    v47 = 0LL;
    v47.m128_u64[0] = _mm_unpacklo_ps(
                        _mm_xor_ps((__m128)v65.m128i_u32[0], (__m128)xmmword_180191750),
                        _mm_xor_ps((__m128)v65.m128i_u32[1], (__m128)xmmword_180191750)).m128_u64[0];
    v48 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps(v47, (__m128)COERCE_UNSIGNED_INT(-*(float *)&v65.m128i_i32[2])));
    v56.m128i_i64[0] = v48.m128_u64[0];
    v49 = _mm_shuffle_ps(v48, v48, 170).m128_u32[0];
    if ( *(_QWORD *)&v52[8] )
      sub_180010EC8(*(__int64 *)&v52[8]);
    v55.m128i_i64[0] = v56.m128i_i64[0];
    v55.m128i_i64[1] = v49;
  }
  *(__m128i *)v52 = v55;
  sub_18004EDEC(v44, (__int64)&unk_1801CC9F8);
  *(__m128i *)v52 = si128;
  sub_18004EDEC(v44, (__int64)&unk_1801CCA38);
  sub_18007ED34(*(_QWORD *)(v44 + 18648), &unk_1801CCA58);
  v59 = _mm_load_si128((const __m128i *)&xmmword_180191410);
  v60 = _mm_load_si128((const __m128i *)&xmmword_180191420);
  v61 = _mm_load_si128((const __m128i *)&xmmword_180191440);
  v62 = _mm_load_si128((const __m128i *)&xmmword_180191660);
  v50 = (__m128i *)sub_1800593B4(a1, 0LL, 2LL);
  v63 = *v50;
  v64 = v50[1];
  v65 = v50[2];
  v66 = v50[3];
  sub_18005ADF0(&v63, &v59);
  v63 = v59;
  v64 = v60;
  v65 = v61;
  v66 = v62;
  sub_18004ED60(v44);
  sub_180059370(a1, &v69);
  *(_QWORD *)&v54 = v69;
  *((float *)&v54 + 2) = 1.0 / *(float *)&v69;
  *((float *)&v54 + 3) = 1.0 / *((float *)&v69 + 1);
  *(_OWORD *)v52 = v54;
  result = sub_18004EDEC(v44, (__int64)&unk_1801CC318);
  if ( v58 )
    return sub_180010EC8(v58);
  return result;
}
