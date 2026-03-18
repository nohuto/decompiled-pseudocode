/*
 * XREFs of ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1801BE7E8
 * Callers:
 *     ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x1801BE680 (-D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801C8FC8 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?Matrix4x4FromQuaternion@CExpressionValueStack@@QEAAJXZ @ 0x180214C34 (-Matrix4x4FromQuaternion@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DMatrix *__fastcall D2DMatrixRotationQuaternion(struct D2DMatrix *a1, const struct D2DQuaternion *a2)
{
  float v2; // xmm0_4
  float v3; // xmm8_4
  float v4; // xmm9_4
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm8_4
  float v8; // xmm11_4
  float v9; // xmm3_4
  float v10; // xmm7_4
  float v11; // xmm12_4
  float v12; // xmm2_4
  struct D2DMatrix *result; // rax
  float v14; // xmm4_4

  v2 = *((float *)a2 + 1);
  v3 = *((float *)a2 + 2) + *((float *)a2 + 2);
  v4 = *(float *)a2;
  v5 = v3 * *(float *)a2;
  v6 = v3;
  v7 = v3 * *((float *)a2 + 2);
  v8 = (float)(v4 + v4) * *((float *)a2 + 3);
  v9 = (float)(*((float *)a2 + 2) + *((float *)a2 + 2)) * *((float *)a2 + 3);
  v10 = (float)(v2 + v2) * *((float *)a2 + 3);
  *((_DWORD *)a1 + 3) = 0;
  v11 = (float)(v2 + v2) * v2;
  *((_DWORD *)a1 + 7) = 0;
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  v12 = (float)(v2 + v2) * v4;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  result = a1;
  *((_DWORD *)a1 + 15) = 1065353216;
  v14 = 1.0 - (float)((float)(v4 + v4) * v4);
  *((float *)a1 + 2) = v5 - v10;
  *((float *)a1 + 8) = v5 + v10;
  *(float *)a1 = (float)(1.0 - v11) - v7;
  *((float *)a1 + 9) = (float)(v6 * v2) - v8;
  *((float *)a1 + 6) = (float)(v6 * v2) + v8;
  *((float *)a1 + 1) = v12 + v9;
  *((float *)a1 + 4) = v12 - v9;
  *((float *)a1 + 5) = v14 - v7;
  *((float *)a1 + 10) = v14 - v11;
  return result;
}
