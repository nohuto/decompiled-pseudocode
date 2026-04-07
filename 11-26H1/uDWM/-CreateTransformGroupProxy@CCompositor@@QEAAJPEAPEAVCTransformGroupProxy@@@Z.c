/*
 * XREFs of ?CreateTransformGroupProxy@CCompositor@@QEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x1800A7FFC
 * Callers:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18004F9A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateTransformGroupProxy(struct IDwmChannel **this, struct CTransformGroupProxy **a2)
{
  return CResourceProxy::Create<CTransformGroupProxy>(this[3], a2);
}
