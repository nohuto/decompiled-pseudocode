/*
 * XREFs of ?make_float4x4_scale@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@0@Z @ 0x180009EB0
 * Callers:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180009DA8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x180015480 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_scale(__int64 a1, float *a2, float *a3)
{
  float v3; // xmm3_4
  float v4; // xmm0_4
  float v5; // xmm4_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  __int64 result; // rax
  float v9; // xmm2_4

  v3 = a2[1];
  v4 = 1.0 - *a2;
  v5 = a2[2];
  *(float *)a1 = *a2;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  v6 = v4 * *a3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = (float)(1.0 - v3) * a3[1];
  *(_DWORD *)(a1 + 44) = 0;
  result = a1;
  v9 = (float)(1.0 - v5) * a3[2];
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 52) = v7;
  *(float *)(a1 + 20) = v3;
  *(float *)(a1 + 40) = v5;
  *(float *)(a1 + 48) = v6;
  *(float *)(a1 + 56) = v9;
  return result;
}
