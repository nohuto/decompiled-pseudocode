/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@123@PEAKPEAPEAU_GUID@@@Z @ 0x180680044
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180680770 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventAr.c)
 * Callees:
 *     ?FillArrayWithIid@?$Implements@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@UIActivatedEventArgsWithUser@234@U?$CloakedIid@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@U?$CloakedIid@UIActivatedEventArgsInternal@Activation@ApplicationModel@Windows@@@78@VFtmBase@78@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18032B010 (-FillArrayWithIid@-$Implements@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@UIActiv.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>>(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  __int64 result; // rax
  GUID *v6; // r8

  *a3 = 0LL;
  *a2 = 0;
  if ( !CoTaskMemAlloc(0x80uLL) )
    return 2147942414LL;
  Microsoft::WRL::Implements<Windows::ApplicationModel::Activation::IActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>::FillArrayWithIid();
  *v6 = GUID_930cef4b_b829_40fc_88f4_8513e8a64738;
  v6[1] = GUID_33f288a6_5c2c_4d27_bac7_7536088f1219;
  v6[2] = GUID_0c44717b_19f7_48d6_b046_cf22826eaa74;
  v6[3] = GUID_00000038_0000_0000_c000_000000000046;
  v6[4] = GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52;
  result = 0LL;
  v6[5] = GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345;
  *a2 = 8;
  *a3 = v6;
  return result;
}
