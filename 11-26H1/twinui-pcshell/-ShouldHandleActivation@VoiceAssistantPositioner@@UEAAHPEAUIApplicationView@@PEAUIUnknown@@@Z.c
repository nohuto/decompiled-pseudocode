/*
 * XREFs of ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18007B740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18007A744 (-StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x18007B424 (-Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007B864 (--0-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18007B924 (--1VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?IsVoiceActivation@PositionerPropertySetHelpers@@YAJV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEA_N@Z @ 0x18007D220 (-IsVoiceActivation@PositionerPropertySetHelpers@@YAJV-$ComPtr@UIPropertySet@Collections@Foundati.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VoiceAssistantPositioner::ShouldHandleActivation(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  unsigned __int8 v5; // di
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v7; // rcx
  unsigned __int8 v9[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[42]; // [rsp+40h] [rbp-C0h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v12);
  v12[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)v12,
    a2,
    a3);
  v5 = 0;
  v9[0] = 0;
  v10 = 0LL;
  if ( a3 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
           a3,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v10) >= 0 )
    {
      v11[0] = v10;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
      PositionerPropertySetHelpers::IsVoiceActivation(v11, v9);
      v5 = v9[0];
    }
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::Stop(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)v12,
    v5);
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::~VAPositioner_ShouldHandleActivationActivity((VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)v12);
  return v5;
}
