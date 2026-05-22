/*
 * XREFs of ?ComputeDropOffTarget@RayStabilizer@@AEAA?AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z @ 0x1800C63F4
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6894 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     _o_fmodf_0 @ 0x18009AB48 (_o_fmodf_0.c)
 *     _o_sqrtf_0 @ 0x18009AB9C (_o_sqrtf_0.c)
 *     ?DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1800C6848 (-DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 */

__m128 *__fastcall RayStabilizer::ComputeDropOffTarget(__m128 *a1, __m128 *a2, unsigned int *a3, float *a4)
{
  __m128 v7; // xmm1
  __m128 v8; // xmm10
  float v9; // xmm1_4
  float v10; // xmm14_4
  float v11; // xmm15_4
  __m128 v12; // xmm6
  float v13; // xmm13_4
  float v14; // xmm7_4
  __m128 v15; // xmm9
  __m128 v16; // xmm11
  float v17; // xmm2_4
  __m128 v18; // xmm3
  __m128 v19; // xmm3
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm3
  float v23; // xmm7_4
  unsigned int v24; // eax
  __m128 v25; // xmm3
  __m128 v26; // xmm6
  __m128 v27; // xmm5
  __m128 v28; // xmm1
  float v29; // xmm4_4
  __m128 v30; // xmm2
  __m128 v31; // xmm3
  __m128 v32; // xmm2
  __m128 v33; // xmm1
  __m128 v34; // xmm3
  unsigned int v35; // xmm4_4
  __m128 v36; // xmm3
  __m128 v37; // xmm3
  __m128 v38; // xmm2
  __m128 v39; // xmm1
  __m128 v40; // xmm3
  float v41; // xmm7_4
  float v42; // xmm9_4
  float v43; // xmm0_4
  float v44; // xmm7_4
  float v45; // xmm7_4
  float v46; // xmm9_4
  float v47; // xmm0_4
  float v48; // xmm7_4
  unsigned __int64 v50; // [rsp+28h] [rbp-79h] BYREF
  unsigned int v51; // [rsp+30h] [rbp-71h]
  unsigned __int64 v52; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v53; // [rsp+40h] [rbp-61h]
  __m256i v54; // [rsp+48h] [rbp-59h]

  if ( a1[5].m128_i8[0] )
  {
    v8 = a1[3];
    v9 = a4[3] * 0.2;
    v10 = *((float *)a3 + 1);
    v11 = *((float *)a3 + 2);
    v16 = (__m128)LODWORD(v10);
    v12 = a1[4];
    v13 = *(float *)a3;
    v15 = (__m128)*a3;
    *(__m128 *)v54.m256i_i8 = v8;
    *(__m128 *)&v54.m256i_u64[2] = v12;
    v14 = fmaxf(0.0, 0.0 - v9);
    v15.m128_f32[0] = v15.m128_f32[0] - v8.m128_f32[0];
    v16.m128_f32[0] = v10 - _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
    v17 = v11 - _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
    v53 = LODWORD(v17);
    if ( v14 == 0.0
      || (float)(o_sqrtf_0(
                   (float)((float)(v15.m128_f32[0] * v15.m128_f32[0]) + (float)(v16.m128_f32[0] * v16.m128_f32[0]))
                 + (float)(v17 * v17))
               / v14) > 1.0 )
    {
      v18 = 0LL;
      v18.m128_u64[0] = _mm_unpacklo_ps(v15, v16).m128_u64[0];
      v19 = _mm_movelh_ps(v18, (__m128)v53);
      v20 = _mm_mul_ps(v19, v19);
      v21 = _mm_shuffle_ps(v20, v20, 102);
      v20.m128_f32[0] = (float)(v20.m128_f32[0] + v21.m128_f32[0]) + _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
      v22 = _mm_div_ps(v19, _mm_sqrt_ps(_mm_shuffle_ps(v20, v20, 0)));
      v50 = v22.m128_u64[0];
      *(float *)v54.m256i_i32 = v13 - (float)(v22.m128_f32[0] * v14);
      *(float *)&v54.m256i_i32[1] = v10 - (float)(v22.m128_f32[1] * v14);
      *(float *)&v54.m256i_i32[2] = v11 - (float)(_mm_shuffle_ps(v22, v22, 170).m128_f32[0] * v14);
      v8 = *(__m128 *)v54.m256i_i8;
    }
    v23 = fmaxf(0.0, 0.050000001 - (float)(a4[7] * 0.30000001));
    if ( v23 == 0.0
      || (v24 = a3[5],
          v50 = *(_QWORD *)(a3 + 3),
          v52 = *(unsigned __int64 *)((char *)&v54.m256i_u64[1] + 4),
          v51 = v24,
          v53 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 4)),
          (float)(RayStabilizer::DeltaAngle(&v52, &v50) / v23) > 1.0) )
    {
      v25 = 0LL;
      v26 = (__m128)a3[3];
      v27 = (__m128)a3[4];
      v28 = v26;
      v28.m128_f32[0] = v26.m128_f32[0] - *(float *)&v54.m256i_i32[3];
      v29 = *((float *)a3 + 5);
      v30 = v27;
      v30.m128_f32[0] = v27.m128_f32[0] - *(float *)&v54.m256i_i32[4];
      v25.m128_u64[0] = _mm_unpacklo_ps(v28, v30).m128_u64[0];
      v31 = _mm_movelh_ps(v25, (__m128)COERCE_UNSIGNED_INT(v29 - *(float *)&v54.m256i_i32[5]));
      v32 = _mm_mul_ps(v31, v31);
      v33 = _mm_shuffle_ps(v32, v32, 102);
      v32.m128_f32[0] = (float)(v32.m128_f32[0] + v33.m128_f32[0]) + _mm_shuffle_ps(v33, v33, 85).m128_f32[0];
      v34 = _mm_div_ps(v31, _mm_sqrt_ps(_mm_shuffle_ps(v32, v32, 0)));
      v26.m128_f32[0] = v26.m128_f32[0] - (float)(v34.m128_f32[0] * v23);
      v33.m128_f32[0] = v34.m128_f32[1] * v23;
      *(float *)&v35 = v29 - (float)(_mm_shuffle_ps(v34, v34, 170).m128_f32[0] * v23);
      v36 = 0LL;
      v27.m128_f32[0] = v27.m128_f32[0] - v33.m128_f32[0];
      v53 = v35;
      v36.m128_u64[0] = _mm_unpacklo_ps(v26, v27).m128_u64[0];
      v37 = _mm_movelh_ps(v36, (__m128)v35);
      v38 = _mm_mul_ps(v37, v37);
      v39 = _mm_shuffle_ps(v38, v38, 102);
      v38.m128_f32[0] = (float)(v38.m128_f32[0] + v39.m128_f32[0]) + _mm_shuffle_ps(v39, v39, 85).m128_f32[0];
      v40 = _mm_div_ps(v37, _mm_sqrt_ps(_mm_shuffle_ps(v38, v38, 0)));
      v52 = v40.m128_u64[0];
      *(__int64 *)((char *)&v54.m256i_i64[1] + 4) = v40.m128_u64[0];
      v8 = *(__m128 *)v54.m256i_i8;
      v54.m256i_i32[5] = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
      v12 = *(__m128 *)&v54.m256i_u64[2];
    }
    v41 = *((float *)a3 + 6);
    v42 = fmaxf(0.0, 0.80000001 - (float)(a4[11] * 0.2));
    if ( v42 == 0.0 || (o_fmodf_0(), v43 = (float)(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] - v41) / v42, v43 > 1.0) )
    {
      v44 = v41 + v42;
    }
    else
    {
      if ( v43 >= -1.0 )
      {
LABEL_15:
        v45 = *((float *)a3 + 7);
        v46 = fmaxf(0.0, 0.80000001 - (float)(a4[15] * 0.2));
        if ( v46 == 0.0
          || (o_fmodf_0(), v47 = (float)(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] - v45) / v46, v47 > 1.0) )
        {
          v48 = v45 + v46;
        }
        else
        {
          if ( v47 >= -1.0 )
          {
LABEL_21:
            *a2 = v8;
            a2[1] = v12;
            return a2;
          }
          v48 = v45 - v46;
        }
        *(float *)&v54.m256i_i32[7] = v48;
        v12 = *(__m128 *)&v54.m256i_u64[2];
        goto LABEL_21;
      }
      v44 = v41 - v42;
    }
    *(float *)&v54.m256i_i32[6] = v44;
    v12 = *(__m128 *)&v54.m256i_u64[2];
    goto LABEL_15;
  }
  v7 = *((__m128 *)a3 + 1);
  *a2 = *(__m128 *)a3;
  a2[1] = v7;
  return a2;
}
