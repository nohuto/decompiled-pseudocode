/*
 * XREFs of ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18002A2D0
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002A220 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x18009A068 (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ??1CWindowPropertyTracker@@QEAA@XZ @ 0x18009A0E0 (--1CWindowPropertyTracker@@QEAA@XZ.c)
 * Callees:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18003D7C0 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowPropertyTracker::StopTrackingAllWindows(CWindowPropertyTracker *this)
{
  int v2; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  while ( 1 )
  {
    v2 = *((_DWORD *)this + 6);
    if ( !v2 )
      break;
    CWindowPropertyTracker::_StopTrackingWindowByIndex(this, v2 - 1);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
