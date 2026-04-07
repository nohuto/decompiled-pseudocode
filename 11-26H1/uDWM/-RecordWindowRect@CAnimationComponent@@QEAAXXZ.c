/*
 * XREFs of ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x1800755C0
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetOutsideMarginsWithDropShadow@CTopLevelWindow@@QEBA?AU_MARGINS@@XZ @ 0x18006A580 (-GetOutsideMarginsWithDropShadow@CTopLevelWindow@@QEBA-AU_MARGINS@@XZ.c)
 */

void __fastcall CAnimationComponent::RecordWindowRect(CAnimationComponent *this)
{
  struct CWindowData *WindowDataByHwnd; // rax
  CTopLevelWindow *v3; // rcx
  struct _MARGINS v4; // [rsp+20h] [rbp-18h] BYREF

  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                       *((HWND *)this + 2));
  if ( WindowDataByHwnd )
  {
    *(_OWORD *)((char *)this + 88) = *((_OWORD *)WindowDataByHwnd + 3);
    v3 = (CTopLevelWindow *)*((_QWORD *)WindowDataByHwnd + 55);
    if ( v3 )
      *(struct _MARGINS *)((char *)this + 120) = *CTopLevelWindow::GetOutsideMarginsWithDropShadow(v3, &v4);
  }
}
