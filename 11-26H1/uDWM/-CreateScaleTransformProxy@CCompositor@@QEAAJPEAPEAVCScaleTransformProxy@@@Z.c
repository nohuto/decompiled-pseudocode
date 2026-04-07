/*
 * XREFs of ?CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x180081AE8
 * Callers:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18004F9A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateScaleTransformProxy(struct IDwmChannel **this, struct CScaleTransformProxy **a2)
{
  return CResourceProxy::Create<CScaleTransformProxy>(this[3]);
}
