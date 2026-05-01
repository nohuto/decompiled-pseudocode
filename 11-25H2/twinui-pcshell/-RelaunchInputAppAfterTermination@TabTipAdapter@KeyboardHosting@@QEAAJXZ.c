/*
 * XREFs of ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802A91B8
 * Callers:
 *     _lambda_764a1297a52a98304490b9424ce1b78f_::operator() @ 0x18045E3B4 (_lambda_764a1297a52a98304490b9424ce1b78f_--operator().c)
 *     _lambda_be5c4a08901c2da5d7e3733dfd359dd1_::operator() @ 0x18045E918 (_lambda_be5c4a08901c2da5d7e3733dfd359dd1_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_23c5a3bb52c52253123ff45bf7a2f049___::Run @ 0x1804643E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_23c5a3bb52c52253123ff45bf7a2f049___--Run.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800667F4 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180066CDC (-InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800D4F0C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014ED48 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014F278 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18014F3D4 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_18014F3D4.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014F42C (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsP_ea_18014F42C.c)
 *     ?StartActivity@RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18014F5EC (-StartActivity@RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ??1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CD788 (--1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(
        KeyboardHosting::TabTipAdapter *this)
{
  DWORD v2; // edx
  SC_HANDLE v3; // rax
  int IsReady; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v9[272]; // [rsp+28h] [rbp-160h] BYREF
  volatile signed __int32 *v10; // [rsp+138h] [rbp-50h] BYREF
  _BYTE v11[48]; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"RelaunchInputAppAfterTermination");
  *(_QWORD *)v8 = &TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::`vftable';
  TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::StartActivity((TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination *)v8);
  if ( GetSystemMetrics(0x2000) )
    goto LABEL_4;
  v3 = OpenSCManagerW(0LL, 0LL, 1u);
  if ( v3 )
  {
    CloseServiceHandle(v3);
  }
  else if ( GetLastError() == 1115 )
  {
LABEL_4:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8, v2);
    *(_QWORD *)v8 = &TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v8);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v11);
    wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v10);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
    return 0LL;
  }
  IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(this);
  v6 = IsReady;
  if ( IsReady >= 0 )
  {
    IsReady = KeyboardHosting::TabTipAdapter::InvokeEnsureInputAppIsActivated(this);
    v6 = IsReady;
    if ( IsReady >= 0 )
      goto LABEL_4;
    v7 = 3055LL;
  }
  else
  {
    v7 = 3054LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)IsReady);
  TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination::~RelaunchInputAppAfterTermination((TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTermination *)v8);
  return v6;
}
