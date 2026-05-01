/*
 * XREFs of ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036D860
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180018F54 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180019A80 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801F02F4 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?RegisterWithLightDismiss@CControlCenterExperienceManager@@AEAAJXZ @ 0x180239360 (-RegisterWithLightDismiss@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1802A5728 (-StartActivity@EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXX.c)
 *     ??1EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802C4A2C (--1EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z @ 0x18036DD50 (-RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnViewUncloaking(
        CControlCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rsi
  const WCHAR *StringRawBuffer; // rax
  const char *v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // r9d
  int v12; // eax
  int started; // eax
  _QWORD v15[42]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v15,
    (__int64)"EM_ViewUncloakingActivity");
  v15[0] = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewUncloakingActivity::StartActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewUncloakingActivity *)v15);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v4);
  if ( *((_QWORD *)this + 38) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 38), 0LL);
    if ( !SetWindowTextW(v5, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x6D5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        v7);
  }
  if ( *((_BYTE *)this + 313) )
    Mirror_IsThreadRTL();
  v8 = CSingleViewShellExperience::ShowBorder((__int64)this + 16, 0);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6DF,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  v12 = CControlCenterExperienceManager::RegisterWithLightDismiss(
          (CControlCenterExperienceManager *)((char *)this - 104),
          v9,
          v10,
          v11);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6E1,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  started = CControlCenterExperienceManager::RaiseStartAnimationEvent(
              (CControlCenterExperienceManager *)((char *)this - 104),
              *((_QWORD *)this + 83),
              *((_QWORD *)this + 85),
              *((_QWORD *)this + 84));
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6E3,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)started);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v15, 0);
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewUncloakingActivity *)v15);
  return 0LL;
}
