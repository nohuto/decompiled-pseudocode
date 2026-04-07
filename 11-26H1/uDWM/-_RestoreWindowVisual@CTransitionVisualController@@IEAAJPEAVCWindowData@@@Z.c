/*
 * XREFs of ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800D01F4
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::StopTrackingWindowAndRestoreVisual_::_2_::_lambda_1___ @ 0x1800CE16C (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--StopTrackingWindow.c)
 *     ?StopTrackingWindowAndRestoreVisual@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800CFDB8 (-StopTrackingWindowAndRestoreVisual@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x180018470 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18003323C (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::_RestoreWindowVisual(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  if ( *((_QWORD *)a2 + 55) )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
      *((HWND *)a2 + 5));
    CContainerVisual::RenderRecursive(*((CContainerVisual **)a2 + 55));
    CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)a2 + 55), 1);
  }
  return 0LL;
}
