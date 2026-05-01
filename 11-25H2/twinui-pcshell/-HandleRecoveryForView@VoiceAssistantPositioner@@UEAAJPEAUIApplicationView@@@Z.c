/*
 * XREFs of ?HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804E7A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E62E4 (-CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1804E7E04 (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?VAPositioner_HandleRecoveryForView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804EC0CC (-VAPositioner_HandleRecoveryForView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationVie.c)
 *     ?get@?$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPositionerTelemetry@@P6AXXZ@Z @ 0x1804EC2C4 (-get@-$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPosit.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::HandleRecoveryForView(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rcx
  VoiceAssistantPositionerTelemetry *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( VoiceAssistantPositionerTelemetry::IsEnabled((unsigned __int8)this, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<VoiceAssistantPositionerTelemetry>::get(
      v4,
      _lambda_b2cc13a1030bf75285c22b578959c011_::_lambda_invoker_cdecl_);
    VoiceAssistantPositionerTelemetry::VAPositioner_HandleRecoveryForView_(v5, a2);
  }
  v6 = VoiceAssistantPositioner::CacheViewToManage(
         (VoiceAssistantPositioner *)((char *)this - 120),
         (struct IUnknown *)a2);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E4,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
