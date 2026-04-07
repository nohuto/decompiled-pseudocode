/*
 * XREFs of ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x1800188B8
 * Callers:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x1800181F0 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z @ 0x180018B08 (-CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A4CCC (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DMatrix *__fastcall D2DMatrixScaling(struct D2DMatrix *a1, float a2, float a3, float a4)
{
  struct D2DMatrix *result; // rax

  *(float *)a1 = a2;
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *(_QWORD *)((char *)a1 + 12) = 0LL;
  *(_QWORD *)((char *)a1 + 4) = 0LL;
  result = a1;
  *((float *)a1 + 5) = a3;
  *((float *)a1 + 10) = a4;
  *((_DWORD *)a1 + 15) = 1065353216;
  return result;
}
