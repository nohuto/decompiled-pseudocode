/*
 * XREFs of ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800E9FF0
 * Callers:
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A4CCC (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     WithinEpsilon @ 0x18006C190 (WithinEpsilon.c)
 *     ??_0D2DVector3@@QEAAAEAU0@M@Z @ 0x1800E9F2C (--_0D2DVector3@@QEAAAEAU0@M@Z.c)
 */

struct D2DVector3 *__fastcall D3DXVec3TransformCoord(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm11_4
  float v6; // xmm14_4
  float v7; // xmm0_4
  float v8; // xmm12_4
  float v9; // xmm15_4
  float v10; // xmm13_4
  float v11; // xmm3_4
  float *v12; // rcx

  v3 = *((float *)a3 + 13);
  v4 = *((float *)a3 + 2);
  v5 = *((float *)a3 + 14);
  v6 = *(float *)a2;
  v7 = *((float *)a2 + 1);
  v8 = v7 * *((float *)a3 + 6);
  v9 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 3)) + (float)(v7 * *((float *)a3 + 7)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 11)))
     + *((float *)a3 + 15);
  v10 = *((float *)a2 + 2) * *((float *)a3 + 10);
  v11 = (float)((float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(v7 * *((float *)a3 + 5)))
      + (float)(*((float *)a2 + 2) * *((float *)a3 + 9));
  *(float *)a1 = (float)((float)((float)(v7 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                       + (float)(*((float *)a2 + 2) * *((float *)a3 + 8)))
               + *((float *)a3 + 12);
  *((float *)a1 + 1) = v11 + v3;
  *((float *)a1 + 2) = (float)((float)((float)(v6 * v4) + v8) + v10) + v5;
  if ( !WithinEpsilon(v9, 1.0) )
    D2DVector3::operator/=(v12, v9);
  return (struct D2DVector3 *)v12;
}
