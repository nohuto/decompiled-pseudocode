/*
 * XREFs of ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180031018
 * Callers:
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180030F10 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 * Callees:
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x1800312F4 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800324C8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032A64 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18003D494 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?GetOutsideMarginsWithDropShadow@CTopLevelWindow@@QEBA?AU_MARGINS@@XZ @ 0x18006A580 (-GetOutsideMarginsWithDropShadow@CTopLevelWindow@@QEBA-AU_MARGINS@@XZ.c)
 *     McTemplateU0pd_EtwEventWriteTransfer @ 0x18009A2D4 (McTemplateU0pd_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowTransitionTargetChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const RECT *a4,
        RECT *lprcSrc,
        RECT *a6,
        RECT *a7,
        RECT *a8)
{
  CTopLevelWindow *v12; // rcx
  CTopLevelWindow *v13; // rcx
  CTopLevelWindow *v14; // rcx
  CTopLevelWindow *v15; // rcx
  __int64 v16; // rdx
  __int64 i; // rdi
  _DWORD *v19; // rcx
  HWND v20; // rdx
  struct _MARGINS v21; // [rsp+20h] [rbp-10h] BYREF
  struct CTransitionWindowSnapshot *v22; // [rsp+60h] [rbp+30h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0pd_EtwEventWriteTransfer(a1, &UdwmSystemAnimation_WindowTarget, *(_QWORD *)(a2 + 40), a3);
  CopyRect((LPRECT)(a2 + 748), a4);
  CopyRect((LPRECT)(a2 + 764), lprcSrc);
  CopyRect((LPRECT)(a2 + 780), a6);
  CopyRect((LPRECT)(a2 + 796), a7);
  CopyRect((LPRECT)(a2 + 812), a8);
  if ( a2 )
  {
    v12 = *(CTopLevelWindow **)(a2 + 440);
    if ( v12 )
    {
      CTopLevelWindow::GetOutsideMarginsWithDropShadow(v12, &v21);
      *(_DWORD *)(a2 + 756) -= v21.cxRightWidth;
      *(_DWORD *)(a2 + 752) += v21.cyTopHeight;
      *(_DWORD *)(a2 + 748) += v21.cxLeftWidth;
      *(_DWORD *)(a2 + 760) -= v21.cyBottomHeight;
    }
    v13 = *(CTopLevelWindow **)(a2 + 440);
    if ( v13 )
    {
      CTopLevelWindow::GetOutsideMarginsWithDropShadow(v13, &v21);
      *(_DWORD *)(a2 + 772) -= v21.cxRightWidth;
      *(_DWORD *)(a2 + 768) += v21.cyTopHeight;
      *(_DWORD *)(a2 + 764) += v21.cxLeftWidth;
      *(_DWORD *)(a2 + 776) -= v21.cyBottomHeight;
    }
    v14 = *(CTopLevelWindow **)(a2 + 440);
    if ( v14 )
    {
      CTopLevelWindow::GetOutsideMarginsWithDropShadow(v14, &v21);
      *(_DWORD *)(a2 + 788) -= v21.cxRightWidth;
      *(_DWORD *)(a2 + 784) += v21.cyTopHeight;
      *(_DWORD *)(a2 + 780) += v21.cxLeftWidth;
      *(_DWORD *)(a2 + 792) -= v21.cyBottomHeight;
    }
    v15 = *(CTopLevelWindow **)(a2 + 440);
    if ( v15 )
    {
      CTopLevelWindow::GetOutsideMarginsWithDropShadow(v15, &v21);
      *(_DWORD *)(a2 + 804) -= v21.cxRightWidth;
      *(_DWORD *)(a2 + 800) += v21.cyTopHeight;
      *(_DWORD *)(a2 + 796) += v21.cxLeftWidth;
      *(_DWORD *)(a2 + 808) -= v21.cyBottomHeight;
    }
  }
  v16 = a3 | *(_DWORD *)(a2 + 744) & 0x2000000;
  *(_DWORD *)(a2 + 744) = v16;
  if ( *(_QWORD *)(a2 + 440) )
  {
    if ( (v16 & 0x80000) == 0 && (v16 & 0x20000000) != 0 )
    {
      if ( (unsigned __int8)CAnimationScheduler::ShouldSnapshot(
                              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23),
                              v16,
                              0LL) )
      {
        if ( CStoryboard::ShouldAnimateShowWindow((const struct CWindowData *)a2) )
        {
          CTransitionVisualController::EnsureSnapshot(
            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
            (struct CWindowData *)a2);
          *(_DWORD *)(a2 + 744) |= 0x4000000u;
          v20 = *(HWND *)(a2 + 40);
          v22 = 0LL;
          if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                      v20,
                      &v22) >= 0 )
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 26) + 32LL) + 744LL) = *(_DWORD *)(a2 + 744);
        }
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v19 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8 * i);
    if ( !v19[6] )
      (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v19 + 104LL))(v19, a2, a3);
  }
  return 0LL;
}
