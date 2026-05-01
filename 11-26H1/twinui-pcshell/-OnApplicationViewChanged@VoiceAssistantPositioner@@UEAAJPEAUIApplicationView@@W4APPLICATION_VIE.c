/*
 * XREFs of ?OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180186D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18050721C (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1805085B4 (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?VAPositioner_AppViewDestroyed_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x18050D3F4 (-VAPositioner_AppViewDestroyed_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z.c)
 *     ?get@?$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPositionerTelemetry@@P6AXXZ@Z @ 0x18050D844 (-get@-$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPosit.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::OnApplicationViewChanged(__int64 a1, struct IUnknown *a2, int a3)
{
  VoiceAssistantPositioner *v5; // rdi
  struct IUnknown *v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  VoiceAssistantPositionerTelemetry *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 != 1 )
    return 0LL;
  v5 = (VoiceAssistantPositioner *)(a1 - 152);
  v6 = *(struct IUnknown **)(a1 - 152 + 376);
  if ( !v6 || !SHIsSameObject(a2, v6) )
    return 0LL;
  if ( VoiceAssistantPositionerTelemetry::IsEnabled(v8, v7) )
  {
    wil::details::static_lazy<VoiceAssistantPositionerTelemetry>::get(
      v9,
      _lambda_b2cc13a1030bf75285c22b578959c011_::_lambda_invoker_cdecl_);
    VoiceAssistantPositionerTelemetry::VAPositioner_AppViewDestroyed_(v10, (struct IApplicationView *)a2);
  }
  v11 = VoiceAssistantPositioner::ControlLostHelper(v5, (struct IApplicationView *)a2);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23C,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
