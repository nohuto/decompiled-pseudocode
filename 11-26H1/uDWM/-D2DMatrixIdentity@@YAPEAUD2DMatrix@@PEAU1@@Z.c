/*
 * XREFs of ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x1800228C8
 * Callers:
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x180022160 (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180022260 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180060E50 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?GetMirrorTransform@CVisual@@MEAAXPEAUD2DMatrix@@@Z @ 0x180071E00 (-GetMirrorTransform@CVisual@@MEAAXPEAUD2DMatrix@@@Z.c)
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
