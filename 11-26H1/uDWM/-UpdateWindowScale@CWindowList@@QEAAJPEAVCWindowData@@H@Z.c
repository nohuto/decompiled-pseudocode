/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180011000
 * Callers:
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010CF0 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180010FE8 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000B03C (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001032C (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010474 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x180011310 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x1800115C8 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180014300 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180017870 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180018DE8 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18006F294 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateRect@TransitionManager@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@4@W4ShellTransitionType@234@@Z @ 0x18008C2F4 (-UpdateRect@TransitionManager@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@4@W4Shell.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     floorf @ 0x18008EED0 (floorf.c)
 */

__int64 __fastcall CWindowList::UpdateWindowScale(struct CWindowData **this, struct CWindowData *a2, int a3)
{
  int v6; // r12d
  int v7; // esi
  int v8; // r14d
  float v9; // xmm7_4
  CWindowList *v10; // rcx
  struct CWindowData *v11; // rax
  int v13; // eax
  unsigned int v14; // esi
  CWindowList *v15; // rcx
  CTopLevelWindow *v16; // rcx
  int v17; // eax
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v19; // r9
  CTopLevelWindow3D *v20; // rcx
  int v21; // eax
  unsigned int v22; // esi
  int v23; // [rsp+20h] [rbp-88h]
  bool v24; // [rsp+30h] [rbp-78h] BYREF
  float v25[4]; // [rsp+38h] [rbp-70h] BYREF
  struct tagRECT v26; // [rsp+48h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v24 = 0;
  CWindowData::EstablishPixelAlignedScale(a2, &v24);
  v6 = 0;
  v7 = 0;
  if ( *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55) >= 0 )
    v7 = *((_DWORD *)a2 + 57) - *((_DWORD *)a2 + 55);
  v8 = 0;
  if ( *((_DWORD *)a2 + 58) - *((_DWORD *)a2 + 56) >= 0 )
    v8 = *((_DWORD *)a2 + 58) - *((_DWORD *)a2 + 56);
  v9 = *((float *)a2 + 83);
  if ( v9 != 1.0 )
  {
    v7 = (int)floorf((float)((float)v7 * v9) + 0.5);
    v8 = (int)floorf((float)((float)v8 * v9) + 0.5);
  }
  *((_DWORD *)a2 + 14) = v7 + *((_DWORD *)a2 + 12);
  v10 = (CWindowList *)(unsigned int)(v8 + *((_DWORD *)a2 + 13));
  *((_DWORD *)a2 + 15) = (_DWORD)v10;
  if ( *((_QWORD *)a2 + 55) && (v13 = CWindowData::OnWindowSizeUpdated(a2), v14 = v13, v13 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x108E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v13,
      v23);
    return v14;
  }
  else
  {
    if ( v24 || a3 )
    {
      CWindowList::OnClientMarginsChange(v10, a2);
      CWindowList::OnClientGlassChange(v15, a2);
      v16 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
      if ( v16 )
        CTopLevelWindow::OnWindowScaleUpdated(v16);
      v24 = 0;
      *(_QWORD *)&v26.left = *((_QWORD *)a2 + 6);
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
        *((HWND *)a2 + 5),
        (struct tagPOINT *)&v26);
      CAnimationScheduler::OnWindowPositionChange(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
        a2,
        *(struct tagPOINT *)&v26.left,
        &v24);
      if ( !v24 )
        CWindowList::OnPositionChange((CWindowList *)this, a2, 1);
    }
    v11 = this[87];
    if ( v11 == a2
      && (*((_BYTE *)v11 + 741) & 8) != 0
      && (v20 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56)) != 0LL
      && *((_DWORD *)v20 + 70) == 10
      && (v21 = CTopLevelWindow3D::StopAnimation(v20), v22 = v21, v21 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10B4,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v21,
        v23);
      return v22;
    }
    else
    {
      if ( *((_BYTE *)this + 688) && (*((_DWORD *)a2 + 186) & 0xFFF) == 0x5E )
      {
        try
        {
          CTopLevelWindow::GetActualWindowRect(*((CTopLevelWindow **)a2 + 55), &v26, 0, 1, 1);
          v25[0] = (float)v26.left;
          v25[1] = (float)v26.top;
          v17 = 0;
          if ( v26.right - v26.left >= 0 )
            v17 = v26.right - v26.left;
          v25[2] = (float)v17;
          if ( v26.bottom - v26.top >= 0 )
            v6 = v26.bottom - v26.top;
          v25[3] = (float)v6;
          Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
          winrt::Udwm::Transitions::TransitionManager::UpdateRect(Current, v25);
        }
        catch ( ... )
        {
          return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x10C8,
                                 (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                                 v19);
        }
      }
      return 0LL;
    }
  }
}
