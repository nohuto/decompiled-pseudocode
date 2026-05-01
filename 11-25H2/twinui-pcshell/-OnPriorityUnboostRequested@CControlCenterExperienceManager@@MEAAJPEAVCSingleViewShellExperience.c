/*
 * XREFs of ?OnPriorityUnboostRequested@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180366360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043BF4 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180044FE8 (--0-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1803640A4 (--1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x18036737C (-StartActivity@EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnPriorityUnboostRequested(
        CControlCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v7,
    (__int64)"EM_PriorityUnboostRequested");
  *(_QWORD *)v7 = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityUnboostRequested::`vftable';
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityUnboostRequested::StartActivity((ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityUnboostRequested *)v7);
  v3 = *((_QWORD *)this + 1);
  if ( v3 && (v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62B,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7, 0);
    v5 = 0;
  }
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_PriorityUnboostRequested::~EM_PriorityUnboostRequested((volatile signed __int32 **)v7);
  return v5;
}
