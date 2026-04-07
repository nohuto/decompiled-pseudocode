/*
 * XREFs of ?CreateAnimationProxy@CCompositor@@QEAAJPEAPEAVCAnimationProxy@@@Z @ 0x180084104
 * Callers:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800506C0 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateAnimationProxy(struct IDwmChannel **this, struct CAnimationProxy **a2)
{
  return CResourceProxy::Create<CAnimationProxy>(this[3]);
}
