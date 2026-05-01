/*
 * XREFs of ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x1802086D0
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800BAD08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180144D00 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x18046C2A0 (-AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800BA8C4 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x18017FD00 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801D33C8 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x1801E2FE8 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x1801E31F4 (--$StoryboardCompleted@AEAU-$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU-.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x180208AE8 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18020BB64 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1802304DC (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18029C58C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     _anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment @ 0x1802AD654 (_anonymous_namespace_--StartAnimationTelemetryForInputViewKeyMoment.c)
 *     ??$StartAnimatingInputView@AEAIAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N$$QEAI@Z @ 0x1802BD4CC (--$StartAnimatingInputView@AEAIAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N$$QEAI.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1802C62E4 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::AnimateInputView(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        HWND hwnd,
        char a4)
{
  unsigned __int8 IsAnimationEnabled; // al
  const char *v9; // r9
  __int64 v10; // rdx
  HMONITOR v12; // rbx
  const struct tagRECT *v13; // rdx
  float v14; // xmm1_4
  int v15; // ebx
  float v16; // xmm2_4
  float v17; // xmm0_4
  struct tagRECT *p_Rect; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  char v21; // al
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(__int64, __int64); // rax
  unsigned int FirstViewType; // eax
  __int64 *started; // rax
  unsigned int v27; // eax
  unsigned __int16 *v28; // r8
  int v29; // eax
  char *v30; // [rsp+20h] [rbp-99h]
  const char *v31; // [rsp+28h] [rbp-91h]
  char v32[8]; // [rsp+40h] [rbp-79h] BYREF
  char v33[8]; // [rsp+48h] [rbp-71h] BYREF
  _DWORD v34[4]; // [rsp+50h] [rbp-69h] BYREF
  struct tagRECT Rect; // [rsp+60h] [rbp-59h] BYREF
  struct tagRECT v36; // [rsp+70h] [rbp-49h] BYREF
  int v37[4]; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp-29h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v32[0] = a4;
  IsAnimationEnabled = anonymous_namespace_::IsAnimationEnabled();
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x311,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(IsAnimationEnabled ^ 1u),
    (bool)"Should not animate window if system animation is disabled",
    v31);
  v34[0] = *((_DWORD *)a2 + 39);
  TouchKeyboardExperienceTelemetryLogger::StartAnimatingInputView<unsigned int &,bool &,unsigned int>(
    (char *)a2 + 104,
    v32,
    v34);
  Rect = 0LL;
  if ( !GetWindowRect(hwnd, &Rect) )
  {
    v10 = 793LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  *(struct tagRECT *)v37 = Rect;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  v12 = MonitorFromWindow(hwnd, 1u);
  if ( !GetMonitorInfoW(v12, &mi) )
  {
    v10 = 799LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  if ( !v12 )
    return 2147500037LL;
  v14 = 0.0;
  if ( !KeyboardHosting::IsRectNull((struct KBViewInfo *)((char *)a2 + 136), v13) )
    v14 = (float)(*((_DWORD *)a2 + 35) - *((_DWORD *)a2 + 31));
  if ( *((_DWORD *)a2 + 39) == 1 )
  {
    v15 = (a4 != 0) + 2;
    v17 = (float)(mi.rcMonitor.bottom - Rect.top) - v14;
  }
  else
  {
    if ( *((_DWORD *)a2 + 39) != 2 )
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x34A,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        "AnimationKind is not supported",
        v30);
    v15 = 26 - (a4 != 0);
    if ( a4 )
      v16 = FLOAT_0_1;
    else
      v16 = FLOAT_0_050000001;
    v17 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(Rect.bottom - Rect.top) - v14) & _xmm) * v16;
  }
  p_Rect = (struct tagRECT *)v37;
  if ( !a4 )
    p_Rect = &Rect;
  OffsetRect(p_Rect, 0, (int)v17);
  rc = *(struct tagRECT *)v37;
  v36 = Rect;
  OffsetRect(&rc, -v37[0], -v37[1]);
  OffsetRect(&v36, -v36.left, -v36.top);
  v19 = CExperienceManagerAnimationHelper::Begin(
          (char *)this + 648,
          *((_QWORD *)a2 + 1),
          v15 | (a4 != 0 ? 25165824 : 562036736),
          &rc,
          v37,
          &v36,
          &Rect,
          &mi.rcMonitor);
  if ( v19 < 0 )
  {
    v20 = 855LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
    return (unsigned int)v19;
  }
  if ( !a4 )
  {
    v21 = *((_BYTE *)this + 937);
    *((_BYTE *)this + 937) = 0;
    if ( v21 )
    {
      v32[0] = 1;
      v33[0] = 0;
      TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
        (unsigned int *)this + 233,
        v33,
        v32);
      v22 = std::_Atomic_storage<unsigned int,4>::load((unsigned int *)this + 233);
      TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(this, v22, L"Hide", 0);
    }
  }
  v23 = *((_QWORD *)a2 + 1);
  v24 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 40LL);
  if ( a4 )
  {
    v19 = v24(v23, 0LL);
    if ( v19 < 0 )
    {
      v20 = 867LL;
      goto LABEL_21;
    }
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, a2, 0);
    *((_BYTE *)this + 936) = 1;
    FirstViewType = KBViewInfo::GetFirstViewType(a2);
    started = (__int64 *)anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment(v34, FirstViewType);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 104, started);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v34);
  }
  else
  {
    v19 = v24(v23, 1LL);
    if ( v19 < 0 )
    {
      v20 = 877LL;
      goto LABEL_21;
    }
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, a2, 1u);
    *((_BYTE *)this + 937) = 1;
  }
  _InterlockedExchange((volatile __int32 *)this + 233, *((_DWORD *)a2 + 26));
  v27 = std::_Atomic_storage<unsigned int,4>::load((unsigned int *)this + 233);
  TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(this, v27, v28, 1);
  v29 = CExperienceManagerAnimationHelper::End((TouchKeyboardExperienceManager *)((char *)this + 648));
  if ( v29 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x377,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v29);
  return 0LL;
}
