/*
 * XREFs of ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x1800448E0
 * Callers:
 *     ?OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z @ 0x18001B7E8 (-OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800D3050 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180044A78 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180058FFC (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowPropertyTracker::StopTrackingWindowImmediately(CWindowPropertyTracker *this, HWND a2)
{
  int Record; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
    CWindowPropertyTracker::_StopTrackingWindowByIndex(this, Record);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
