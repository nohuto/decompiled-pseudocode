/*
 * XREFs of ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180060C40
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180045488 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180060AFC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096EB8 (-UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z @ 0x1800A5834 (-_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800B9FA4 (-Initialize@CMagnifier@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMatrixTransformProxy::Update(CMatrixTransformProxy *this, const struct D2D_MATRIX_3X2_F *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct D2D_MATRIX_3X2_F *))(**((_QWORD **)this + 2) + 472LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2);
}
