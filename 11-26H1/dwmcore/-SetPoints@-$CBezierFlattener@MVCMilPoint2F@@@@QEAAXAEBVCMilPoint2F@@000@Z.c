/*
 * XREFs of ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x18018492C
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180054E8C (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall CBezierFlattener<float,CMilPoint2F>::SetPoints(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  float v5; // xmm0_4
  float v6; // xmm5_4
  __m128 v7; // xmm4
  float v8; // xmm0_4
  float v9; // xmm6_4
  __m128 si128; // xmm3
  __m128 result; // xmm0
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  __m128d v20; // xmm0
  __int64 v21; // [rsp+20h] [rbp+8h]

  v21 = *a2;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *a5;
  *(_QWORD *)(a1 + 48) = v21;
  v5 = *(float *)(a1 + 24) - *(float *)&v21;
  *(float *)(a1 + 60) = *(float *)(a1 + 28) - *((float *)&v21 + 1);
  *(float *)(a1 + 56) = v5;
  v6 = *(float *)&v21 - (float)(*(float *)(a1 + 8) + *(float *)(a1 + 8));
  v7 = (__m128)LODWORD(FLOAT_1_0);
  v8 = (float)((float)(*(float *)(a1 + 8) - (float)(*(float *)(a1 + 16) + *(float *)(a1 + 16))) + *(float *)(a1 + 24))
     * 6.0;
  *(float *)(a1 + 68) = (float)((float)(*(float *)(a1 + 12) - (float)(*(float *)(a1 + 20) + *(float *)(a1 + 20)))
                              + *(float *)(a1 + 28))
                      * 6.0;
  *(float *)(a1 + 64) = v8;
  v9 = (float)(*((float *)&v21 + 1) - (float)(*(float *)(a1 + 12) + *(float *)(a1 + 12))) + *(float *)(a1 + 20);
  *(float *)(a1 + 72) = (float)(v6 + *(float *)(a1 + 16)) * 6.0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 1065353216;
  *(_DWORD *)(a1 + 80) = 1;
  si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  *(float *)(a1 + 76) = v9 * 6.0;
  while ( 1 )
  {
    if ( fmaxf(
           COERCE_FLOAT(*(_DWORD *)(a1 + 64) & si128.m128_i32[0]),
           COERCE_FLOAT(*(_DWORD *)(a1 + 68) & si128.m128_i32[0])) <= *(float *)(a1 + 32) )
    {
      result = _mm_and_ps((__m128)*(unsigned int *)(a1 + 76), si128);
      if ( fmaxf(COERCE_FLOAT(*(_DWORD *)(a1 + 72) & si128.m128_i32[0]), result.m128_f32[0]) <= *(float *)(a1 + 32) )
        break;
    }
    result = (__m128)_mm_cvtps_pd(v7);
    if ( *(double *)result.m128_u64 <= 0.001 )
      break;
    v12 = *(float *)(a1 + 64) + *(float *)(a1 + 72);
    v13 = *(float *)(a1 + 68);
    *(float *)(a1 + 64) = v12;
    v14 = v13 + *(float *)(a1 + 76);
    v15 = v12 * 0.125;
    *(float *)(a1 + 64) = v15;
    v16 = v14 * 0.125;
    *(float *)(a1 + 68) = v16;
    v17 = *(float *)(a1 + 60) - v16;
    v18 = (float)(*(float *)(a1 + 56) - v15) * 0.5;
    *(float *)(a1 + 60) = v17 * 0.5;
    *(float *)(a1 + 56) = v18;
    v19 = *(float *)(a1 + 76) * 0.25;
    *(float *)(a1 + 72) = *(float *)(a1 + 72) * 0.25;
    *(float *)(a1 + 76) = v19;
    v20 = _mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 88));
    *(_DWORD *)(a1 + 80) *= 2;
    v20.m128d_f64[0] = v20.m128d_f64[0] * 0.5;
    v7 = _mm_cvtpd_ps(v20);
    *(_DWORD *)(a1 + 88) = v7.m128_i32[0];
  }
  return result;
}
