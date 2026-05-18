/*
 * XREFs of sub_18009BF04 @ 0x18009BF04
 * Callers:
 *     sub_18009BCD8 @ 0x18009BCD8 (sub_18009BCD8.c)
 * Callees:
 *     _o_cosf @ 0x18000CE28 (_o_cosf.c)
 *     _o_log2f @ 0x18000CE70 (_o_log2f.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18003A4FC @ 0x18003A4FC (sub_18003A4FC.c)
 *     sub_18003B950 @ 0x18003B950 (sub_18003B950.c)
 *     sub_18003BB24 @ 0x18003BB24 (sub_18003BB24.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003C524 @ 0x18003C524 (sub_18003C524.c)
 *     sub_1800593B4 @ 0x1800593B4 (sub_1800593B4.c)
 *     sub_18005ADF0 @ 0x18005ADF0 (sub_18005ADF0.c)
 *     sub_18005F6C4 @ 0x18005F6C4 (sub_18005F6C4.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18009BF04(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // r13
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r15
  __m128 v10; // xmm7
  __int32 v11; // xmm15_4
  __m128 v12; // xmm11
  unsigned int v13; // edi
  __int64 v14; // rcx
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm12
  __m128 v18; // xmm9
  unsigned __int32 v19; // xmm9_4
  int v20; // xmm13_4
  int v21; // xmm14_4
  int v22; // ecx
  __int64 v23; // rax
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  int v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm10_4
  __m128 v29; // xmm6
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  __m128 v32; // xmm3
  __int64 v33; // rax
  __m128 v34; // xmm2
  __m128 v35; // xmm2
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rax
  _OWORD *v46; // rax
  __int64 v47; // rcx
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int128 v50; // xmm3
  float v51; // xmm1_4
  int v52; // xmm4_4
  float v53; // xmm0_4
  int v54; // eax
  int v55; // xmm3_4
  int v56; // xmm5_4
  int v57; // xmm2_4
  __int64 v58; // rax
  __int64 v59; // rdx
  bool v60; // cf
  unsigned __int32 v62; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v63; // [rsp+40h] [rbp-C8h]
  unsigned __int32 v64; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v65; // [rsp+58h] [rbp-B0h] BYREF
  float v66; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v67; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int32 v68; // [rsp+70h] [rbp-98h]
  __int64 v69; // [rsp+74h] [rbp-94h]
  unsigned __int64 v70; // [rsp+7Ch] [rbp-8Ch]
  unsigned __int64 v71; // [rsp+88h] [rbp-80h]
  unsigned __int64 v72; // [rsp+94h] [rbp-74h]
  __int64 v73; // [rsp+A0h] [rbp-68h]
  float v74; // [rsp+A8h] [rbp-60h] BYREF
  float v75; // [rsp+ACh] [rbp-5Ch]
  float v76; // [rsp+B0h] [rbp-58h]
  __int64 v77; // [rsp+B8h] [rbp-50h]
  unsigned __int32 v78; // [rsp+C0h] [rbp-48h]
  __int64 v79; // [rsp+C8h] [rbp-40h]
  __int64 v80; // [rsp+D0h] [rbp-38h]
  __int64 v81; // [rsp+D8h] [rbp-30h]
  __int64 v82; // [rsp+E0h] [rbp-28h]
  __int64 v83; // [rsp+E8h] [rbp-20h]
  __m128 v84; // [rsp+F0h] [rbp-18h]
  __int64 v85; // [rsp+100h] [rbp-8h] BYREF
  __int64 v86; // [rsp+108h] [rbp+0h]
  __int64 v87; // [rsp+110h] [rbp+8h] BYREF
  __int64 v88; // [rsp+118h] [rbp+10h]
  __int64 v89; // [rsp+120h] [rbp+18h] BYREF
  __int64 v90; // [rsp+128h] [rbp+20h]
  __int64 v91; // [rsp+130h] [rbp+28h] BYREF
  __int64 v92; // [rsp+138h] [rbp+30h]
  __int64 v93; // [rsp+140h] [rbp+38h] BYREF
  __int64 v94; // [rsp+148h] [rbp+40h]
  __m128 v95[2]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v96; // [rsp+178h] [rbp+70h]
  __int128 v97; // [rsp+188h] [rbp+80h]
  __int64 v98; // [rsp+198h] [rbp+90h] BYREF
  __int64 v99; // [rsp+1A0h] [rbp+98h]
  __int64 v100; // [rsp+1A8h] [rbp+A0h]
  __int64 v101; // [rsp+1B0h] [rbp+A8h]
  __int32 v105; // [rsp+2C0h] [rbp+1B8h]

  v3 = a2;
  v4 = a1;
  sub_18000D81C(a1, 16LL, 3LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  HIDWORD(v69) = 1;
  v5 = (__int64)(v3[1] - *v3) >> 4;
  v63 = 0LL;
  if ( v5 > 3 )
  {
    v5 = 3LL;
LABEL_4:
    v6 = 0LL;
    v7 = (__int64 *)(v4 + 8);
    v73 = 392 - v4;
    v79 = 440 - v4;
    v80 = 344 - v4;
    v81 = 488 - v4;
    v82 = 536 - v4;
    v8 = -8 - v4;
    v83 = -8 - v4;
    while ( 1 )
    {
      sub_180012C40(&v93, (__int64 *)((char *)v7 + v8 + *v3));
      v9 = v93;
      v84 = _mm_mul_ps(
              _mm_shuffle_ps((__m128)*(unsigned int *)(v93 + 104), (__m128)*(unsigned int *)(v93 + 104), 0),
              (__m128)_mm_loadu_si128((const __m128i *)(v93 + 88)));
      v10 = 0LL;
      if ( *(_BYTE *)(v93 + 72) )
      {
        v62 = v84.m128_u32[2];
        v105 = v84.m128_i32[1];
        v11 = v84.m128_i32[0];
      }
      else
      {
        v11 = 0;
        v105 = 0;
        v62 = 0;
      }
      v12 = (__m128)*(unsigned int *)(v93 + 116);
      v13 = *(_DWORD *)(v93 + 120);
      sub_180012A94(v93 + 56, &v85);
      sub_18003BB24(v85, &v74);
      v14 = v86;
      if ( v86 )
        sub_180010EC8(v86);
      v15 = (__m128)LODWORD(v75);
      v15.m128_f32[0] = (float)(v75 * v74) * v76;
      v16 = _mm_and_ps(v15, (__m128)xmmword_180191740);
      *(double *)v16.m128_u64 = o_cbrtf(v14);
      v17 = v16;
      sub_180012A94(v9 + 56, &v87);
      sub_18003B950(v87, (__int64)&v67);
      if ( v88 )
        sub_180010EC8(v88);
      sub_180012A94(v9 + 56, &v89);
      sub_18003BCCC(v89, v95);
      LODWORD(v65) = v96 ^ 0x80000000;
      *((float *)&v65 + 1) = -*((float *)&v96 + 1);
      v66 = -*((float *)&v96 + 2);
      if ( v90 )
        sub_180010EC8(v90);
      sub_18003C524(&v65);
      if ( v13 == 2 )
      {
        v18 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v65, (__m128)LODWORD(v66)));
        v70 = v18.m128_u64[0];
        v19 = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
        v20 = v70;
        v67 = v70;
        v21 = HIDWORD(v70);
        v68 = v19;
      }
      else
      {
        v19 = v68;
        v21 = HIDWORD(v67);
        v20 = v67;
      }
      v22 = *(_DWORD *)(v9 + 108);
      if ( !v22 )
      {
        if ( v13 == 2 )
          goto LABEL_23;
        v22 = 2;
      }
      if ( v13 < 2 )
      {
        switch ( v22 )
        {
          case 1:
            v10 = (__m128)0x3DA2F983u;
            break;
          case 2:
            v10 = (__m128)0x3F800000u;
            break;
          case 4:
            v10 = v12;
            v10.m128_f32[0] = v12.m128_f32[0] * v12.m128_f32[0];
            break;
        }
      }
      else if ( v13 == 2 )
      {
        if ( v22 != 3 )
        {
          if ( v22 == 4 )
          {
            v27 = 0.001;
            if ( v12.m128_f32[0] >= 0.001 )
              v27 = v12.m128_f32[0];
            o_cosf();
            v10 = (__m128)0x3F800000u;
            v10.m128_f32[0] = (float)(1.0 - v27) * 6.2831855;
          }
          goto LABEL_24;
        }
LABEL_23:
        v10 = (__m128)0x3F800000u;
        goto LABEL_24;
      }
      if ( v13 == 1 )
      {
        v28 = *(float *)(v9 + 112);
        if ( v28 < 1.0 )
          v28 = 1.0;
        o_log2f();
        v29 = _mm_xor_ps((__m128)0x3C23D70Au, (__m128)xmmword_180191750);
        o_cosf();
        v29.m128_f32[0] = v29.m128_f32[0] / (float)(1.0 - (float)((float)(v28 * 0.017453292) * 0.5));
        v30 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v65, (__m128)LODWORD(v66)));
        v77 = 0LL;
        v78 = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
        v31 = 0LL;
        v31.m128_u64[0] = v30.m128_u64[0];
        v32 = _mm_mul_ps(_mm_movelh_ps(v31, (__m128)v78), _mm_shuffle_ps(v29, v29, 0));
        v71 = v32.m128_u64[0];
        v33 = v73 + *(_QWORD *)(a3 + 64);
        *(_DWORD *)((char *)v7 + v33) = v32.m128_i32[0];
        *(_DWORD *)((char *)v7 + v33 + 4) = HIDWORD(v71);
        *(_DWORD *)((char *)v7 + v33 + 8) = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
        *(float *)((char *)v7 + v33 + 12) = -v29.m128_f32[0];
        goto LABEL_25;
      }
LABEL_24:
      v23 = v73 + *(_QWORD *)(a3 + 64);
      *(__int64 *)((char *)v7 + v23) = 0LL;
      *(__int64 *)((char *)v7 + v23 + 8) = 0LL;
LABEL_25:
      v64 = v62;
      if ( v13 == 2 )
      {
        v26 = 0;
        v25.m128_u64[0] = __PAIR64__(v105, v11);
      }
      else
      {
        v24 = v17;
        v24.m128_f32[0] = v17.m128_f32[0] * v17.m128_f32[0];
        v25 = _mm_mul_ps(_mm_movelh_ps((__m128)__PAIR64__(v105, v11), (__m128)v62), _mm_shuffle_ps(v24, v24, 0));
        v64 = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
        v26 = 1065353216;
      }
      v34 = 0LL;
      v34.m128_u64[0] = v25.m128_u64[0];
      v35 = _mm_mul_ps(_mm_movelh_ps(v34, (__m128)v64), _mm_shuffle_ps(v10, v10, 0));
      v72 = v35.m128_u64[0];
      v36 = v79 + *(_QWORD *)(a3 + 64);
      *(_DWORD *)((char *)v7 + v36) = v35.m128_i32[0];
      *(_DWORD *)((char *)v7 + v36 + 4) = HIDWORD(v72);
      *(_DWORD *)((char *)v7 + v36 + 8) = _mm_shuffle_ps(v35, v35, 170).m128_u32[0];
      *(_DWORD *)((char *)v7 + v36 + 12) = v26;
      v37 = v80 + *(_QWORD *)(a3 + 64);
      *(_DWORD *)((char *)v7 + v37) = v20;
      *(_DWORD *)((char *)v7 + v37 + 4) = v21;
      *(_DWORD *)((char *)v7 + v37 + 8) = v19;
      *(float *)((char *)v7 + v37 + 12) = v17.m128_f32[0] * v12.m128_f32[0];
      v38 = v63;
      if ( v63 < 3 )
      {
        if ( !*(v7 - 1) )
        {
          sub_180012A94(v9 + 56, &v91);
          v39 = sub_18005F6C4(v91, &v98);
          v40 = *v39;
          v41 = v39[1];
          *v39 = 0LL;
          v39[1] = 0LL;
          *(v7 - 1) = v40;
          v42 = *v7;
          *v7 = v41;
          if ( v42 )
            sub_180010EC8(v42);
          if ( v99 )
            sub_180010EC8(v99);
          if ( v92 )
            sub_180010EC8(v92);
        }
        if ( *v7 )
          _InterlockedIncrement((volatile signed __int32 *)(*v7 + 8));
        v43 = *(v7 - 1);
        v100 = v43;
        v44 = *v7;
        v101 = *v7;
        if ( v43 )
        {
          if ( *(_BYTE *)(v9 + 124) )
          {
            v45 = sub_1800593B4(v43, 0, 2);
            v95[0] = *(__m128 *)v45;
            v95[1] = *(__m128 *)(v45 + 16);
            v96 = *(_OWORD *)(v45 + 32);
            v97 = *(_OWORD *)(v45 + 48);
            sub_18005ADF0(v95, (__m128 *)(v6 + *(_QWORD *)(a3 + 64)));
          }
          else
          {
            v46 = (_OWORD *)sub_18003A4FC(
                              (__int64)v95,
                              (int *)&xmmword_1800FA7D0,
                              &xmmword_1800FA7D0,
                              &xmmword_1800FA7D0,
                              &xmmword_1800FA7D0);
            v47 = *(_QWORD *)(a3 + 64);
            v48 = v46[1];
            v49 = v46[2];
            v50 = v46[3];
            *(_OWORD *)(v47 + v6) = *v46;
            *(_OWORD *)(v47 + v6 + 16) = v48;
            *(_OWORD *)(v47 + v6 + 32) = v49;
            *(_OWORD *)(v47 + v6 + 48) = v50;
          }
          v51 = 1.0 / (float)*(int *)(v43 + 1940);
          if ( *(_BYTE *)(v43 + 1952) )
            v52 = 1065353216;
          else
            v52 = 0;
          v53 = *(float *)(v43 + 1948);
          v54 = *(_DWORD *)(v43 + 316);
          if ( v54 == 2 || v54 == 4 )
            v53 = -v53;
          if ( *(_DWORD *)(v43 + 1960) == 1 )
            v55 = 1065353216;
          else
            v55 = 0;
          v56 = *(_DWORD *)(v43 + 1968);
          if ( *(_BYTE *)(v9 + 72) && *(_BYTE *)(v9 + 124) )
            v57 = 1065353216;
          else
            v57 = 0;
          v58 = v81 + *(_QWORD *)(a3 + 64);
          *(float *)((char *)v7 + v58) = v51;
          *(float *)((char *)v7 + v58 + 4) = v51;
          *(_DWORD *)((char *)v7 + v58 + 8) = v52;
          *(float *)((char *)v7 + v58 + 12) = v53;
          v59 = v82 + *(_QWORD *)(a3 + 64);
          *(_DWORD *)((char *)v7 + v59) = *(_DWORD *)(v43 + 1956);
          *(_DWORD *)((char *)v7 + v59 + 4) = v55;
          *(_DWORD *)((char *)v7 + v59 + 8) = v56;
          *(_DWORD *)((char *)v7 + v59 + 12) = v57;
        }
        if ( v44 )
          sub_180010EC8(v44);
        v38 = v63;
      }
      if ( v94 )
        sub_180010EC8(v94);
      v63 = v38 + 1;
      v7 += 2;
      v6 += 64LL;
      v60 = v38 + 1 < v5;
      v3 = a2;
      v8 = v83;
      if ( !v60 )
        return a1;
    }
  }
  if ( v5 )
    goto LABEL_4;
  return v4;
}
