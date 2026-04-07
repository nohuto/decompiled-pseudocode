/*
 * XREFs of ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180058FFC
 * Callers:
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x1800299F4 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x1800448E0 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x180058F58 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800283D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x180059084 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x180059100 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800984B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CWindowPropertyTracker::_StopTrackingWindowByIndex(CWindowPropertyTracker *this, unsigned int a2)
{
  __int64 v3; // rsi
  struct CWindowData *WindowDataByHwnd; // rax
  CWindowPropertyTracker::CPropertyChangeRecord *v5; // rbx
  unsigned int v6; // edx

  v3 = a2;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                       **(HWND **)(*(_QWORD *)this + 8LL * a2));
  if ( WindowDataByHwnd )
    CTransitionVisualController::RestoreWindow(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
      WindowDataByHwnd,
      1);
  v5 = *(CWindowPropertyTracker::CPropertyChangeRecord **)(*(_QWORD *)this + 8 * v3);
  DynArray<CAnimationComponent *,0>::RemoveAt(this, (unsigned int)v3);
  if ( v5 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v5, v6);
}
