/*
 * XREFs of ?D2DMatrixRotationX@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x1801B7F8C
 * Callers:
 *     ?Matrix4x4FromRotationX@CExpressionValueStack@@QEAAJI@Z @ 0x180215EA0 (-Matrix4x4FromRotationX@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     cosf_0 @ 0x1802B96D8 (cosf_0.c)
 *     sinf_0 @ 0x1802B9774 (sinf_0.c)
 */

__int64 __fastcall D2DMatrixRotationX(__int64 a1, float a2, __int64 a3)
{
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  __int64 result; // rax

  v5 = sinf_0(a2);
  v6 = cosf_0(a2);
  v7 = *(float *)(a3 + 4);
  v8 = 1.0 - v6;
  *(_DWORD *)(a1 + 36) = LODWORD(v5) ^ _xmm;
  *(float *)(a1 + 20) = v6;
  *(float *)(a1 + 40) = v6;
  v9 = *(float *)(a3 + 8);
  v10 = v7 * v8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v11 = v8 * *(float *)(a3 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(float *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 44) = 0LL;
  *(_QWORD *)a1 = 1065353216LL;
  result = a1;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 52) = v10 + (float)(v9 * v5);
  *(float *)(a1 + 56) = v11 - (float)(v7 * v5);
  return result;
}
