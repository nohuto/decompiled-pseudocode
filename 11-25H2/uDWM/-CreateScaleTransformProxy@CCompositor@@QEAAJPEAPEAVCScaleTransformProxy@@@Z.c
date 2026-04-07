/*
 * XREFs of ?CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x180036E18
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180036B70 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18004B4E8 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A3990 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateScaleTransformProxy(CCompositor *this, struct CScaleTransformProxy **a2)
{
  return CCompositor::CreateProxy<CScaleTransformProxy>(this, a2);
}
