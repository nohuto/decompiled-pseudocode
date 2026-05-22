/*
 * XREFs of ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1800C7710
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C6894 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C72D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     cosf @ 0x18009AB3C (cosf.c)
 *     _o_sinf_0 @ 0x18009AB84 (_o_sinf_0.c)
 */

float *__fastcall Windows::Foundation::Numerics::make_quaternion_from_axis_angle(float *a1, float *a2, float a3)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float *result; // rax

  v5 = o_sinf_0(a3 * 0.5);
  v6 = v5 * *a2;
  v7 = v5 * a2[1];
  a1[2] = v5 * a2[2];
  *a1 = v6;
  a1[1] = v7;
  v8 = cosf(a3 * 0.5);
  result = a1;
  a1[3] = v8;
  return result;
}
