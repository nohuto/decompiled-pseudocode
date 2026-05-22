/*
 * XREFs of ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800674C4
 * Callers:
 *     ?PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800670B0 (-PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z @ 0x1800BBA64 (-UpdateInputContext@MPCHolographicInputManager@@QEAAXAEBUMPCMatrix4x4@@_J1@Z.c)
 *     ?PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800C07C0 (-PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C72D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?PopulateTargetingData@MPCEyeGazeProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C8650 (-PopulateTargetingData@MPCEyeGazeProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     <none>
 */

float *__fastcall Windows::Foundation::Numerics::transform_normal(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm5_4

  result = a1;
  v4 = (float)(a2[1] * a3[5]) + (float)(*a2 * a3[1]);
  v5 = a2[2];
  v6 = v5 * a3[10];
  v7 = v5 * a3[9];
  v8 = (float)(a2[1] * a3[6]) + (float)(*a2 * a3[2]);
  *a1 = (float)((float)(a2[1] * a3[4]) + (float)(*a2 * *a3)) + (float)(a2[2] * a3[8]);
  a1[1] = v4 + v7;
  a1[2] = v8 + v6;
  return result;
}
