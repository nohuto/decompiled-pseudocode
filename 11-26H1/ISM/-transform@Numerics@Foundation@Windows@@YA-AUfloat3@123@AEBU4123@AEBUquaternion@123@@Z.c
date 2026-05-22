/*
 * XREFs of ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x18006755C
 * Callers:
 *     ?PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800670B0 (-PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x180072878 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800C07C0 (-PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6894 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall Windows::Foundation::Numerics::transform(float *a1, float *a2, float *a3)
{
  float v3; // xmm0_4
  float v4; // xmm7_4
  float v5; // xmm10_4
  float *result; // rax
  float v7; // xmm3_4
  float v8; // xmm11_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm9_4
  float v12; // xmm12_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm7_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm10_4
  float v21; // xmm6_4
  float v22; // xmm1_4

  v3 = a3[1];
  v4 = a3[2] + a3[2];
  v5 = v4 * *a3;
  result = a1;
  v7 = v4 * a3[3];
  v8 = (float)(*a3 + *a3) * a3[3];
  v9 = v4 * a3[2];
  v10 = 1.0 - (float)((float)(*a3 + *a3) * *a3);
  v11 = (float)(v3 + v3) * a3[3];
  v12 = (float)(v3 + v3) * v3;
  v13 = (float)((float)((float)(v3 + v3) * *a3) + v7) * *a2;
  v14 = (float)((float)((float)(1.0 - v12) - v9) * *a2) + (float)((float)((float)((float)(v3 + v3) * *a3) - v7) * a2[1]);
  v15 = v4 * v3;
  v16 = v15 + v8;
  v17 = v14 + (float)((float)(v5 + v11) * a2[2]);
  v18 = v10 - v9;
  v19 = (float)(v15 - v8) * a2[2];
  v20 = (float)((float)(v5 - v11) * *a2) + (float)(v16 * a2[1]);
  v21 = (float)(v10 - v12) * a2[2];
  v22 = (float)(v18 * a2[1]) + v13;
  *a1 = v17;
  a1[2] = v20 + v21;
  a1[1] = v22 + v19;
  return result;
}
