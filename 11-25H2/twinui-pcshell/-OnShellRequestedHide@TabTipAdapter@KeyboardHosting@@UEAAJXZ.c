/*
 * XREFs of ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x18046E110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014E0EC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014E824 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046B320 (--1OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?HideRequestReceived@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18046C414 (-HideRequestReceived@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x18046EAC4 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?StartActivity@OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18046FED4 (-StartActivity@OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedHide(KeyboardHosting::TabTipAdapter *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax
  DWORD v7; // edx
  _DWORD v8[4]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v9[42]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  TouchKeyboardExperienceTelemetryLogger::HideRequestReceived();
  v2 = *((_QWORD *)this + 15);
  v8[0] = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v2 + 56LL))(v2, v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x866,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  if ( v8[0] == 2 )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v9,
      (__int64)"OnShellRequestedHideActivity");
    v9[0] = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity *)v9);
    v6 = KeyboardHosting::TabTipAdapter::ProcessChangeRequest((char *)this - 8, v8[0], *((unsigned int *)this + 122));
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v6);
      TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::~OnShellRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity *)v9);
      return v4;
    }
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v9,
      v7);
    TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity::~OnShellRequestedHideActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedHideActivity *)v9);
  }
  return 0LL;
}
