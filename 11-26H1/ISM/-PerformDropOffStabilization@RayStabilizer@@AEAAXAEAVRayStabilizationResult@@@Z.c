/*
 * XREFs of ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6894
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18006AD38 (-StabilizeInput@RayStabilizer@@QEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x18006755C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x180073B3C (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 *     _o_fmodf_0 @ 0x18009AB48 (_o_fmodf_0.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUquaternion@012@AEBU3012@0@Z @ 0x1800C6384 (--DNumerics@Foundation@Windows@@YA-AUquaternion@012@AEBU3012@0@Z.c)
 *     ?ComputeDropOffTarget@RayStabilizer@@AEAA?AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z @ 0x1800C63F4 (-ComputeDropOffTarget@RayStabilizer@@AEAA-AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z.c)
 *     ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x1800C6F1C (-ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800C7414 (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1800C7710 (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 */

void __fastcall RayStabilizer::PerformDropOffStabilization(
        __m128 *this,
        struct RayStabilizationResult *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rsi
  __m128 v7; // xmm6
  unsigned __int64 v8; // xmm7_8
  __m128 *v9; // rax
  __m128 v10; // xmm9
  __m128 v11; // xmm10
  __m128 *v12; // rax
  __m128 v13; // xmm3
  __m128 v14; // xmm2
  __m128 v15; // xmm1
  __m128 v16; // xmm3
  __int64 v17; // rcx
  _BYTE v18[12]; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v19; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+48h] [rbp-C0h]
  __m128 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+68h] [rbp-A0h]
  __m128 v23; // [rsp+78h] [rbp-90h] BYREF
  __m128 v24; // [rsp+88h] [rbp-80h]
  float v25[32]; // [rsp+A8h] [rbp-60h] BYREF

  v4 = *(unsigned int *)a2;
  RayStabilizationResult::GetAtStep((__int64)a2, (__int64)&v21, v4 - 1, a4);
  v7 = v21;
  v24 = v21;
  v8 = v22;
  v19 = 0LL;
  v20 = 0LL;
  if ( (unsigned __int8)RayStabilizer::TransformRay(&v21, &v19) )
  {
    v21 = v19;
    v22 = v20;
    memset_0(v25, 0, 0x40uLL);
    if ( RayStabilizer::ProcessHistory(
           (RayStabilizer *)this,
           v4 - 1,
           (const struct RayStabilizer::TargetingData *)&v19,
           (struct RayStabilizer::ProcessedHistoryData *)v25) )
    {
      v9 = RayStabilizer::ComputeDropOffTarget(this, &v21, (unsigned int *)&v19, v25);
      *(_QWORD *)v18 = 1065353216LL;
      *(_DWORD *)&v18[8] = 0;
      v10 = *v9;
      v11 = v9[1];
      v24.m128_f32[0] = (float)((float)(COERCE_FLOAT(*v9) - v19.m128_f32[0]) * 0.66600001) + v19.m128_f32[0];
      v24.m128_f32[1] = (float)((float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] - v19.m128_f32[1]) * 0.66600001)
                      + v19.m128_f32[1];
      v24.m128_f32[2] = (float)((float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v19.m128_f32[2]) * 0.66600001)
                      + v19.m128_f32[2];
      o_fmodf_0();
      Windows::Foundation::Numerics::make_quaternion_from_axis_angle(&v23, v18);
      *(_DWORD *)v18 = 0;
      *(_QWORD *)&v18[4] = 1065353216LL;
      o_fmodf_0();
      Windows::Foundation::Numerics::make_quaternion_from_axis_angle(&v19, v18);
      v12 = Windows::Foundation::Numerics::operator*(&v21, &v19, &v23);
      *(_DWORD *)v18 = 0x80000000;
      *(_DWORD *)&v18[4] = 0x80000000;
      *(_DWORD *)&v18[8] = -1082130432;
      Windows::Foundation::Numerics::transform(v23.m128_f32, (float *)v18, v12->m128_f32);
      v13 = _mm_movelh_ps((__m128)v23.m128_u64[0], (__m128)v23.m128_u32[2]);
      v14 = _mm_mul_ps(v13, v13);
      v15 = _mm_shuffle_ps(v14, v14, 102);
      v14.m128_f32[0] = (float)(v14.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
      v16 = _mm_div_ps(v13, _mm_sqrt_ps(_mm_shuffle_ps(v14, v14, 0)));
      v23.m128_u64[0] = v16.m128_u64[0];
      v24.m128_i32[3] = v16.m128_i32[0];
      v7 = v24;
      v8 = _mm_unpacklo_ps((__m128)v16.m128_u32[1], _mm_shuffle_ps(v16, v16, 170)).m128_u64[0];
    }
    else
    {
      v11 = (__m128)v22;
      v10 = v21;
    }
    this[3] = v10;
    this[5].m128_i8[0] = 1;
    this[4] = v11;
  }
  v17 = 3LL * *(unsigned int *)a2;
  *(__m128 *)((char *)a2 + 8 * v17 + 4) = v7;
  *(_QWORD *)((char *)a2 + 8 * v17 + 20) = v8;
  ++*(_DWORD *)a2;
}
