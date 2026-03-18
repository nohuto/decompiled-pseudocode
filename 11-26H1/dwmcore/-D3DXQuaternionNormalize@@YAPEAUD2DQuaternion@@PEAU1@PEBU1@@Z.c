/*
 * XREFs of ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180121D1C
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x180014474 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18010F380 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180120E2C (-SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     EncodeTBNFrameToQuaternion @ 0x18012190C (EncodeTBNFrameToQuaternion.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x18020F6D8 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionNormalize(struct D2DQuaternion *a1, const struct D2DQuaternion *a2)
{
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm2_4
  float v9; // xmm6_4

  v4 = *((float *)a2 + 3);
  v5 = *((float *)a2 + 2);
  v6 = *((float *)a2 + 1);
  v7 = (float)((float)((float)(v6 * v6) + (float)(*(float *)a2 * *(float *)a2)) + (float)(v5 * v5)) + (float)(v4 * v4);
  if ( (float)(v7 - 1.0) < -0.00000011920929 || (float)(v7 - 1.0) > 0.00000011920929 )
  {
    if ( v7 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_QWORD *)a1 + 1) = 0LL;
    }
    else
    {
      v9 = 1.0 / sqrtf_0(v7);
      *(float *)a1 = v9 * *(float *)a2;
      *((float *)a1 + 1) = v9 * v6;
      *((float *)a1 + 2) = v9 * v5;
      *((float *)a1 + 3) = v9 * v4;
    }
  }
  else if ( a1 != a2 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  return a1;
}
