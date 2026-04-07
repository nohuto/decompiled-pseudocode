/*
 * XREFs of ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x1800760F4
 * Callers:
 *     ?Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021E20 (-Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18004B4E8 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x180075E98 (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180075FAC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800BA6DC (-Initialize@CMagnifier@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateMatrixTransformProxy(__int64 this, CBaseTransformProxy **a2)
{
  return CCompositor::CreateProxy<CMatrixTransformProxy>(this, a2);
}
