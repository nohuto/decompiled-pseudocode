/*
 * XREFs of ?CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180081F80
 * Callers:
 *     ?SendSetOpacity@CVisual@@IEAAJN@Z @ 0x1800054B8 (-SendSetOpacity@CVisual@@IEAAJN@Z.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18004F9A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096180 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateEffectGroupProxy(struct IDwmChannel **this, struct CEffectGroupProxy **a2)
{
  return CResourceProxy::Create<CEffectGroupProxy>(this[3]);
}
