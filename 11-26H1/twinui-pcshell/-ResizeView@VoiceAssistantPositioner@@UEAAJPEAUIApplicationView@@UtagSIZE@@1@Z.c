/*
 * XREFs of ?ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180509FC0
 * Callers:
 *     ?ResizeView@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x18050A090 (-ResizeView@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B517C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1805069A0 (--1VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@UtagSIZE@@@Z @ 0x18050ABD8 (-StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIAppl.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18050AF9C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x18050D2D8 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::ResizeView(
        struct tagSIZE *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  int updated; // eax
  unsigned int v8; // ebx
  int v10[2]; // [rsp+20h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (__int64)"VAPositioner_ResizeViewActivity");
  *(_QWORD *)v10 = &VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity *)v10,
    a2,
    a4);
  this[35] = a4;
  updated = VoiceAssistantPositioner::UpdateManagedView((VoiceAssistantPositioner *)&this[-13]);
  v8 = updated;
  if ( updated >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v10,
      0LL);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)updated);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity::~VAPositioner_ResizeViewActivity((VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity *)v10);
  return v8;
}
