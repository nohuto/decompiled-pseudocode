/*
 * XREFs of ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x18028B4FC
 * Callers:
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x1801E2E50 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046A598 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 *     ?FireInputPaneShowing@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@0@Z @ 0x18046C9A0 (-FireInputPaneShowing@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@0@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18046E964 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x18046F1B8 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180470600 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x180031EF0 (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z @ 0x1800BA4FC (-FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x1800BA754 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x1800BA814 (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x1800BAAA4 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801D33C8 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x1801FA560 (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x180289A3C (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 *     ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x1802B7578 (-GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  float *v15; // rcx
  HWND v16; // r15
  float v17; // xmm3_4
  int v18; // r9d
  float v19; // xmm1_4
  int CurrentTextSelectionRect; // eax
  KeyboardHosting::TabTipAdapter *v21; // rdi
  void (__fastcall *v22)(KeyboardHosting::TabTipAdapter *, HWND, struct tagRECT *, _QWORD, _DWORD *, struct tagRECT *); // rbx
  unsigned int PrimaryViewDisplayMode; // eax
  _DWORD v24[4]; // [rsp+40h] [rbp-58h] BYREF
  struct tagRECT v25; // [rsp+50h] [rbp-48h] BYREF
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
      v18 = (int)(float)(v15[114] + v15[116]);
      v19 = v17 + v15[117];
      v24[0] = (int)v15[114];
      v24[2] = v18;
      v24[1] = (int)v17;
      v25 = 0LL;
      v24[3] = (int)v19;
      CurrentTextSelectionRect = KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(
                                   (KeyboardHosting::TabTipAdapter *)v15,
                                   &v25);
      if ( CurrentTextSelectionRect < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11A3,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)CurrentTextSelectionRect);
      v21 = this[44];
      v22 = *(void (__fastcall **)(KeyboardHosting::TabTipAdapter *, HWND, struct tagRECT *, _QWORD, _DWORD *, struct tagRECT *))(*(_QWORD *)v21 + 24LL);
      PrimaryViewDisplayMode = KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode((__int64)this[73]);
      v22(v21, v16, a3, PrimaryViewDisplayMode, v24, &v25);
      *((_DWORD *)this + 155) = 1;
    }
    KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(this[73], v6, 1u);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1199,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
