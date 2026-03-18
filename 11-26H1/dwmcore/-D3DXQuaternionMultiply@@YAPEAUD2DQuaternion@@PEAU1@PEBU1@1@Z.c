/*
 * XREFs of ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x180108964
 * Callers:
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18010A690 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x180191EF4 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x18020FF4C (-Concatenate@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DQuaternion *__fastcall D3DXQuaternionMultiply(
        struct D2DQuaternion *a1,
        const struct D2DQuaternion *a2,
        const struct D2DQuaternion *a3)
{
  float v3; // xmm4_4
  struct D2DQuaternion *result; // rax
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm0_4

  v3 = *((float *)a2 + 3);
  result = a1;
  v5 = *(float *)a2;
  v6 = *(float *)a3;
  v7 = *((float *)a2 + 1);
  v8 = *((float *)a3 + 1);
  v9 = *((float *)a3 + 3);
  v10 = *((float *)a2 + 2);
  v11 = *((float *)a3 + 2);
  v12 = *(float *)a3 * v10;
  *(float *)a1 = (float)((float)((float)(*(float *)a2 * v9) + (float)(v3 * *(float *)a3)) + (float)(v10 * v8))
               - (float)(v7 * v11);
  *((float *)a1 + 1) = (float)((float)((float)(v9 * v7) - v12) + (float)(v3 * v8)) + (float)(v5 * v11);
  *((float *)a1 + 2) = (float)((float)((float)(v9 * v10) + (float)(v6 * v7)) - (float)(v5 * v8)) + (float)(v3 * v11);
  *((float *)a1 + 3) = (float)((float)((float)(v9 * v3) - (float)(v5 * v6)) - (float)(v8 * v7)) - (float)(v10 * v11);
  return result;
}
