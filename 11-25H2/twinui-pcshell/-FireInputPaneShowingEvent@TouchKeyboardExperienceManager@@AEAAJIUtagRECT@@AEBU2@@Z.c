/*
 * XREFs of ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294234
 * Callers:
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x18018FCC0 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     _lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator() @ 0x18045ED54 (_lambda_ff3af0abcf4100822182f80ac5bd56ae_--operator().c)
 *     ?FireInputPaneShowing@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@0@Z @ 0x180460400 (-FireInputPaneShowing@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@0@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180462A74 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x180463278 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180464860 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x18002A71C (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180037E34 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180096F9C (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z @ 0x1800973B8 (-FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z.c)
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x180097540 (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801DDB34 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x180206570 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x180293498 (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 *     ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x1802C0788 (-GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
        KeyboardHosting::TabTipAdapter **this,
        const struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  unsigned int v6; // ebp
  _OWORD *v7; // r8
  _OWORD *v8; // r9
  TouchKeyboardExperienceTelemetryLogger *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  HWND FocusedWindow; // rax
  HWND Ancestor; // rax
  float *v15; // r8
  HWND v16; // r15
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  int CurrentTextSelectionRect; // eax
  KeyboardHosting::TabTipAdapter *v22; // rdi
  void (__fastcall *v23)(KeyboardHosting::TabTipAdapter *, HWND, struct tagRECT *, _QWORD, _DWORD *, struct tagRECT *); // rbx
  unsigned int PrimaryViewDisplayMode; // eax
  _DWORD v25[4]; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT v26; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v6 = (unsigned int)a2;
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)a4, a2) )
    *v7 = *v8;
  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled() )
  {
    TouchKeyboardExperienceTelemetryLogger::Instance();
    TouchKeyboardExperienceTelemetryLogger::FireInputPaneShowingEvent_(v9, v6, a3);
  }
  v10 = KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(this[73], v6, a3);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( v6 == *((_DWORD *)this + 153) )
    {
      FocusedWindow = anonymous_namespace_::GetFocusedWindow();
      Ancestor = GetAncestor(FocusedWindow, 2u);
      v15 = (float *)this[73];
      v16 = Ancestor;
      v17 = v15[115];
      v18 = v15[114];
      v19 = v15[116];
      v20 = v15[117];
      v25[1] = (int)v17;
      v25[0] = (int)v18;
      v26 = 0LL;
      v25[2] = (int)(float)(v18 + v19);
      v25[3] = (int)(float)(v17 + v20);
      CurrentTextSelectionRect = KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(
                                   (KeyboardHosting::TabTipAdapter *)v15,
                                   &v26);
      if ( CurrentTextSelectionRect < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11DF,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)CurrentTextSelectionRect);
      v22 = this[44];
      v23 = *(void (__fastcall **)(KeyboardHosting::TabTipAdapter *, HWND, struct tagRECT *, _QWORD, _DWORD *, struct tagRECT *))(*(_QWORD *)v22 + 24LL);
      PrimaryViewDisplayMode = KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode((__int64)this[73]);
      v23(v22, v16, a3, PrimaryViewDisplayMode, v25, &v26);
      *((_DWORD *)this + 155) = 1;
    }
    KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(this[73], v6, 1u);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
