/*
 * XREFs of ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x18001D650
 * Callers:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180013DA4 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x18001D070 (-UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18001D6A4 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ @ 0x18001E3CC (-CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001E430 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180071C90 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
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
