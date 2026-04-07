/*
 * XREFs of ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800D3050
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___ @ 0x1800D1A5C (CTransitionVisualController--ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___.c)
 *     ?StopTrackingWindowAndRestoreVisual@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800D2C64 (-StopTrackingWindowAndRestoreVisual@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x1800448E0 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180054DF8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_RestoreWindowVisual(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax

  v2 = 0;
  if ( *((_QWORD *)a2 + 55) )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
      *((HWND *)a2 + 5));
    v6 = CContainerVisual::RenderRecursive(*((CContainerVisual **)a2 + 55), v4, v5);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v6,
        0xBF6u,
        0LL);
    else
      CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)a2 + 55), 1);
  }
  return v2;
}
