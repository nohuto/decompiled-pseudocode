/*
 * XREFs of ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E6A88
 * Callers:
 *     ?OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18018EE70 (-OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804E6830 (-ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIU.c)
 *     ?OnViewClosing@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1804E86A0 (-OnViewClosing@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1804E7E04 (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z @ 0x1804E84CC (-NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z.c)
 *     ?VAPositioner_ControlLostHelper_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804EBF4C (-VAPositioner_ControlLostHelper_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@.c)
 *     ?get@?$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPositionerTelemetry@@P6AXXZ@Z @ 0x1804EC2C4 (-get@-$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPosit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::ControlLostHelper(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2)
{
  struct IUnknown **v4; // rbx
  __int64 v5; // rcx
  VoiceAssistantPositionerTelemetry *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct IUnknown **)((char *)this + 376);
  if ( *((_QWORD *)this + 47) )
  {
    if ( VoiceAssistantPositionerTelemetry::IsEnabled((unsigned __int8)this, (unsigned __int64)a2) )
    {
      wil::details::static_lazy<VoiceAssistantPositionerTelemetry>::get(
        v5,
        _lambda_b2cc13a1030bf75285c22b578959c011_::_lambda_invoker_cdecl_);
      VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostHelper_(v6, a2);
    }
    if ( !SHIsSameObject((struct IUnknown *)a2, *v4) )
      return 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v4);
    VoiceAssistantPositioner::NotifyTrayOfVisibility(this, 0);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 29) + 56LL))(*((_QWORD *)this + 29), 8LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v7);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x289,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)v8);
    return v8;
  }
  return 0LL;
}
