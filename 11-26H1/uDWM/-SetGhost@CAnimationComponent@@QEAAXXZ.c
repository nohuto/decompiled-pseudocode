/*
 * XREFs of ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x180098E4C
 * Callers:
 *     ?_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ @ 0x18002B8D4 (-_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x180098DE0 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 *     ?GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z @ 0x1800C1B10 (-GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18006DB08 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 */

void __fastcall CAnimationComponent::SetGhost(CAnimationComponent *this)
{
  __int64 v2; // rax

  if ( !*((_BYTE *)this + 65) )
  {
    CAnimationComponent::_LogEvent((__int64)this, 3);
    v2 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 65) = 1;
    *(_BYTE *)(v2 + 906) = 1;
  }
}
