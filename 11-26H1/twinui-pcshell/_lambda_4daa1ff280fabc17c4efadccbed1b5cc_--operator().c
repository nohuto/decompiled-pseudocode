/*
 * XREFs of _lambda_4daa1ff280fabc17c4efadccbed1b5cc_::operator() @ 0x1803AEC30
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___::Run @ 0x1803B8560 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___--Run.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007F48C (-Stop@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800B3728 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180187340 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_180187340.c)
 *     ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180187518 (--1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@X.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall lambda_4daa1ff280fabc17c4efadccbed1b5cc_::operator()(HWND *a1)
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
      (void *)0x1E9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v3);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v5, v2);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v4);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *)v5);
}
