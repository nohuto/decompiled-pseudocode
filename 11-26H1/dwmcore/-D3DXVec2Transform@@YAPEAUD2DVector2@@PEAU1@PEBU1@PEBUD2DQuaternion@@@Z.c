/*
 * XREFs of ?D3DXVec2Transform@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x180293188
 * Callers:
 *     ?Vector2Transform@CExpressionValueStack@@QEAAJXZ @ 0x1802129AC (-Vector2Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector2 *__fastcall D3DXVec2Transform(
        struct D2DVector2 *a1,
        const struct D2DVector2 *a2,
        const struct D2DQuaternion *a3)
{
  float v3; // xmm2_4
  struct D2DVector2 *result; // rax
  float v5; // xmm0_4
  float v6; // xmm4_4
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm4_4

  v3 = *(float *)a3;
  result = a1;
  v5 = *((float *)a3 + 1) + *((float *)a3 + 1);
  v6 = *((float *)a3 + 2) + *((float *)a3 + 2);
  v7 = v5 * *(float *)a3;
  v8 = v6 * *((float *)a3 + 3);
  v9 = v6 * *((float *)a3 + 2);
  *(float *)a1 = (float)((float)((float)(1.0 - (float)(v5 * *((float *)a3 + 1))) - v9) * *(float *)a2)
               + (float)((float)(v7 - v8) * *((float *)a2 + 1));
  *((float *)a1 + 1) = (float)((float)((float)(1.0 - (float)((float)(v3 + v3) * v3)) - v9) * *((float *)a2 + 1))
                     + (float)((float)(v7 + v8) * *(float *)a2);
  return result;
}
