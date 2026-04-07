/*
 * XREFs of ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x18002A110
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18003E4D0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x180029C10 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?_AreAllStoryboardsAbandoned@CAnimationScheduler@@AEAA_NXZ @ 0x18002A174 (-_AreAllStoryboardsAbandoned@CAnimationScheduler@@AEAA_NXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002A220 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::OnAnimationComplete(CAnimationScheduler *this, int a2)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
    CStoryboard::OnAnimationComplete((CStoryboard *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8 * i) + 16LL), a2);
  if ( CAnimationScheduler::_AreAllStoryboardsAbandoned(this) )
    CAnimationScheduler::_CleanupTransition(this);
  return 0LL;
}
