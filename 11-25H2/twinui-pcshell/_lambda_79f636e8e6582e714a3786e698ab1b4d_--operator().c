/*
 * XREFs of _lambda_79f636e8e6582e714a3786e698ab1b4d_::operator() @ 0x1803A5CD8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___::Run @ 0x1803AFD60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___--Run.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D202C (-Stop@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800D4D10 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180192234 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_180192234.c)
 *     ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180192410 (--1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@X.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall lambda_79f636e8e6582e714a3786e698ab1b4d_::operator()(HWND *a1)
{
  DWORD v2; // edx
  const char *v3; // r9
  _BYTE v4[80]; // [rsp+20h] [rbp-1B8h] BYREF
  _QWORD v5[42]; // [rsp+70h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v5,
    (__int64)(a1 + 1));
  v5[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)v5,
    (wil::ActivityThreadWatcher *)v4);
  if ( !SetWindowRgn(*a1, 0LL, 0) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x1E4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v3);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v5, v2);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v4);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *)v5);
}
