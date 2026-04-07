/*
 * XREFs of ?Abandon@CStoryboard@@QEAAXXZ @ 0x18006DC98
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800243B0 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180027B04 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x1800298C8 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18002B534 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180050C10 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x1800516EC (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x1800698D0 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18006D8F4 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18006DA44 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x180082620 (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18008C1B0 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800A7744 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x1800C7C40 (-OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800C8558 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180027F34 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180096950 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A625C (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStoryboard::Abandon(__m128i *this)
{
  unsigned __int64 v2; // rax
  __m128i v3; // [rsp+30h] [rbp-18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( this[1].m128i_i32[2] != 4 )
  {
    CStoryboard::_NotifyStoryboardState((__int64)this, 2);
    CStoryboard::ScheduleStopAnimation((CStoryboard *)this);
    v2 = this[3].m128i_i64[0] - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v2 )
      v2 = _mm_srli_si128(this[3], 8).m128i_u64[0] - *(_QWORD *)GUID_NULL.Data4;
    if ( v2 )
    {
      v3 = this[3];
      CAnimationClockCoordinator::OnSetAnimationClockTime(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
        &v3,
        1LL);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
