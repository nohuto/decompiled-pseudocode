/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180043D08
 * Callers:
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180019974 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E6060 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000A050 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019C40 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800248D0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18002A3C0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x180043FF0 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180044248 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800443C4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800445B4 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x1800446FC (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18004499C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateRect@TransitionManager@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@4@W4ShellTransitionType@234@@Z @ 0x180098C18 (-UpdateRect@TransitionManager@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@4@W4Shell.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     floor @ 0x18009B6B8 (floor.c)
 */

__int64 __fastcall CWindowList::UpdateWindowScale(struct CWindowData **this, struct CWindowData *a2, int a3)
{
  int v6; // edi
  int v7; // esi
  int v8; // r15d
  float v9; // xmm7_4
  CWindowList *v10; // rcx
  struct CWindowData *v11; // rax
  int v13; // esi
  __int64 v14; // rdx
  CWindowList *v15; // rcx
  CTopLevelWindow *v16; // rcx
  const struct std::nothrow_t *v17; // rdx
  int v18; // eax
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v20; // r9
  CTopLevelWindow3D *v21; // rcx
  int v22; // [rsp+20h] [rbp-78h]
  bool v23; // [rsp+30h] [rbp-68h] BYREF
  float v24[4]; // [rsp+38h] [rbp-60h] BYREF
  struct tagRECT v25; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v6 = 0;
  v23 = 0;
  CWindowData::EstablishPixelAlignedScale(a2, &v23);
  v7 = 0;
  if ( *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55) >= 0 )
    v7 = *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55);
  v8 = 0;
  if ( *((_DWORD *)a2 + 58) - *((_DWORD *)a2 + 56) >= 0 )
    v8 = *((_DWORD *)a2 + 58) - *((_DWORD *)a2 + 56);
  v9 = *((float *)a2 + 83);
  if ( v9 != 1.0 )
  {
    v7 = (int)floor((float)((float)v7 * v9) + 0.5);
    v8 = (int)floor((float)((float)v8 * v9) + 0.5);
  }
  *((_DWORD *)a2 + 14) = v7 + *((_DWORD *)a2 + 12);
  v10 = (CWindowList *)(unsigned int)(v8 + *((_DWORD *)a2 + 13));
  *((_DWORD *)a2 + 15) = (_DWORD)v10;
  if ( *((_QWORD *)a2 + 55) )
  {
    v13 = CWindowData::OnWindowSizeUpdated(a2);
    if ( v13 < 0 )
    {
      v14 = 3959LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v13,
        v22);
      return (unsigned int)v13;
    }
  }
  if ( v23 || a3 )
  {
    CWindowList::OnClientMarginsChange(v10, a2);
    CWindowList::OnClientGlassChange(v15, a2);
    v16 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    if ( v16 )
      CTopLevelWindow::OnWindowScaleUpdated(v16);
    v23 = 0;
    *(_QWORD *)&v25.left = *((_QWORD *)a2 + 6);
    CWindowPropertyTracker::GetWindowEndPosition(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
      *((HWND *)a2 + 5),
      (struct tagPOINT *)&v25);
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      a2,
      *(struct tagPOINT *)&v25.left,
      &v23);
    if ( !v23 )
      CWindowList::OnPositionChange((CWindowList *)this, a2, 1);
  }
  v11 = this[87];
  if ( v11 == a2 && (*((_BYTE *)v11 + 677) & 0x10) != 0 )
  {
    v21 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
    if ( v21 )
    {
      if ( *((_DWORD *)v21 + 84) == 10 )
      {
        v13 = CTopLevelWindow3D::StopAnimation(v21);
        if ( v13 < 0 )
        {
          v14 = 3997LL;
          goto LABEL_15;
        }
      }
    }
  }
  if ( *((_BYTE *)this + 688) && (*((_DWORD *)a2 + 170) & 0xFFF) == 0x5E )
  {
    try
    {
      CTopLevelWindow::GetActualWindowRect(*((CTopLevelWindow **)a2 + 55), &v25, 0, 1, 1);
      v18 = 0;
      if ( v25.right - v25.left >= 0 )
        v18 = v25.right - v25.left;
      if ( v25.bottom - v25.top >= 0 )
        v6 = v25.bottom - v25.top;
      v24[0] = (float)v25.left;
      v24[1] = (float)v25.top;
      v24[2] = (float)v18;
      v24[3] = (float)v6;
      Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent((unsigned int)(v25.right - v25.left), v17);
      winrt::Udwm::Transitions::TransitionManager::UpdateRect(Current, v24);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xFB1,
                             (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                             v20);
    }
  }
  return 0LL;
}
