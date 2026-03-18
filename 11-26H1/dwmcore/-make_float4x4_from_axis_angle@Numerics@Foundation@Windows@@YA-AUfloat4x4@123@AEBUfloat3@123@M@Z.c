/*
 * XREFs of ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z @ 0x18015F3C4
 * Callers:
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18015E48C (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18015E520 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     cosf_0 @ 0x1802B96D8 (cosf_0.c)
 *     sinf_0 @ 0x1802B9774 (sinf_0.c)
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_from_axis_angle(__int64 a1, float *a2, float a3)
{
  float v5; // xmm11_4
  float v6; // xmm12_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm10_4
  __int64 result; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm11_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm6_4

  v5 = sinf_0(a3);
  v6 = cosf_0(a3);
  v7 = a2[1] * *a2;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v8 = *a2;
  v9 = a2[2] * *a2;
  *(_DWORD *)(a1 + 12) = 0;
  v10 = a2[2] * a2[1];
  *(_DWORD *)(a1 + 28) = 0;
  v11 = v5 * a2[2];
  *(_QWORD *)(a1 + 44) = 0LL;
  v12 = a2[1];
  v13 = a2[2];
  *(_QWORD *)(a1 + 52) = 0LL;
  result = a1;
  v15 = (float)((float)(1.0 - (float)(v8 * v8)) * v6) + (float)(v8 * v8);
  v16 = v5 * a2[1];
  v17 = v5 * *a2;
  *(float *)a1 = v15;
  v18 = v7 - (float)(v7 * v6);
  *(float *)(a1 + 16) = v18 - v11;
  *(float *)(a1 + 4) = v18 + v11;
  v19 = v9 - (float)(v9 * v6);
  *(float *)(a1 + 32) = v19 + v16;
  *(float *)(a1 + 8) = v19 - v16;
  *(float *)(a1 + 20) = (float)((float)(1.0 - (float)(v12 * v12)) * v6) + (float)(v12 * v12);
  *(float *)(a1 + 40) = (float)((float)(1.0 - (float)(v13 * v13)) * v6) + (float)(v13 * v13);
  v20 = v10 - (float)(v10 * v6);
  *(float *)(a1 + 36) = v20 - v17;
  *(float *)(a1 + 24) = v20 + v17;
  return result;
}
