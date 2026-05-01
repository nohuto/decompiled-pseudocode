/*
 * XREFs of ?OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18037D300
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001C494 (--0-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180068D48 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801F02F4 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802A0320 (-StartActivity@EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?SetZBand@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802BCD6C (-SetZBand@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ??1EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C4F28 (--1EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnViewUncloaking(HSTRING *this, ExperienceManagerUtils **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rsi
  const WCHAR *StringRawBuffer; // rax
  const char *v7; // r9
  int v8; // eax
  int v9; // eax
  _QWORD v11[42]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v11,
    (__int64)"EM_ViewUncloakingActivity");
  v11[0] = &ToastCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
  ToastCenterTelemetry::EM_ViewUncloakingActivity::StartActivity((ToastCenterTelemetry::EM_ViewUncloakingActivity *)v11);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v4);
  if ( this[36] )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[36], 0LL);
    if ( !SetWindowTextW(v5, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x666,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        v7);
  }
  v8 = CToastCenterExperienceManager::SetZBand((ExperienceManagerUtils **)this - 11);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x669,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  v9 = CSingleViewShellExperience::ShowBorder((__int64)(this + 2), 0);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x66A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11, 0);
  ToastCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity((ToastCenterTelemetry::EM_ViewUncloakingActivity *)v11);
  return 0LL;
}
