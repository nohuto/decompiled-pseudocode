/*
 * XREFs of ?AddRef@CCompositor@@UEAAKXZ @ 0x18008C070
 * Callers:
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18008E550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::AddRef(CCompositor *this)
{
  return CMILRefCountBase::AddRef((CCompositor *)((char *)this + 8));
}
