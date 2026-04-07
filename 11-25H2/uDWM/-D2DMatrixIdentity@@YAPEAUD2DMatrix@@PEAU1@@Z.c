/*
 * XREFs of ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x180018404
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017040 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x180018108 (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x1800181F0 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x1800701EC (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?GetMirrorTransform@CVisual@@MEAAXPEAUD2DMatrix@@@Z @ 0x180081050 (-GetMirrorTransform@CVisual@@MEAAXPEAUD2DMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

struct D2DMatrix *__fastcall D2DMatrixIdentity(struct D2DMatrix *a1)
{
  *(_QWORD *)((char *)a1 + 52) = 0LL;
  *(_QWORD *)((char *)a1 + 44) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *(_QWORD *)((char *)a1 + 12) = 0LL;
  *(_QWORD *)((char *)a1 + 4) = 0LL;
  *((_DWORD *)a1 + 15) = 1065353216;
  *((_DWORD *)a1 + 10) = 1065353216;
  *((_DWORD *)a1 + 5) = 1065353216;
  *(_DWORD *)a1 = 1065353216;
  return a1;
}
