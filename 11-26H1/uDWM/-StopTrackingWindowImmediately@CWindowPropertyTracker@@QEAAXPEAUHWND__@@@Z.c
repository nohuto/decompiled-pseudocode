/*
 * XREFs of ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x180018470
 * Callers:
 *     ?OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z @ 0x180019D3C (-OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800D01F4 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180018EC0 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18003D7C0 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
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
