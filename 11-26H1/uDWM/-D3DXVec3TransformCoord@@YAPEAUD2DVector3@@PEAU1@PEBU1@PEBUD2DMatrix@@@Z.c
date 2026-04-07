/*
 * XREFs of ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800E5BF4
 * Callers:
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180097910 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     WithinEpsilon @ 0x180066D6C (WithinEpsilon.c)
 *     ??_0D2DVector3@@QEAAAEAU0@M@Z @ 0x1800E5B30 (--_0D2DVector3@@QEAAAEAU0@M@Z.c)
 */

struct D2DVector3 *__fastcall D3DXVec3TransformCoord(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  float v3; // xmm5_4
  float v4; // xmm2_4
  float v5; // xmm7_4
  float *v6; // rcx

  v3 = (float)((float)((float)(*((float *)a2 + 1) * *((float *)a3 + 5)) + (float)(*(float *)a2 * *((float *)a3 + 1)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 9)))
     + *((float *)a3 + 13);
  v4 = (float)((float)((float)(*((float *)a2 + 1) * *((float *)a3 + 6)) + (float)(*(float *)a2 * *((float *)a3 + 2)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 10)))
     + *((float *)a3 + 14);
  v5 = (float)((float)((float)(*((float *)a2 + 1) * *((float *)a3 + 7)) + (float)(*(float *)a2 * *((float *)a3 + 3)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 11)))
     + *((float *)a3 + 15);
  *(float *)a1 = (float)((float)((float)(*((float *)a2 + 1) * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                       + (float)(*((float *)a2 + 2) * *((float *)a3 + 8)))
               + *((float *)a3 + 12);
  *((float *)a1 + 1) = v3;
  *((float *)a1 + 2) = v4;
  if ( !WithinEpsilon(v5, 1.0) )
    D2DVector3::operator/=(v6, v5);
  return (struct D2DVector3 *)v6;
}
