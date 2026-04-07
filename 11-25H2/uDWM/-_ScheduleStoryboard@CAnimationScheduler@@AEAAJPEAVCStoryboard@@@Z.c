/*
 * XREFs of ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800243B0
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18002B534 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18006D8F4 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18002445C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002541C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?ScheduleToRun@CStoryboard@@QEAAXXZ @ 0x18002AFDC (-ScheduleToRun@CStoryboard@@QEAAXXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18006DC98 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboard(CAnimationScheduler *this, struct CStoryboard *a2)
{
  int v3; // ebx
  unsigned int v4; // eax

  v3 = CTransitionVisualController::MorphForStoryboard(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
         a2);
  if ( v3 < 0 )
  {
    v4 = 964;
  }
  else
  {
    v3 = CTransitionVisualController::RemoveTargetsForStoryboard(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
           a2,
           0,
           0x10000000u);
    if ( v3 >= 0 )
    {
      CStoryboard::ScheduleToRun(a2);
      return (unsigned int)v3;
    }
    v4 = 967;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9C80, 1LL, v3, v4, 0LL);
  CStoryboard::Abandon(a2);
  return (unsigned int)v3;
}
