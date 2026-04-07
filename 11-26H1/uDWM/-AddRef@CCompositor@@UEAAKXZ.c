/*
 * XREFs of ?AddRef@CCompositor@@UEAAKXZ @ 0x18007AA10
 * Callers:
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18007B550 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::AddRef(CCompositor *this)
{
  return CBaseObject::AddRef((CCompositor *)((char *)this + 8));
}
