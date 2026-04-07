/*
 * XREFs of ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180018CD8
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017040 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180018D00 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x180075E98 (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180075FAC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800BA6DC (-Initialize@CMagnifier@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMatrixTransformProxy::Update(CMatrixTransformProxy *this, const struct D2D_MATRIX_3X2_F *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct D2D_MATRIX_3X2_F *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                                  + 16LL)
                                                                                    + 624LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
