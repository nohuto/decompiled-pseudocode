/*
 * XREFs of sub_18003D798 @ 0x18003D798
 * Callers:
 *     sub_18003B4C8 @ 0x18003B4C8 (sub_18003B4C8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18003DBA8 @ 0x18003DBA8 (sub_18003DBA8.c)
 *     sub_18003DF1C @ 0x18003DF1C (sub_18003DF1C.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall sub_18003D798(__int64 a1, _OWORD *a2, _OWORD *a3, double a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __int64 v7; // r8
  __m128 v8; // xmm4
  __m128 v11; // xmm5
  __int64 v12; // rdx
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  float v15; // xmm0_4
  __m128 v16; // xmm1
  float v17; // xmm0_4
  __m128 v18; // xmm1
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // r9
  __m128 *v25; // rcx
  __m128 v26; // xmm3
  __m128 v27; // xmm1
  __m128 v28; // xmm3
  __m128 v29; // xmm0
  __m128 v30; // xmm3
  __m128 v31; // xmm4
  __int32 v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  __m128 v36; // xmm4
  __m128 v37; // xmm2
  __m128 *v38; // rax
  __m128 v39; // xmm3
  __m128 v40; // xmm1
  __m128 v41; // xmm3
  __m128 v42; // xmm0
  __m128 v43; // xmm3
  __m128 v44; // xmm4
  __m128 v45; // xmm4
  __m128 v46; // xmm2
  __m128 *v47; // rax
  __m128 v48; // xmm3
  __m128 v49; // xmm1
  __m128 v50; // xmm3
  __m128 v51; // xmm0
  __m128 v52; // xmm3
  unsigned __int64 v53; // xmm8_8^8
  __int64 v54; // rdx
  __m128 *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r10
  float v58; // xmm0_4
  __int128 v60; // xmm0
  _QWORD v61[4]; // [rsp+28h] [rbp-99h]
  __m128 v62; // [rsp+48h] [rbp-79h] BYREF
  __m128 v63; // [rsp+58h] [rbp-69h] BYREF
  _OWORD v64[2]; // [rsp+68h] [rbp-59h] BYREF

  v62 = v4;
  *a3 = *(_OWORD *)&a4;
  v64[1] = xmmword_1800FA2E0;
  v7 = 0LL;
  v8 = _mm_mul_ps(v4, v4);
  v61[0] = &v62;
  v63 = v5;
  v11 = _mm_mul_ps(v5, v5);
  v12 = 2LL;
  v61[1] = &v63;
  v64[0] = v6;
  v13 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = v8.m128_f32[0] + v13.m128_f32[0];
  v14 = _mm_mul_ps(v6, v6);
  v61[2] = v64;
  v15 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  v16 = _mm_shuffle_ps(v11, v11, 102);
  v8.m128_f32[0] = v8.m128_f32[0] + v15;
  v17 = _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v11.m128_f32[0] = v11.m128_f32[0] + v16.m128_f32[0];
  v18 = _mm_shuffle_ps(v14, v14, 102);
  v11.m128_f32[0] = v11.m128_f32[0] + v17;
  v19 = _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)).m128_f32[0];
  v14.m128_f32[0] = (float)(v14.m128_f32[0] + v18.m128_f32[0]) + _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
  v20 = _mm_sqrt_ps(_mm_shuffle_ps(v11, v11, 0)).m128_f32[0];
  LODWORD(v21) = _mm_sqrt_ps(_mm_shuffle_ps(v14, v14, 0)).m128_u32[0];
  *(float *)a1 = v19;
  *(float *)(a1 + 4) = v20;
  *(float *)(a1 + 8) = v21;
  *(_DWORD *)(a1 + 12) = 0;
  if ( v20 <= v19 )
  {
    if ( v21 <= v19 )
    {
      v22 = 0LL;
      if ( v21 <= v20 )
      {
        v23 = 2LL;
        goto LABEL_13;
      }
      v24 = 2LL;
    }
    else
    {
      v22 = 2LL;
      v24 = 0LL;
    }
    v23 = 1LL;
    goto LABEL_14;
  }
  if ( v21 > v20 )
  {
    v22 = 2LL;
    v23 = 0LL;
LABEL_13:
    v24 = 1LL;
    goto LABEL_14;
  }
  v22 = 1LL;
  if ( v21 <= v19 )
  {
    v24 = 0LL;
    v23 = 2LL;
  }
  else
  {
    v24 = 2LL;
    v23 = 0LL;
  }
LABEL_14:
  if ( *(float *)(a1 + 4 * v22) < 0.000099999997 )
    *(_OWORD *)v61[v22] = *off_1800F4540[v22];
  v25 = (__m128 *)v61[v22];
  v26 = _mm_mul_ps(*v25, *v25);
  v27 = _mm_shuffle_ps(v26, v26, 153);
  v26.m128_f32[0] = (float)(v26.m128_f32[0] + v27.m128_f32[0]) + _mm_shuffle_ps(v27, v27, 85).m128_f32[0];
  v28 = _mm_shuffle_ps(v26, v26, 0);
  v29 = _mm_sqrt_ps(v28);
  v30 = _mm_cmpneq_ps(v28, (__m128)xmmword_1800FA100);
  v31 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v29), _mm_div_ps(*v25, v29)), v30),
          _mm_andnot_ps(v30, (__m128)xmmword_1800FA150));
  *v25 = v31;
  if ( *(float *)(a1 + 4 * v24) < 0.000099999997 )
  {
    COERCE_FLOAT(v32 = _mm_load_si128((const __m128i *)&xmmword_180191740).m128i_i32[0]);
    LODWORD(v33) = _mm_shuffle_ps(v31, v31, 85).m128_u32[0] & v32;
    LODWORD(v34) = v31.m128_i32[0] & v32;
    LODWORD(v35) = _mm_shuffle_ps(v31, v31, 170).m128_u32[0] & v32;
    if ( v33 <= COERCE_FLOAT(v31.m128_i32[0] & v32) )
    {
      if ( v35 <= v34 )
      {
        LOBYTE(v7) = v35 <= v33;
        ++v7;
      }
      else
      {
        v7 = 1LL;
      }
    }
    else if ( v35 <= v33 )
    {
      if ( v35 > v34 )
        v12 = 0LL;
      v7 = v12;
    }
    v36 = _mm_shuffle_ps(v31, v31, 201);
    v37 = _mm_shuffle_ps(*(__m128 *)off_1800F4540[v7], *(__m128 *)off_1800F4540[v7], 210);
    *(__m128 *)v61[v24] = _mm_and_ps(
                            _mm_sub_ps(
                              _mm_mul_ps(v37, v36),
                              _mm_mul_ps(_mm_shuffle_ps(v37, v37, 210), _mm_shuffle_ps(v36, v36, 201))),
                            (__m128)xmmword_1800FA2A0);
  }
  v38 = (__m128 *)v61[v24];
  v39 = _mm_mul_ps(*v38, *v38);
  v40 = _mm_shuffle_ps(v39, v39, 153);
  v39.m128_f32[0] = (float)(v39.m128_f32[0] + v40.m128_f32[0]) + _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
  v41 = _mm_shuffle_ps(v39, v39, 0);
  v42 = _mm_sqrt_ps(v41);
  v43 = _mm_cmpneq_ps(v41, (__m128)xmmword_1800FA100);
  v44 = _mm_or_ps(
          _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps(v42, (__m128)0LL), _mm_div_ps(*v38, v42)), v43),
          _mm_andnot_ps(v43, (__m128)xmmword_1800FA150));
  *v38 = v44;
  if ( *(float *)(a1 + 4 * v23) < 0.000099999997 )
  {
    v45 = _mm_shuffle_ps(v44, v44, 210);
    v46 = _mm_shuffle_ps(*v25, *v25, 201);
    *(__m128 *)v61[v23] = _mm_and_ps(
                            _mm_sub_ps(
                              _mm_mul_ps(v45, v46),
                              _mm_mul_ps(_mm_shuffle_ps(v45, v45, 210), _mm_shuffle_ps(v46, v46, 201))),
                            (__m128)xmmword_1800FA2A0);
  }
  v47 = (__m128 *)v61[v23];
  v48 = _mm_mul_ps(*v47, *v47);
  v49 = _mm_shuffle_ps(v48, v48, 153);
  v48.m128_f32[0] = (float)(v48.m128_f32[0] + v49.m128_f32[0]) + _mm_shuffle_ps(v49, v49, 85).m128_f32[0];
  v50 = _mm_shuffle_ps(v48, v48, 0);
  v51 = _mm_sqrt_ps(v50);
  v52 = _mm_cmpneq_ps(v50, (__m128)xmmword_1800FA100);
  *v47 = _mm_or_ps(
           _mm_and_ps(_mm_and_ps(_mm_cmpneq_ps((__m128)0LL, v51), _mm_div_ps(*v47, v51)), v52),
           _mm_andnot_ps(v52, (__m128)xmmword_1800FA150));
  v53 = v62.m128_u64[1];
  v58 = sub_18003DBA8(v25, v12);
  if ( v58 < 0.0 )
  {
    v58 = -v58;
    *(float *)(a1 + 4 * v57) = -*(float *)(a1 + 4 * v57);
    *v55 = _mm_sub_ps((__m128)0LL, *v55);
    v53 = v62.m128_u64[1];
  }
  if ( (float)((float)(v58 - 1.0) * (float)(v58 - 1.0)) > 0.000099999997 )
    return 0;
  *((_QWORD *)&v60 + 1) = v53;
  *(double *)&v60 = sub_18003DF1C(v55, v54, v56);
  *a2 = v60;
  return 1;
}
