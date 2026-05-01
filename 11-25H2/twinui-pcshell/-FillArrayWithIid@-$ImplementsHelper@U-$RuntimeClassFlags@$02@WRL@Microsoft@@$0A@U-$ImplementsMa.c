/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveWindowFactoryBase@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1806A1F50
 * Callers:
 *     ?GetIids@CImmersiveWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1806A1F90 (-GetIids@CImmersiveWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ?FillArrayWithIid@?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UICoreWindowFactory@Core@UI@Windows@@U?$CloakedIid@VCWrlLightweightHandlerServer@@@23@U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x1806A1F20 (-FillArrayWithIid@-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UICoreWindowFactory@Core@.c)
 */

__int64 Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveWindowFactoryBase>,IWeakReferenceSource>::FillArrayWithIid()
{
  unsigned int *v0; // rdx
  int v1; // r9d
  __int64 v2; // r8
  __int64 result; // rax

  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::UI::Core::ICoreWindowFactory,Microsoft::WRL::CloakedIid<CWrlLightweightHandlerServer>,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::FillArrayWithIid();
  v1 = *v0;
  *(GUID *)(v2 + 16LL * *v0) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  result = (unsigned int)(v1 + 1);
  *v0 = result;
  return result;
}
