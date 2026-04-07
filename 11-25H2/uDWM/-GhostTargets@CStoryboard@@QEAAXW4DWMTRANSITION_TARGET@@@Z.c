/*
 * XREFs of ?GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z @ 0x1800C7B10
 * Callers:
 *     ?GhostTransitionTargets@CAnimationScheduler@@QEAAXHW4DWMTRANSITION_TARGET@@@Z @ 0x1800A8608 (-GhostTransitionTargets@CAnimationScheduler@@QEAAXHW4DWMTRANSITION_TARGET@@@Z.c)
 * Callees:
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800A64F0 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

void __fastcall CStoryboard::GhostTargets(__int64 a1)
{
  __int64 i; // rbx
  CAnimationComponent *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 120); i = (unsigned int)(i + 1) )
  {
    v3 = *(CAnimationComponent **)(*(_QWORD *)(a1 + 96) + 8 * i);
    if ( (*((_DWORD *)v3 + 6) & 0xFFF) == 0x28 )
      CAnimationComponent::SetGhost(v3);
  }
}
