/*
 * XREFs of ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x180293544
 * Callers:
 *     ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x1802125F0 (-Vector4Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector4 *__fastcall D3DXVec4Transform(
        struct D2DVector4 *a1,
        const struct D2DVector4 *a2,
        const struct D2DQuaternion *a3)
{
  float v3; // xmm0_4
  float v4; // xmm8_4
  float v5; // xmm11_4
  float v6; // xmm3_4
  float v7; // xmm5_4
  float v8; // xmm7_4
  float v9; // xmm12_4
  float v10; // xmm11_4
  float v11; // xmm10_4
  float v12; // xmm13_4
  float v13; // xmm4_4
  float v14; // xmm6_4

  v3 = *((float *)a3 + 1);
  v4 = *(float *)a3;
  v5 = *((float *)a3 + 2) + *((float *)a3 + 2);
  v6 = v5 * *((float *)a3 + 3);
  v7 = v5 * *((float *)a3 + 2);
  v8 = v5 * v3;
  v9 = (float)(v4 + v4) * *((float *)a3 + 3);
  v10 = v5 * *(float *)a3;
  v11 = (float)(v3 + v3) * *((float *)a3 + 3);
  v12 = (float)(v3 + v3) * v3;
  v13 = (float)(v3 + v3) * *(float *)a3;
  v14 = 1.0 - (float)((float)(v4 + v4) * v4);
  *(float *)a1 = (float)((float)((float)((float)(1.0 - v12) - v7) * *(float *)a2)
                       + (float)((float)(v13 - v6) * *((float *)a2 + 1)))
               + (float)((float)(v10 + v11) * *((float *)a2 + 2));
  *((float *)a1 + 1) = (float)((float)((float)(v14 - v7) * *((float *)a2 + 1))
                             + (float)((float)(v13 + v6) * *(float *)a2))
                     + (float)((float)(v8 - v9) * *((float *)a2 + 2));
  *((float *)a1 + 2) = (float)((float)((float)(v10 - v11) * *(float *)a2)
                             + (float)((float)(v8 + v9) * *((float *)a2 + 1)))
                     + (float)((float)(v14 - v12) * *((float *)a2 + 2));
  *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
  return a1;
}
