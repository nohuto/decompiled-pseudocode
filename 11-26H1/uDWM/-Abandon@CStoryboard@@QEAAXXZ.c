/*
 * XREFs of ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4
 * Callers:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002A1A4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18002A5A8 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180032004 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18003C8E4 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003CB38 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003D510 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18003D6E4 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18003E4D0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180069C28 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18007AD0C (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StopAnimationsOfOwnedWindows_::_2_::_lambda_1___ @ 0x18008B2EC (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StopAnimationsOfO.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18009A104 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x1800C1C40 (-OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800C2568 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180029C44 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180088F4C (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180098C68 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStoryboard::Abandon(CStoryboard *this)
{
  __int128 Buf1; // [rsp+20h] [rbp-18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)this + 6) != 4 )
  {
    CStoryboard::_NotifyStoryboardState((__int64)this, 2);
    CStoryboard::ScheduleStopAnimation(this);
    Buf1 = *((_OWORD *)this + 3);
    if ( memcmp_0(&Buf1, &GUID_NULL, 0x10uLL) )
    {
      Buf1 = *((_OWORD *)this + 3);
      CAnimationClockCoordinator::OnSetAnimationClockTime(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
        &Buf1,
        1LL);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
