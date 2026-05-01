/*
 * XREFs of ?ControlGainedForActivation@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180506E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802BEBCC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1805067E8 (--1VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180506A74 (-CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?EnableVoicePositionerScenario@VoiceAssistantPositioner@@AEAAJXZ @ 0x180507B7C (-EnableVoicePositionerScenario@VoiceAssistantPositioner@@AEAAJXZ.c)
 *     ?SetForegroundOnView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050A0B8 (-SetForegroundOnView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18050A3B8 (-StartActivity@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050AEAC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x18050D2D8 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 *     ?VAPositioner_TryPositionPendingView@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x18050D784 (-VAPositioner_TryPositionPendingView@VAPositioner_ControlGainedForActivationActivity@VoiceAssist.c)
 *     ?VAPositioner_ViewHandledByInitializePosition@VAPositioner_ControlGainedForActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x18050D7E4 (-VAPositioner_ViewHandledByInitializePosition@VAPositioner_ControlGainedForActivationActivity@Vo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::ControlGainedForActivation(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  struct IUnknown *v7; // rdx
  int updated; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v12[2]; // [rsp+20h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"VAPositioner_ControlGainedForActivationActivity");
  *(_QWORD *)v12 = &VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v12,
    a2,
    a4);
  if ( !SHIsSameObject((struct IUnknown *)a2, *(struct IUnknown **)(a1 - 120 + 408)) )
  {
    updated = VoiceAssistantPositioner::CacheViewToManage((VoiceAssistantPositioner *)(a1 - 120), (struct IUnknown *)a2);
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 401LL;
      goto LABEL_8;
    }
    updated = VoiceAssistantPositioner::EnableVoicePositionerScenario((VoiceAssistantPositioner *)(a1 - 120));
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 402LL;
      goto LABEL_8;
    }
    updated = VoiceAssistantPositioner::UpdateManagedView((VoiceAssistantPositioner *)(a1 - 120));
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 403LL;
      goto LABEL_8;
    }
    updated = VoiceAssistantPositioner::SetForegroundOnView((VoiceAssistantPositioner *)(a1 - 120), a2);
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 404LL;
      goto LABEL_8;
    }
    goto LABEL_19;
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::VAPositioner_ViewHandledByInitializePosition((VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 288));
  v7 = *(struct IUnknown **)(a1 - 120 + 416);
  if ( !v7
    || !SHIsSameObject((struct IUnknown *)a2, v7)
    || (VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::VAPositioner_TryPositionPendingView((VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v12),
        updated = VoiceAssistantPositioner::UpdateManagedView((VoiceAssistantPositioner *)(a1 - 120)),
        v9 = updated,
        updated >= 0) )
  {
    updated = VoiceAssistantPositioner::EnableVoicePositionerScenario((VoiceAssistantPositioner *)(a1 - 120));
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 394LL;
      goto LABEL_8;
    }
    updated = VoiceAssistantPositioner::SetForegroundOnView((VoiceAssistantPositioner *)(a1 - 120), a2);
    v9 = updated;
    if ( updated < 0 )
    {
      v10 = 395LL;
      goto LABEL_8;
    }
LABEL_19:
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
    v9 = 0;
    goto LABEL_20;
  }
  v10 = 392LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)updated);
LABEL_20:
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity::~VAPositioner_ControlGainedForActivationActivity((VoiceAssistantPositionerTelemetry::VAPositioner_ControlGainedForActivationActivity *)v12);
  return v9;
}
