/*
 * XREFs of ?InputHostShowing@VoiceAssistantPositioner@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1805084F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802BEBCC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1VAPositioner_InputHostShowingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18050691C (--1VAPositioner_InputHostShowingActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@VAPositioner_InputHostShowingActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ @ 0x18050A96C (-StartActivity@VAPositioner_InputHostShowingActivity@VoiceAssistantPositionerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050AEAC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x18050D2D8 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 */

__int64 __fastcall VoiceAssistantPositioner::InputHostShowing(__int64 a1)
{
  VoiceAssistantPositioner *v1; // rbx
  int updated; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v1 = (VoiceAssistantPositioner *)(a1 - 136);
  if ( *(_QWORD *)(a1 - 136 + 376) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v5,
      (__int64)"VAPositioner_InputHostShowingActivity");
    *(_QWORD *)v5 = &VoiceAssistantPositionerTelemetry::VAPositioner_InputHostShowingActivity::`vftable';
    VoiceAssistantPositionerTelemetry::VAPositioner_InputHostShowingActivity::StartActivity((VoiceAssistantPositionerTelemetry::VAPositioner_InputHostShowingActivity *)v5);
    updated = VoiceAssistantPositioner::UpdateManagedView(v1);
    v3 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x201,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)updated);
      VoiceAssistantPositionerTelemetry::VAPositioner_InputHostShowingActivity::~VAPositioner_InputHostShowingActivity((VoiceAssistantPositionerTelemetry::VAPositioner_InputHostShowingActivity *)v5);
      return v3;
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
    VoiceAssistantPositionerTelemetry::VAPositioner_InputHostShowingActivity::~VAPositioner_InputHostShowingActivity((VoiceAssistantPositionerTelemetry::VAPositioner_InputHostShowingActivity *)v5);
  }
  return 0LL;
}
