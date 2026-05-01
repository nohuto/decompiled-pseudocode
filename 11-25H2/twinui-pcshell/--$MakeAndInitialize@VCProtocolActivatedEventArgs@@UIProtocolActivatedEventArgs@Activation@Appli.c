/*
 * XREFs of ??$MakeAndInitialize@VCProtocolActivatedEventArgs@@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAUIUriRuntimeClass@Foundation@5@@Details@WRL@Microsoft@@YAJPEAPEAUIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@$$QEAPEAUIUriRuntimeClass@Foundation@6@@Z @ 0x18032946C
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x180330A10 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180330A10.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CProtocolActivatedEventArgs@@QEAA@XZ @ 0x18032B5FC (--0CProtocolActivatedEventArgs@@QEAA@XZ.c)
 *     ?QueryInterface@CProtocolActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18032EF90 (-QueryInterface@CProtocolActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18032F270 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivate.c)
 *     ?RuntimeClassInitialize@CProtocolActivatedEventArgs@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x1806530D8 (-RuntimeClassInitialize@CProtocolActivatedEventArgs@@QEAAJPEAUIUriRuntimeClass@Foundation@Window.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CProtocolActivatedEventArgs,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,Windows::Foundation::IUriRuntimeClass *>(
        void **a1,
        struct Windows::Foundation::IUriRuntimeClass **a2)
{
  void *v4; // rax
  int Interface; // edi
  CProtocolActivatedEventArgs *v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CProtocolActivatedEventArgs *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = (CProtocolActivatedEventArgs *)v4;
  if ( v4 )
  {
    v6 = CProtocolActivatedEventArgs::CProtocolActivatedEventArgs((CProtocolActivatedEventArgs *)v4);
    v9 = v6;
    v8 = 0LL;
    Interface = CProtocolActivatedEventArgs::RuntimeClassInitialize(v6, *a2);
    if ( Interface >= 0 )
      Interface = CProtocolActivatedEventArgs::QueryInterface(v6, &GUID_6095f4dd_b7c0_46ab_81fe_d90f36d00d24, a1);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>::Release(v6);
  }
  else
  {
    Interface = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return (unsigned int)Interface;
}
