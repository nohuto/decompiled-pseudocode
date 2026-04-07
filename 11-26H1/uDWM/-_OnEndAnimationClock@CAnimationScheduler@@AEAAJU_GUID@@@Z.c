/*
 * XREFs of ?_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180069D8C
 * Callers:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180069C28 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003D510 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18003EAA4 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 */

__int64 __fastcall CAnimationScheduler::_OnEndAnimationClock(CAnimationScheduler *this, struct _GUID *Buf1)
{
  unsigned int v4; // ebx
  struct _GUID v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = -2147024809;
  if ( memcmp_0(Buf1, &GUID_NULL, 0x10uLL) )
  {
    v6 = *Buf1;
    v4 = CAnimationClockCoordinator::OnEndAnimationClock(
           *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 21),
           &v6);
    if ( v4 == -2147019873 )
    {
      v6 = *Buf1;
      return (unsigned int)CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(this, &v6);
    }
  }
  return v4;
}
