/*
 * XREFs of ?OnPriorityBoostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18020B900
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043BF4 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?reset@?$shared_object@V?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180043D74 (-reset@-$shared_object@V-$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180043DCC (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180043E80 (--1-$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180044FE8 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18020B9FC (--1EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1802AEEB4 (-StartActivity@EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXX.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnPriorityBoostRequested(
        CControlCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v8[272]; // [rsp+28h] [rbp-160h] BYREF
  volatile signed __int32 *v9; // [rsp+138h] [rbp-50h] BYREF
  _BYTE v10[48]; // [rsp+140h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v7,
    (__int64)"EM_PriorityBoostRequested");
  *(_QWORD *)v7 = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested::StartActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested *)v7);
  v3 = *((_QWORD *)this + 1);
  if ( v3 && (v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    *(_QWORD *)v7 = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested::`vftable';
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)v7);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v10);
    wil::details::shared_object<wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v9);
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v8);
    return v5;
  }
  else
  {
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7, 0);
    ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested::~EM_PriorityBoostRequested((ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityBoostRequested *)v7);
    return 0LL;
  }
}
