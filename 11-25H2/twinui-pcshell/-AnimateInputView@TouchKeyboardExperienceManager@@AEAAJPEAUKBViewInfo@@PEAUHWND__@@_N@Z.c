/*
 * XREFs of ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x180216DA8
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800961C8 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180097824 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180099200 (-AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800971F4 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x18018A2F8 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18018FE24 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x180190014 (--$StoryboardCompleted@AEAU-$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU-.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801DDB34 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x1802171B8 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x180219B64 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x18023F42C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180297380 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     _anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment @ 0x1802B64C0 (_anonymous_namespace_--StartAnimationTelemetryForInputViewKeyMoment.c)
 *     ??$StartAnimatingInputView@AEAIAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N$$QEAI@Z @ 0x1802C696C (--$StartAnimatingInputView@AEAIAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEA_N$$QEAI.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1802CEE20 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::AnimateInputView(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        HWND hwnd,
        char a4)
{
  char v4; // bl
  unsigned __int8 IsAnimationEnabled; // al
  const char *v9; // r9
  __int64 v10; // rdx
  HMONITOR v12; // r14
  const struct tagRECT *v13; // rdx
  float v14; // xmm1_4
  int v15; // r14d
  float v16; // xmm2_4
  float v17; // xmm0_4
  struct tagRECT *p_Rect; // rcx
  int v19; // eax
  unsigned int v20; // r14d
  char v21; // al
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  int v24; // ebx
  __int64 v25; // rdx
  unsigned int FirstViewType; // eax
  __int64 *started; // rax
  unsigned __int16 *v28; // r8
  int v29; // eax
  char *v30; // [rsp+20h] [rbp-99h]
  const char *v31; // [rsp+28h] [rbp-91h]
  _BYTE v32[8]; // [rsp+40h] [rbp-79h] BYREF
  char v33; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v34[3]; // [rsp+49h] [rbp-70h] BYREF
  int v35; // [rsp+4Ch] [rbp-6Dh] BYREF
  _BYTE v36[16]; // [rsp+50h] [rbp-69h] BYREF
  struct tagRECT Rect; // [rsp+60h] [rbp-59h] BYREF
  struct tagRECT v38; // [rsp+70h] [rbp-49h] BYREF
  int v39[4]; // [rsp+80h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp-29h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v4 = a4;
  v32[0] = a4;
  IsAnimationEnabled = anonymous_namespace_::IsAnimationEnabled();
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x304,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(IsAnimationEnabled ^ 1u),
    (bool)"Should not animate window if system animation is disabled",
    v31);
  v35 = *((_DWORD *)a2 + 39);
  TouchKeyboardExperienceTelemetryLogger::StartAnimatingInputView<unsigned int &,bool &,unsigned int>(
    (char *)a2 + 104,
    v32,
    &v35);
  Rect = 0LL;
  if ( !GetWindowRect(hwnd, &Rect) )
  {
    v10 = 780LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  *(struct tagRECT *)v39 = Rect;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  v12 = MonitorFromWindow(hwnd, 1u);
  if ( !GetMonitorInfoW(v12, &mi) )
  {
    v10 = 786LL;
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
    v15 = (v4 != 0) + 2;
    v17 = (float)(mi.rcMonitor.bottom - Rect.top) - v14;
  }
  else
  {
    if ( *((_DWORD *)a2 + 39) != 2 )
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x33D,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        "AnimationKind is not supported",
        v30);
    v15 = 26 - (v4 != 0);
    if ( v4 )
      v16 = FLOAT_0_1;
    else
      v16 = FLOAT_0_050000001;
    v17 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(Rect.bottom - Rect.top) - v14) & _xmm) * v16;
  }
  p_Rect = (struct tagRECT *)v39;
  if ( !v4 )
    p_Rect = &Rect;
  OffsetRect(p_Rect, 0, (int)v17);
  rc = *(struct tagRECT *)v39;
  v38 = Rect;
  OffsetRect(&rc, -v39[0], -v39[1]);
  OffsetRect(&v38, -v38.left, -v38.top);
  v19 = CExperienceManagerAnimationHelper::Begin(
          (char *)this + 648,
          *((_QWORD *)a2 + 1),
          v15 | (v4 != 0 ? 25165824 : 562036736),
          &rc,
          v39,
          &v38,
          &Rect,
          &mi.rcMonitor);
  v20 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
    return v20;
  }
  if ( !v4 )
  {
    v21 = *((_BYTE *)this + 937);
    *((_BYTE *)this + 937) = 0;
    if ( v21 )
    {
      v34[0] = 0;
      v33 = 1;
      TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
        (int *)this + 233,
        v34,
        &v33);
      TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
        this,
        *((_DWORD *)this + 233),
        L"Hide",
        0);
    }
    v4 = v32[0];
  }
  v22 = *((_QWORD *)a2 + 1);
  v23 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 40LL);
  if ( v4 )
  {
    v24 = v23(v22, 0LL);
    if ( v24 < 0 )
    {
      v25 = 854LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v24);
      return (unsigned int)v24;
    }
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, a2, 0);
    *((_BYTE *)this + 936) = 1;
    FirstViewType = KBViewInfo::GetFirstViewType(a2);
    started = (__int64 *)anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment(v36, FirstViewType);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 104, started);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v36);
  }
  else
  {
    v24 = v23(v22, 1LL);
    if ( v24 < 0 )
    {
      v25 = 864LL;
      goto LABEL_28;
    }
    TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(this, a2, 1u);
    *((_BYTE *)this + 937) = 1;
  }
  v28 = L"Show";
  _InterlockedExchange((volatile __int32 *)this + 233, *((_DWORD *)a2 + 26));
  if ( !v32[0] )
    v28 = L"Hide";
  TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(this, *((_DWORD *)this + 233), v28, 1);
  v29 = CExperienceManagerAnimationHelper::End((TouchKeyboardExperienceManager *)((char *)this + 648));
  if ( v29 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x36A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v29);
  return 0LL;
}
