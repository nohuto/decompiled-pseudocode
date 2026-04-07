/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18000F7E8 (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180010FE8 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180014300 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x1800175C0 (-OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@Z @ 0x180017690 (-OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@.c)
 *     ?OnWindowMove@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z @ 0x18001780C (-OnWindowMove@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180017870 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x180018050 (-OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x1800182B0 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180018DA4 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180018DE8 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndClientRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180018E2C (-GetWindowEndClientRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetWindowEndContentRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180018E74 (-GetWindowEndContentRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180019A40 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z @ 0x180059138 (-OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18005E048 (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180075974 (-WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x180079AA8 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsReadyForMaximizeSnapPostTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x18008819C (-IsReadyForMaximizeSnapPostTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18008CB04 (-WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800DFA18 (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x1800E4260 (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  struct IDwmWindow *v2; // rsi
  CWindowList *v3; // r13
  unsigned int v4; // r14d
  struct CWindowData *v5; // rdi
  _DWORD *v6; // r12
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  LONG cx; // ecx
  LONG cy; // edx
  char v13; // r12
  HWND v14; // rax
  const char *v15; // r9
  int v16; // eax
  unsigned int v17; // r12d
  int updated; // eax
  CWindowList *v20; // rcx
  CTopLevelWindow3D *v21; // rcx
  winrt::Udwm::Transitions::TransitionManager *v22; // rax
  const char *v23; // r9
  char v24; // al
  winrt::Udwm::Transitions::TransitionManager *v25; // rax
  CAcrylicSheet *v26; // rsi
  int v27; // [rsp+20h] [rbp-E8h]
  unsigned int v28; // [rsp+20h] [rbp-E8h]
  bool v29; // [rsp+30h] [rbp-D8h] BYREF
  char v30; // [rsp+31h] [rbp-D7h]
  int v31; // [rsp+34h] [rbp-D4h]
  int dy; // [rsp+38h] [rbp-D0h]
  struct tagSIZE Current; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-C0h]
  struct CWindowData *v35; // [rsp+50h] [rbp-B8h] BYREF
  struct tagRECT v36; // [rsp+58h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v38; // [rsp+70h] [rbp-98h] BYREF
  __int128 v39; // [rsp+80h] [rbp-88h] BYREF
  RECT rc1; // [rsp+90h] [rbp-78h] BYREF
  RECT v41; // [rsp+A0h] [rbp-68h] BYREF
  RECT rc2; // [rsp+B0h] [rbp-58h] BYREF
  RECT v43; // [rsp+C0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v2 = a2;
  v3 = this;
  *(_QWORD *)&v36.left = this;
  *(_QWORD *)&v38.left = a2;
  v37 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v34 = 0;
  v35 = 0LL;
  CWindowList::GetSyncedWindowData(v3, v2, 1, &v35);
  v5 = v35;
  if ( !v35 )
    goto LABEL_30;
  v29 = 0;
  v39 = 0LL;
  (*(void (__fastcall **)(struct IDwmWindow *, __int128 *))(*(_QWORD *)v2 + 80LL))(v2, &v39);
  v6 = (_DWORD *)((char *)v5 + 220);
  v31 = v39 - *((_DWORD *)v5 + 55);
  dy = DWORD1(v39) - *((_DWORD *)v5 + 56);
  Current = 0LL;
  if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
              *((HWND *)v5 + 5),
              (struct tagPOINT *)&Current) >= 0 )
  {
    v7 = v39 - Current.cx;
    v31 = v39 - Current.cx;
    v8 = DWORD1(v39) - Current.cy;
    dy = DWORD1(v39) - Current.cy;
  }
  else
  {
    v7 = v31;
    v8 = dy;
  }
  if ( v7 || v8 )
  {
    Current = (struct tagSIZE)v39;
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      v5,
      (struct tagPOINT)v39,
      &v29);
    if ( !v29 )
    {
      OffsetRect((LPRECT)((char *)v5 + 220), v31, dy);
      CTransitionVisualController::OnWindowMove(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        v5);
      CWindowList::OnPositionChange(v3, v5, 1);
    }
  }
  v9 = 0;
  if ( DWORD2(v39) - (int)v39 >= 0 )
    v9 = DWORD2(v39) - v39;
  dy = v9;
  v10 = 0;
  if ( HIDWORD(v39) - DWORD1(v39) >= 0 )
    v10 = HIDWORD(v39) - DWORD1(v39);
  v31 = v10;
  Current = 0LL;
  if ( (int)CWindowPropertyTracker::GetWindowEndSize(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
              *((HWND *)v5 + 5),
              &Current) >= 0 )
  {
    cy = Current.cy;
    cx = Current.cx;
  }
  else
  {
    cx = 0;
    if ( *((_DWORD *)v5 + 57) - *v6 >= 0 )
      cx = *((_DWORD *)v5 + 57) - *v6;
    cy = 0;
    if ( *((_DWORD *)v5 + 58) - *((_DWORD *)v5 + 56) >= 0 )
      cy = *((_DWORD *)v5 + 58) - *((_DWORD *)v5 + 56);
  }
  if ( dy == cx && v31 == cy )
  {
    v13 = 0;
    v30 = 0;
  }
  else
  {
    v30 = 1;
    CAnimationScheduler::OnWindowSizeChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
      v5,
      (struct tagSIZE)((unsigned int)dy | ((unsigned __int64)(unsigned int)v31 << 32)),
      &v29);
    if ( !v29 )
    {
      *((_DWORD *)v5 + 57) = *v6 + dy;
      *((_DWORD *)v5 + 58) = *((_DWORD *)v5 + 56) + v31;
      updated = CWindowList::OnSizeChange(v3, v5);
      v4 = updated;
      v34 = updated;
      if ( updated < 0 )
      {
        v28 = 3683;
        goto LABEL_36;
      }
    }
    v13 = v30;
  }
  try
  {
    Current = (struct tagSIZE)winrt::Udwm::Transitions::TransitionManager::GetCurrent();
    v14 = (HWND)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v2 + 24LL))(v2);
    winrt::Udwm::Transitions::TransitionManager::OnWindowMoveSizeChanged(
      *(winrt::Udwm::Transitions::TransitionManager **)&Current,
      v14);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE6A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v15);
    v4 = v34;
    v5 = v35;
    v2 = *(struct IDwmWindow **)&v38.left;
    v3 = *(CWindowList **)&v36.left;
    v13 = v30;
  }
  if ( *((_BYTE *)v3 + 673)
    && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v2 + 24LL))(v2) == *((_QWORD *)v3 + 85) )
  {
    *((_BYTE *)v3 + 673) = 0;
    *((_QWORD *)v3 + 85) = 0LL;
    try
    {
      if ( v13
        && (v21 = (CTopLevelWindow3D *)*((_QWORD *)v5 + 56)) != 0LL
        && CTopLevelWindow3D::IsReadyForMaximizeSnapPostTransition(v21) )
      {
        v22 = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
        winrt::Udwm::Transitions::TransitionManager::WindowMaximizeSnapPostTransition(v22);
      }
      else
      {
        v25 = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
        winrt::Udwm::Transitions::TransitionManager::WindowMaximizeSnapCancel(v25);
      }
    }
    catch ( ... )
    {
      v34 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0xE8A,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
              v23);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v37);
      return v34;
    }
  }
  if ( !v29 )
    CWindowData::CheckOwnedWindowEligibilityForOwner(v5);
  v16 = CWindowList::ReevaluateAutoParenting(v3, v5, 0);
  v17 = v16;
  if ( v16 >= 0 )
  {
    rc2 = 0LL;
    v43 = 0LL;
    if ( (int)CWindowPropertyTracker::GetWindowEndClientRect(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
                *((HWND *)v5 + 5),
                &rc2) < 0 )
      rc2 = *(RECT *)((char *)v5 + 236);
    if ( (int)CWindowPropertyTracker::GetWindowEndContentRect(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
                *((HWND *)v5 + 5),
                &v43) < 0 )
      v43 = *(RECT *)((char *)v5 + 252);
    rc1 = 0LL;
    v41 = 0LL;
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v2 + 88LL))(v2, &rc1);
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v2 + 96LL))(v2, &v41);
    if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v41, &v43) )
    {
      CAnimationScheduler::OnWindowClientContentRectChange(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
        v5,
        &rc1,
        &v41,
        &v29);
      if ( !v29 )
      {
        *(RECT *)((char *)v5 + 236) = rc1;
        *(RECT *)((char *)v5 + 252) = v41;
        CWindowList::OnContentBoundsChange(v20, v5);
      }
    }
    if ( !*((_QWORD *)v5 + 55) || !*((_QWORD *)v3 + 67) || *((struct CWindowData **)v3 + 87) != v5 )
      goto LABEL_30;
    v24 = *((_BYTE *)v5 + 741);
    if ( (v24 & 0x20) != 0 )
    {
      if ( (v24 & 0x40) != 0 )
      {
        updated = CWindowList::RunAcrylicSheetEndArrangementAnimation(v3);
        v4 = updated;
        if ( updated < 0 )
        {
          v28 = 3789;
          goto LABEL_36;
        }
      }
LABEL_48:
      if ( (*((_BYTE *)v5 + 741) & 8) != 0 )
        CTopLevelWindow::OnIsInWindowMove(*((CTopLevelWindow **)v5 + 55), 1, (const struct tagRECT *)v5 + 3);
      goto LABEL_30;
    }
    if ( (v24 & 0x10) != 0 )
    {
      *((_BYTE *)v5 + 741) = v24 & 0xEF;
      CWindowList::ApplyWindowResizeStateTransition(v3);
    }
    v26 = (CAcrylicSheet *)*((_QWORD *)v3 + 67);
    if ( !v26 )
      goto LABEL_48;
    v36 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v38, v5);
    updated = CAcrylicSheet::UpdateRect(v26, &v36);
    v4 = updated;
    if ( updated >= 0 )
      goto LABEL_48;
    v28 = 3779;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v28, 0LL);
LABEL_30:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE94,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v16,
    v27);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v17;
}
