/*
 * XREFs of ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x1801C7330
 * Callers:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x180015480 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x1801C72D0 (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 * Callees:
 *     cosf_0 @ 0x1802B96D8 (cosf_0.c)
 *     sinf_0 @ 0x1802B9774 (sinf_0.c)
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_rotation_z(__int64 a1, float a2, float *a3)
{
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  int v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  __int64 result; // rax
  float v12; // xmm3_4

  v5 = cosf_0(a2);
  v6 = sinf_0(a2);
  v7 = *a3;
  v8 = LODWORD(v6) ^ _xmm;
  v9 = v6;
  v10 = a3[1];
  *(_DWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  result = a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v12 = (float)(1.0 - v5) * a3[1];
  *(float *)a1 = v5;
  *(float *)(a1 + 20) = v5;
  *(float *)(a1 + 4) = v9;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(float *)(a1 + 48) = (float)(v7 * (float)(1.0 - v5)) + (float)(v10 * v9);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(float *)(a1 + 52) = v12 - (float)(v7 * v9);
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
