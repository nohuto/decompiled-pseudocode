/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A680
 * Callers:
 *     ?GetIids@CLaunchActivatedEventArgs@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A6F0 (-GetIids@CLaunchActivatedEventArgs@@W7EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A700 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCAct_ea_18065A700.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WBAA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A710 (-GetIids@CLaunchActivatedEventArgs@@WBAA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A730 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCAct_ea_18065A730.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WJI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A740 (-GetIids@CLaunchActivatedEventArgs@@WJI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WKA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A760 (-GetIids@CLaunchActivatedEventArgs@@WKA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WKI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A780 (-GetIids@CLaunchActivatedEventArgs@@WKI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WNI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A7A0 (-GetIids@CLaunchActivatedEventArgs@@WNI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@WPA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A7C0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCAct_ea_18065A7C0.c)
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@WPI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18065A7E0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCAct_ea_18065A7E0.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@@Details@23@UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@89Windows@@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18065A5E0 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-_ea_18065A5E0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r8

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  if ( CoTaskMemAlloc(0x80uLL) )
  {
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsWithPrelaunchAndViewIdBase>,IWeakReferenceSource,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::FillArrayWithIid();
    *a2 = 8;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
