/*
 * XREFs of sub_18003BF34 @ 0x18003BF34
 * Callers:
 *     sub_180013F00 @ 0x180013F00 (sub_180013F00.c)
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 *     sub_18008B770 @ 0x18008B770 (sub_18008B770.c)
 *     sub_18008EB20 @ 0x18008EB20 (sub_18008EB20.c)
 *     sub_18008ECA0 @ 0x18008ECA0 (sub_18008ECA0.c)
 * Callees:
 *     _o_acosf @ 0x18000CE04 (_o_acosf.c)
 *     sub_18001205C @ 0x18001205C (sub_18001205C.c)
 *     sub_18001955C @ 0x18001955C (sub_18001955C.c)
 *     sub_18003B394 @ 0x18003B394 (sub_18003B394.c)
 *     sub_18003B950 @ 0x18003B950 (sub_18003B950.c)
 *     sub_18003C524 @ 0x18003C524 (sub_18003C524.c)
 *     sub_18003D09C @ 0x18003D09C (sub_18003D09C.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     sub_18003DC7C @ 0x18003DC7C (sub_18003DC7C.c)
 *     sub_18003DF1C @ 0x18003DF1C (sub_18003DF1C.c)
 */

__int64 __fastcall sub_18003BF34(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm7
  __m128 v8; // xmm6
  __m128 v9; // xmm4
  unsigned __int32 v10; // xmm3_4
  __m128 v11; // xmm2
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  int v14; // eax
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm2
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  __int128 v28; // xmm0
  __m128 v29; // xmm2
  __m128 v30; // xmm4
  __m128 v31; // xmm3
  __m128 v32; // xmm3
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  __m128 v35; // xmm5
  __m128 v36; // xmm2
  __int128 v37; // xmm0
  __int128 v39; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int32 v41; // [rsp+40h] [rbp-61h]
  _BYTE v42[64]; // [rsp+48h] [rbp-59h] BYREF
  __int128 v43; // [rsp+88h] [rbp-19h] BYREF

  sub_18003D758();
  sub_18003B950(a1, (__int64)&v39);
  v6 = 0LL;
  v7 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  v8 = _mm_movelh_ps((__m128)(unsigned __int64)v39, (__m128)DWORD2(v39));
  *(_QWORD *)&v39 = 0LL;
  v9 = _mm_sub_ps(v7, v8);
  v10 = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  v6.m128_u64[0] = v9.m128_u64[0];
  DWORD2(v39) = v10;
  v11 = _mm_movelh_ps(v6, (__m128)v10);
  v12 = _mm_mul_ps(v11, v11);
  v13 = _mm_shuffle_ps(v12, v12, 102);
  v12.m128_f32[0] = (float)(v12.m128_f32[0] + v13.m128_f32[0]) + _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v12, v12, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v37 = xmmword_1800FA7C0;
    goto LABEL_6;
  }
  v41 = v10;
  v40 = v9.m128_u64[0];
  sub_18003C524(&v40);
  v14 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)&v39 = *(_QWORD *)a3;
  DWORD2(v39) = v14;
  sub_18003C524(&v39);
  v15 = _mm_movelh_ps((__m128)(unsigned __int64)v39, (__m128)DWORD2(v39));
  v16 = _mm_movelh_ps((__m128)v40, (__m128)v41);
  v17 = _mm_shuffle_ps(v15, v15, 210);
  v18 = _mm_shuffle_ps(v16, v16, 201);
  v19 = _mm_shuffle_ps(v17, v17, 210);
  v20 = _mm_shuffle_ps(v18, v18, 201);
  v21 = _mm_mul_ps(v17, v18);
  v22 = 0LL;
  *(_QWORD *)&v39 = 0LL;
  v23 = _mm_and_ps(_mm_sub_ps(v21, _mm_mul_ps(v19, v20)), (__m128)xmmword_1800FA2A0);
  v22.m128_u64[0] = v23.m128_u64[0];
  DWORD2(v39) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
  v24 = _mm_movelh_ps(v22, (__m128)DWORD2(v39));
  v25 = _mm_mul_ps(v24, v24);
  v26 = _mm_shuffle_ps(v25, v25, 102);
  v25.m128_f32[0] = (float)(v25.m128_f32[0] + v26.m128_f32[0]) + _mm_shuffle_ps(v26, v26, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v25, v25, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v29 = _mm_shuffle_ps(v16, v16, 210);
    DWORD2(v39) = -1082130432;
    v30 = _mm_movelh_ps((__m128)0LL, (__m128)0xBF800000);
    v31 = _mm_shuffle_ps(v30, v30, 201);
    v32 = _mm_and_ps(
            _mm_sub_ps(_mm_mul_ps(v31, v29), _mm_mul_ps(_mm_shuffle_ps(v31, v31, 201), _mm_shuffle_ps(v29, v29, 210))),
            (__m128)xmmword_1800FA2A0);
    v40 = v32.m128_u64[0];
    v41 = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
    sub_18003C524(&v40);
    v35 = _mm_mul_ps(v34, v33);
    v36 = _mm_shuffle_ps(v35, v35, 153);
    sub_18001205C((float)(v35.m128_f32[0] + v36.m128_f32[0]) + _mm_shuffle_ps(v36, v36, 85).m128_f32[0], -1.0, 1.0);
    o_acosf();
    sub_18003B394((__int64)&v39, &v40);
    v37 = v39;
LABEL_6:
    v39 = v37;
    return sub_18003D09C(a1, &v39);
  }
  *(_OWORD *)&v42[4] = 0LL;
  *(_OWORD *)&v42[44] = 0LL;
  v27 = v15;
  *((_QWORD *)&v28 + 1) = v8.m128_u64[1];
  *(_OWORD *)&v42[24] = 0LL;
  *(double *)&v28 = sub_18003DC7C();
  *(_OWORD *)v42 = v28;
  *(__m128 *)&v42[16] = _mm_sub_ps(v8, v7);
  *(__m128 *)&v42[32] = v27;
  *(_OWORD *)&v42[48] = 0LL;
  sub_18001955C((__int128 *)v42, (__int64)&v43);
  *((_QWORD *)&v28 + 1) = *((_QWORD *)&v43 + 1);
  *(double *)&v28 = sub_18003DF1C();
  v39 = v28;
  return sub_18003D09C(a1, &v39);
}
