/*
 * XREFs of ?D2DMatrixRotationYawPitchRoll@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x180017C10
 * Callers:
 *     ?CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z @ 0x180018B08 (-CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A4CCC (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x180017974 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x180017ACC (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 */

struct D2DMatrix *__fastcall D2DMatrixRotationYawPitchRoll(struct D2DMatrix *a1, float a2, float a3, float a4)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)v6, a2, a3, a4);
  D2DMatrixRotationQuaternion(a1, (const struct D2DQuaternion *)v6);
  return a1;
}
