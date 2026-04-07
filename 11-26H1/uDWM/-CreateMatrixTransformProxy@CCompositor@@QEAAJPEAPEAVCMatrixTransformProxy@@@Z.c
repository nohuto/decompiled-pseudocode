/*
 * XREFs of ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18008437C
 * Callers:
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180060AFC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800836E0 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800960C4 (-Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z @ 0x1800A5834 (-_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800B9FA4 (-Initialize@CMagnifier@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateMatrixTransformProxy(
        struct IDwmChannel **this,
        struct CMatrixTransformProxy **a2)
{
  return CResourceProxy::Create<CMatrixTransformProxy>(this[3]);
}
