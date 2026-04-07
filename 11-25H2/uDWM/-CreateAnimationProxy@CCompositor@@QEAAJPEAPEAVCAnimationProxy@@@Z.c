/*
 * XREFs of ?CreateAnimationProxy@CCompositor@@QEAAJPEAPEAVCAnimationProxy@@@Z @ 0x18009A5C4
 * Callers:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x180035C94 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateAnimationProxy(__int64 this, CResourceProxy **a2)
{
  return CCompositor::CreateProxy<CAnimationProxy>(this, a2);
}
