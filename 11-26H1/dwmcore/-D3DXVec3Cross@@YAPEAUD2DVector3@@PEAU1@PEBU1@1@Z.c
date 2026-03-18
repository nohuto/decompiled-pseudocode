/*
 * XREFs of ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x1801E1C00
 * Callers:
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801C8FC8 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?Vector3Cross@CExpressionValueStack@@QEAAJXZ @ 0x180212140 (-Vector3Cross@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3Cross(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DVector3 *a3)
{
  float v3; // xmm3_4
  struct D2DVector3 *result; // rax
  float v5; // xmm4_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm0_4

  v3 = *((float *)a2 + 2);
  result = a1;
  v5 = *((float *)a3 + 2);
  v6 = *((float *)a2 + 1);
  v7 = *(float *)a3;
  v8 = *((float *)a3 + 1);
  v9 = *(float *)a2;
  v10 = *(float *)a2 * v5;
  *(float *)a1 = (float)(v6 * v5) - (float)(v3 * v8);
  *((float *)a1 + 1) = (float)(v7 * v3) - v10;
  *((float *)a1 + 2) = (float)(v9 * v8) - (float)(v7 * v6);
  return result;
}
