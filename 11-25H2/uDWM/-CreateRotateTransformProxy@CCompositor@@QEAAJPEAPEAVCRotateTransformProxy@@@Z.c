/*
 * XREFs of ?CreateRotateTransformProxy@CCompositor@@QEAAJPEAPEAVCRotateTransformProxy@@@Z @ 0x1800A9F14
 * Callers:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180036B70 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateRotateTransformProxy(__int64 this, CBaseTransformProxy **a2)
{
  return CCompositor::CreateProxy<CRotateTransformProxy>(this, a2);
}
