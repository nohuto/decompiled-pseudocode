/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@@Details@23@UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@89Windows@@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18065A5E0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A680 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventAr.c)
 * Callees:
 *     ?FillArrayWithIid@?$Implements@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@UIActivatedEventArgsWithUser@234@U?$CloakedIid@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@U?$CloakedIid@UIActivatedEventArgsInternal@Activation@ApplicationModel@Windows@@@78@VFtmBase@78@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18032DAB8 (-FillArrayWithIid@-$Implements@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@UIActiv.c)
 */

__int64 Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsWithPrelaunchAndViewIdBase>,IWeakReferenceSource,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::FillArrayWithIid()
{
  _DWORD *v0; // rdx
  unsigned int v1; // r9d
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax

  Microsoft::WRL::Implements<Windows::ApplicationModel::Activation::IActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>::FillArrayWithIid();
  v1 = *v0 + 1;
  *(GUID *)(v2 + 16LL * (unsigned int)*v0) = GUID_930cef4b_b829_40fc_88f4_8513e8a64738;
  v3 = 2LL * v1++;
  *(GUID *)(v2 + 8 * v3) = GUID_33f288a6_5c2c_4d27_bac7_7536088f1219;
  v4 = 2LL * v1++;
  *(GUID *)(v2 + 8 * v4) = GUID_0c44717b_19f7_48d6_b046_cf22826eaa74;
  v5 = 2LL * v1++;
  *(GUID *)(v2 + 8 * v5) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  v6 = 2LL * v1++;
  *(GUID *)(v2 + 8 * v6) = GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52;
  *(GUID *)(v2 + 16LL * v1) = GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345;
  result = v1 + 1;
  *v0 = result;
  return result;
}
