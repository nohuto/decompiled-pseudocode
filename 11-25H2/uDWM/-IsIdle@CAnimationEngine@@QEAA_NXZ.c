/*
 * XREFs of ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800091B0
 * Callers:
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x180008B30 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 *     ?CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ @ 0x180009160 (-CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x1800092C0 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001579C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180016B20 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18006D7A4 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAnimationEngine::IsIdle(CAnimationEngine *this)
{
  bool v2; // bl

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = !*((_DWORD *)this + 16) || !*((_BYTE *)this + 120);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v2;
}
