/*
 * XREFs of ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180508310
 * Callers:
 *     ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x180506FB0 (-ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AF5E4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800AF8BC (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1805085B4 (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x18050D6B8 (-VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z.c)
 *     ?get@?$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPositionerTelemetry@@P6AXXZ@Z @ 0x18050D844 (-get@-$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPosit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::HideView(VoiceAssistantPositioner *this, struct IApplicationView *a2)
{
  __int64 v3; // rcx
  VoiceAssistantPositionerTelemetry *v4; // rcx
  ApplicationViewOperation **v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ApplicationViewOperation *v13; // [rsp+30h] [rbp+8h] BYREF
  ApplicationViewOperation *v14; // [rsp+40h] [rbp+18h] BYREF

  v13 = this;
  if ( VoiceAssistantPositionerTelemetry::IsEnabled((unsigned __int8)this, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<VoiceAssistantPositionerTelemetry>::get(
      v3,
      _lambda_b2cc13a1030bf75285c22b578959c011_::_lambda_invoker_cdecl_);
    VoiceAssistantPositionerTelemetry::VAPositioner_HideView_(v4, a2);
  }
  v5 = Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v13);
  v14 = *v5;
  v6 = (__int64)v14;
  *v5 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v13);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 96LL))(v6, 0LL);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v6);
      v7 = v10;
      if ( v10 >= 0 )
      {
        v7 = 0;
        goto LABEL_12;
      }
      v9 = 659LL;
    }
    else
    {
      v9 = 658LL;
    }
    v8 = (unsigned int)v10;
  }
  else
  {
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 657LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v8);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  return v7;
}
