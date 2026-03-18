/*
 * XREFs of ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z @ 0x180293760
 * Callers:
 *     ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x1802125F0 (-Vector4Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector4 *__fastcall D3DXVec4Transform(
        struct D2DVector4 *a1,
        const struct D2DVector2 *a2,
        const struct D2DQuaternion *a3)
{
  struct D2DVector4 *result; // rax
  float v4; // xmm6_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm10_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm11_4
  float v11; // xmm0_4

  result = a1;
  v4 = *((float *)a3 + 3);
  v5 = *(float *)a3;
  v6 = *((float *)a3 + 2) + *((float *)a3 + 2);
  v7 = *((float *)a3 + 1);
  v8 = v6 * *((float *)a3 + 2);
  v9 = (float)(v7 + v7) * *(float *)a3;
  *(float *)a1 = (float)((float)((float)(1.0 - (float)((float)(v7 + v7) * v7)) - v8) * *(float *)a2)
               + (float)((float)(v9 - (float)(v6 * v4)) * *((float *)a2 + 1));
  *((float *)a1 + 1) = (float)((float)((float)(1.0 - (float)((float)(v5 + v5) * v5)) - v8) * *((float *)a2 + 1))
                     + (float)((float)(v9 + (float)(v6 * v4)) * *(float *)a2);
  v10 = (float)((float)((float)(v5 + v5) * v4) + (float)(v6 * v7)) * *((float *)a2 + 1);
  v11 = (float)((float)(v6 * v5) - (float)((float)(v7 + v7) * v4)) * *(float *)a2;
  *((_DWORD *)a1 + 3) = 1065353216;
  *((float *)a1 + 2) = v11 + v10;
  return result;
}
