/*
 * XREFs of ?CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x1800373D0
 * Callers:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180036B70 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180037280 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A3990 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateEffectGroupProxy(__int64 this, CResourceProxy **a2)
{
  return CCompositor::CreateProxy<CEffectGroupProxy>(this, a2);
}
