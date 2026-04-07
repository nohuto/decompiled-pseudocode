/*
 * XREFs of ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800A64F0
 * Callers:
 *     ?_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ @ 0x18002AA5C (-_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800A6484 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 *     ?GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z @ 0x1800C7B10 (-GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z.c)
 * Callees:
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18006B8F8 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 */

void __fastcall CAnimationComponent::SetGhost(CAnimationComponent *this)
{
  __int64 v2; // rax

  if ( !*((_BYTE *)this + 65) )
  {
    CAnimationComponent::_LogEvent((__int64)this, 3);
    v2 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 65) = 1;
    *(_BYTE *)(v2 + 922) = 1;
  }
}
