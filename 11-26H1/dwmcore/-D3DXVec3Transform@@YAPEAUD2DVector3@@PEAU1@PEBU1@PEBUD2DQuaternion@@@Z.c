/*
 * XREFs of ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x1802932D0
 * Callers:
 *     ?Vector3Transform@CExpressionValueStack@@QEAAJXZ @ 0x180212780 (-Vector3Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3Transform(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DQuaternion *a3)
{
  float v3; // xmm0_4
  struct D2DVector3 *result; // rax
  float v5; // xmm8_4
  float v6; // xmm11_4
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm7_4
  float v10; // xmm12_4
  float v11; // xmm11_4
  float v12; // xmm10_4
  float v13; // xmm13_4
  float v14; // xmm4_4
  float v15; // xmm6_4

  v3 = *((float *)a3 + 1);
  result = a1;
  v5 = *(float *)a3;
  v6 = *((float *)a3 + 2) + *((float *)a3 + 2);
  v7 = v6 * *((float *)a3 + 3);
  v8 = v6 * *((float *)a3 + 2);
  v9 = v6 * v3;
  v10 = (float)(v5 + v5) * *((float *)a3 + 3);
  v11 = v6 * *(float *)a3;
  v12 = (float)(v3 + v3) * *((float *)a3 + 3);
  v13 = (float)(v3 + v3) * v3;
  v14 = (float)(v3 + v3) * *(float *)a3;
  v15 = 1.0 - (float)((float)(v5 + v5) * v5);
  *(float *)a1 = (float)((float)((float)((float)(1.0 - v13) - v8) * *(float *)a2)
                       + (float)((float)(v14 - v7) * *((float *)a2 + 1)))
               + (float)((float)(v11 + v12) * *((float *)a2 + 2));
  *((float *)a1 + 1) = (float)((float)((float)(v15 - v8) * *((float *)a2 + 1))
                             + (float)((float)(v14 + v7) * *(float *)a2))
                     + (float)((float)(v9 - v10) * *((float *)a2 + 2));
  *((float *)a1 + 2) = (float)((float)((float)(v11 - v12) * *(float *)a2)
                             + (float)((float)(v9 + v10) * *((float *)a2 + 1)))
                     + (float)((float)(v15 - v13) * *((float *)a2 + 2));
  return result;
}
