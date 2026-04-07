/*
 * XREFs of ?CreateRotateTransformProxy@CCompositor@@QEAAJPEAPEAVCRotateTransformProxy@@@Z @ 0x1800A7FDC
 * Callers:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18004F9A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateRotateTransformProxy(
        struct IDwmChannel **this,
        struct CRotateTransformProxy **a2)
{
  return CResourceProxy::Create<CRotateTransformProxy>(this[3], a2);
}
