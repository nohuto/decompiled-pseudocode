/*
 * XREFs of ?CreateTranslateTransformProxy@CCompositor@@QEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x1800A9F38
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180014634 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180036B70 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateTranslateTransformProxy(__int64 this, CBaseTransformProxy **a2)
{
  return CCompositor::CreateProxy<CTranslateTransformProxy>(this, a2);
}
