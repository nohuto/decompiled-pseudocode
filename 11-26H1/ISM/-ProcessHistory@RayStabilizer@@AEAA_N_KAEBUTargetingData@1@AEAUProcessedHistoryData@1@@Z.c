/*
 * XREFs of ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x1800C6F1C
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6894 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEBAAEAUPointerFrame@PointerInputMediator@@XZ @ 0x1800628F0 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMe.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x180073B3C (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 *     _o_fmodf_0 @ 0x18009AB48 (_o_fmodf_0.c)
 *     _o_sqrtf_0 @ 0x18009AB9C (_o_sqrtf_0.c)
 *     ?DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1800C6848 (-DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800C7414 (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 */

bool __fastcall RayStabilizer::ProcessHistory(
        RayStabilizer *this,
        unsigned __int64 a2,
        const struct RayStabilizer::TargetingData *a3,
        struct RayStabilizer::ProcessedHistoryData *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rsi
  unsigned __int32 v9; // xmm9_4
  float v10; // xmm11_4
  __int64 v11; // rax
  const char *v12; // r9
  float v13; // xmm0_4
  float v14; // xmm8_4
  int v15; // xmm6_4
  float v16; // xmm0_4
  int v17; // eax
  int v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm8_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm7_4
  float v31; // xmm1_4
  float v32; // xmm3_4
  bool result; // al
  float v34; // xmm0_4
  float v35; // xmm8_4
  float v36; // xmm9_4
  float v37; // xmm10_4
  float v38; // xmm6_4
  float v39; // xmm0_4
  float v40; // xmm7_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm7_4
  float v45; // xmm0_4
  _QWORD v46[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B8h]
  __int64 v49; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h]
  _QWORD v51[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v52; // [rsp+78h] [rbp-90h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h]
  __int128 v54; // [rsp+98h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-60h]

  v4 = *((_QWORD *)this + 3);
  v8 = v4 + *((_QWORD *)this + 4);
  v9 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v10 = 0.0;
  *(_QWORD *)((char *)a4 + 4) = 2139095039LL;
  *(_DWORD *)a4 = 0x800000;
  *((_DWORD *)a4 + 4) = 0x800000;
  *((_DWORD *)a4 + 8) = 0x800000;
  *((_DWORD *)a4 + 12) = 0x800000;
  *(_QWORD *)((char *)a4 + 20) = 2139095039LL;
  *(_QWORD *)((char *)a4 + 36) = 2139095039LL;
  *(_QWORD *)((char *)a4 + 52) = 2139095039LL;
  v51[0] = this;
  while ( 1 )
  {
    v51[1] = v4;
    if ( v4 == v8 )
      break;
    v11 = std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::operator*((__int64)v51);
    RayStabilizationResult::GetAtStep(v11, (__int64)&v52, a2, v12);
    v55 = v53;
    memset(v46, 0, sizeof(v46));
    v54 = v52;
    if ( (unsigned __int8)RayStabilizer::TransformRay(&v54, v46) )
    {
      v10 = v10 + 1.0;
      v13 = *((float *)a3 + 6) - *(float *)&v46[3];
      LODWORD(v14) = COERCE_UNSIGNED_INT(
                       (float)((float)((float)(*(float *)v46 - *(float *)a3) * (float)(*(float *)v46 - *(float *)a3))
                             + (float)((float)(*((float *)v46 + 1) - *((float *)a3 + 1))
                                     * (float)(*((float *)v46 + 1) - *((float *)a3 + 1))))
                     + (float)((float)(*(float *)&v46[1] - *((float *)a3 + 2))
                             * (float)(*(float *)&v46[1] - *((float *)a3 + 2)))) & v9;
      o_fmodf_0();
      v15 = LODWORD(v13) & v9;
      v16 = *((float *)a3 + 7) - *((float *)&v46[3] + 1);
      o_fmodf_0();
      v17 = *((_DWORD *)a3 + 5);
      v47 = *(_QWORD *)((char *)a3 + 12);
      v18 = LODWORD(v16) & v9;
      LODWORD(v48) = v17;
      v49 = *(_QWORD *)((char *)&v46[1] + 4);
      LODWORD(v50) = HIDWORD(v46[2]);
      v19 = RayStabilizer::DeltaAngle((float *)&v49, (float *)&v47);
      v20 = fminf(*(float *)a4, v14);
      v21 = fmaxf(*((float *)a4 + 1), v14);
      v22 = v14 + *((float *)a4 + 2);
      v23 = fminf(*((float *)a4 + 12), *(float *)&v18);
      *(float *)a4 = v20;
      v24 = fminf(*((float *)a4 + 8), *(float *)&v15);
      *((float *)a4 + 1) = v21;
      v25 = *((float *)a4 + 9);
      *((float *)a4 + 12) = v23;
      v26 = fmaxf(v25, *(float *)&v15);
      v27 = *((float *)a4 + 4);
      v28 = *(float *)&v15 + *((float *)a4 + 10);
      *((float *)a4 + 8) = v24;
      v29 = fmaxf(*((float *)a4 + 13), *(float *)&v18);
      *((float *)a4 + 2) = v22;
      v30 = *(float *)&v18 + *((float *)a4 + 14);
      *((float *)a4 + 9) = v26;
      *((float *)a4 + 10) = v28;
      *((float *)a4 + 4) = fminf(v27, v19);
      *((float *)a4 + 13) = v29;
      v31 = fmaxf(*((float *)a4 + 5), v19);
      *((float *)a4 + 14) = v30;
      v32 = v19 + *((float *)a4 + 6);
      *((float *)a4 + 5) = v31;
      *((float *)a4 + 6) = v32;
    }
    ++v4;
  }
  if ( v10 == 0.0 )
    return 0;
  v34 = *(float *)a4;
  v35 = *((float *)a4 + 10) / v10;
  v36 = *((float *)a4 + 14) / v10;
  v37 = *((float *)a4 + 6) / v10;
  *((float *)a4 + 10) = v35;
  *((float *)a4 + 14) = v36;
  *((float *)a4 + 6) = v37;
  v38 = o_sqrtf_0(v34);
  v39 = *((float *)a4 + 1);
  *(float *)a4 = v38;
  v40 = o_sqrtf_0(v39);
  v41 = *((float *)a4 + 2) / v10;
  *((float *)a4 + 1) = v40;
  v42 = o_sqrtf_0(v41);
  v43 = *((float *)a4 + 13) - *((float *)a4 + 12);
  *((float *)a4 + 2) = v42;
  result = 1;
  v44 = (float)(v40 - v38) + (float)(v42 + v42);
  v45 = *((float *)a4 + 9) - *((float *)a4 + 8);
  *((float *)a4 + 3) = v44;
  *((float *)a4 + 15) = v43 + (float)(v36 + v36);
  *((float *)a4 + 11) = v45 + (float)(v35 + v35);
  *((float *)a4 + 7) = (float)(*((float *)a4 + 5) - *((float *)a4 + 4)) + (float)(v37 + v37);
  return result;
}
