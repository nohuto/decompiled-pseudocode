/*
 * XREFs of ?SingletonInitialize@NexusPolicyManager@@QEAAXXZ @ 0x1803619D8
 * Callers:
 *     ?Instance@?$singleton_with_factory@UNexusPolicyManager@@U?$singleton_initialize_factory@UNexusPolicyManager@@@xblib@@@xblib@@SA?AV?$shared_ptr@UNexusPolicyManager@@@std@@XZ @ 0x18034B674 (-Instance@-$singleton_with_factory@UNexusPolicyManager@@U-$singleton_initialize_factory@UNexusPo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ @ 0x1802D7784 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ.c)
 *     ??1?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1803353EC (--1-$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Interna.c)
 *     winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_f626797b4729018c6c4cb46d87a4371f___ @ 0x1803605A4 (winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInspectable_--EventHandler.c)
 *     ??4?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180360CDC (--4-$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Interna.c)
 *     ?ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@@Z @ 0x180360E54 (-ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winr.c)
 *     ?GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ @ 0x180361060 (-GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ.c)
 *     ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x180361BD0 (-UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z.c)
 *     ?UpdateXInputFocusEnforcement@NexusPolicyManager@@AEAAXXZ @ 0x180361C28 (-UpdateXInputFocusEnforcement@NexusPolicyManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall NexusPolicyManager::SingletonInitialize(NexusPolicyManager *this)
{
  volatile signed __int32 *v2; // rax
  __int64 v3; // rcx
  std::_Ref_count_base *v4; // rdx
  std::_Ref_count_base *v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 *v11; // rax
  NexusPolicyManager *v12; // rcx
  NexusPolicyManager *v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  v3 = 0LL;
  v4 = 0LL;
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 1);
    _InterlockedIncrement(v2 + 3);
    v4 = (std::_Ref_count_base *)v2;
  }
  NexusPolicyManager::s_weakThis = v3;
  v5 = qword_1808DE130;
  qword_1808DE130 = v4;
  if ( v5 )
    std::_Ref_count_base::_Decwref(v5);
  v6 = RegisterGamingFullScreenExperienceChangeNotification(
         lambda_d19e6ffc7ca088ab1366ed8b1c01ea04_::_lambda_invoker_cdecl_,
         0LL,
         (char *)this + 32);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x24,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\NexusPolicyManager.cpp",
      (const char *)(unsigned int)v6);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_50902630>::GetImpl'::`2'::impl) )
  {
    v7 = *((_QWORD *)this + 2);
    v8 = 0LL;
    v9 = 0LL;
    if ( v7 )
    {
      v8 = *((_QWORD *)this + 1);
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
      v9 = v7;
    }
    v14[0] = v8;
    v14[1] = v9;
    v16 = 0LL;
    winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_f626797b4729018c6c4cb46d87a4371f___(
      &v18,
      v14);
    v11 = winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration::ConfigurationChanged(
            v15,
            v10,
            &v18);
    __4__factory_event_revoker_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt___MP8type___abi_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
      (__int64 *)this + 5,
      v11);
    __1__factory_event_revoker_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt___MP8type___abi_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v15);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
  }
  *((_BYTE *)this + 24) = NexusPolicyManager::GamingAppRequestsLegacyNexus();
  NexusPolicyManager::UpdateNexusShellExclusiveValue(this, 1);
  NexusPolicyManager::UpdateXInputFocusEnforcement(v12);
  NexusPolicyManager::UpdateNexusChordEnablement(v13);
}
