/*
 * XREFs of ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805FD0D8
 * Callers:
 *     ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1805FBE40 (ApplicationFlyoutView--Hide$_ResumeCoro$1.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805FC8B0 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C1740 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetAnimationClippingRect@ApplicationFlyoutView@@AEAA?AUtagRECT@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x1805FBC1C (-GetAnimationClippingRect@ApplicationFlyoutView@@AEAA-AUtagRECT@@AEBURect@Foundation@Windows@win.c)
 *     ?GetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@XZ @ 0x1805FBDB0 (-GetRectAndTaskbarLocation@ApplicationFlyoutView@@AEAA-AU-$pair@URect@Foundation@Windows@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ApplicationFlyoutView::TryShowHideWindow(ApplicationFlyoutView *this, HWND hWnd, unsigned __int8 a3)
{
  int v3; // esi
  HWND v4; // r14
  ApplicationFlyoutView *v5; // r15
  int v6; // ebx
  int v7; // ebx
  const char *v8; // r9
  RECT *p_rc; // r12
  const char *v10; // r9
  const char *v11; // r9
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  TaskbarHelpers *v23; // rax
  HMONITOR v24; // rdx
  HWND TrayWindowForMonitor; // rax
  int v26; // [rsp+20h] [rbp-A8h]
  int v27; // [rsp+20h] [rbp-A8h]
  int v28; // [rsp+20h] [rbp-A8h]
  int v29; // [rsp+20h] [rbp-A8h]
  int v30; // [rsp+40h] [rbp-88h]
  int pvParam; // [rsp+44h] [rbp-84h] BYREF
  RECT *v32; // [rsp+48h] [rbp-80h]
  float v33[4]; // [rsp+50h] [rbp-78h] BYREF
  int v34; // [rsp+60h] [rbp-68h]
  ApplicationFlyoutView *v35; // [rsp+68h] [rbp-60h]
  HWND v36; // [rsp+70h] [rbp-58h]
  RECT rc; // [rsp+78h] [rbp-50h] BYREF
  struct tagRECT v38; // [rsp+88h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v3 = a3;
  v4 = hWnd;
  v5 = this;
  v35 = this;
  v36 = hWnd;
  ApplicationFlyoutView::GetRectAndTaskbarLocation((__int64)this, (__int64)v33);
  if ( v34 )
  {
    if ( v34 == 1 )
    {
      v6 = v3 + 90;
      goto LABEL_46;
    }
    if ( v34 != 2 )
    {
      v6 = (v3 ^ 1) + 90;
      goto LABEL_46;
    }
    v7 = v3 ^ 1;
  }
  else
  {
    v7 = (_BYTE)v3 != 0;
  }
  v6 = v7 + 88;
LABEL_46:
  try
  {
    try
    {
      v30 = v6;
      rc = 0LL;
      v32 = 0LL;
      rc = *ApplicationFlyoutView::GetAnimationClippingRect(
              v5,
              &v38,
              (const struct winrt::Windows::Foundation::Rect *)v33);
      p_rc = &rc;
      v32 = &rc;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x118,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v8);
      LOBYTE(v3) = a3;
      v6 = v30;
      p_rc = v32;
      v5 = v35;
      v4 = v36;
    }
    pvParam = 0;
    if ( !SystemParametersInfoW(0x1042u, 0, &pvParam, 0) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x11B,
        (__int64)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        v10);
    if ( (_BYTE)v3 )
    {
      if ( !SetWindowPos(v4, HWND_MESSAGE|0x2LL, (int)v33[0], (int)v33[1], (int)v33[2], (int)v33[3], 0x40u) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x125,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          v11);
      if ( !pvParam )
        goto LABEL_17;
      v12 = DwmpBeginTransitionRequest(56LL);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x127,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v12);
LABEL_17:
        v13 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)v5 + 1) + 24LL))(
                *((_QWORD *)v5 + 1),
                v4,
                0LL);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x134,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v13,
            v27);
        return;
      }
      v15 = DwmpTransitionWindowWithRects(v4, v6 | 0x10200000u, 0LL, 0LL, 0LL, 0LL, p_rc);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x12E,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v15);
      v16 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)v5 + 1) + 24LL))(
              *((_QWORD *)v5 + 1),
              v4,
              0LL);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x12F,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v16,
          v28);
      v17 = DwmpEndTransitionRequest(56LL);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x130,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)(unsigned int)v17);
      return;
    }
    if ( pvParam )
    {
      v18 = DwmpBeginTransitionRequest(57LL);
      if ( v18 >= 0 )
      {
        v20 = DwmpTransitionWindowWithRects(v4, v6 | 0x30000000u, 0LL, 0LL, 0LL, 0LL, p_rc);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x140,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v20);
        v21 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)v5 + 1) + 24LL))(
                *((_QWORD *)v5 + 1),
                v4,
                1LL);
        if ( v21 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x141,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v21,
            v29);
        v22 = DwmpEndTransitionRequest(57LL);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x142,
            (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
            (const char *)(unsigned int)v22);
        goto LABEL_36;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x139,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v18);
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)v5 + 1) + 24LL))(
            *((_QWORD *)v5 + 1),
            v4,
            1LL);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x146,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
        (const char *)(unsigned int)v19,
        v26);
LABEL_36:
    if ( GetForegroundWindow() == v4 )
    {
      v23 = (TaskbarHelpers *)MonitorFromRect(&rc, 1u);
      TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v23, v24);
      SetForegroundWindow(TrayWindowForMonitor);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x153,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
      v14);
  }
}
