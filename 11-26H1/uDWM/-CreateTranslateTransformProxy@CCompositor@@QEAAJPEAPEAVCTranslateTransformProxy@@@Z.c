/*
 * XREFs of ?CreateTranslateTransformProxy@CCompositor@@QEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x1800A800C
 * Callers:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18004F9A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateTranslateTransformProxy(
        struct IDwmChannel **this,
        struct CTranslateTransformProxy **a2)
{
  return CResourceProxy::Create<CTranslateTransformProxy>(this[3], a2);
}
