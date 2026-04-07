/*
 * XREFs of ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180070BE4
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18003ADE0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

void __fastcall CTransitionVisualController::_StopAnimations(CTransitionVisualController *this, HWND *a2)
{
  struct CWindowData *WindowDataByHwnd; // rbx
  CTopLevelWindow3D *v3; // rcx
  CTransitionVisualController *v4; // rcx

  WindowDataByHwnd = (struct CWindowData *)a2;
  if ( !a2[56] && !a2[3] )
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                         a2[5]);
  if ( WindowDataByHwnd )
  {
    v3 = (CTopLevelWindow3D *)*((_QWORD *)WindowDataByHwnd + 56);
    if ( v3 )
    {
      CTopLevelWindow3D::StopAnimation(v3);
      v4 = (CTransitionVisualController *)*((unsigned int *)WindowDataByHwnd + 186);
      if ( (*((_DWORD *)WindowDataByHwnd + 186) & 0x30000000) == 0x30000000 || ((unsigned int)v4 & 0x100000) != 0 )
        CTransitionVisualController::_StopAnimationsOfOwnedWindows(v4, WindowDataByHwnd);
    }
  }
}
