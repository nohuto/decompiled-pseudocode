/*
 * XREFs of ??1?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x180335BEC
 * Callers:
 *     ??1NexusPolicyManager@@UEAA@XZ @ 0x18035A314 (--1NexusPolicyManager@@UEAA@XZ.c)
 *     ??4?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18035A3A4 (--4-$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Interna.c)
 *     ?SingletonInitialize@NexusPolicyManager@@QEAAXXZ @ 0x18035AFD4 (-SingletonInitialize@NexusPolicyManager@@QEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?revoke_impl@?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@AEAAXUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@3@@Z @ 0x1802CB670 (-revoke_impl@-$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperienc.c)
 */

void __fastcall __1__factory_event_revoker_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt___MP8type___abi_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    v2 = *(_QWORD *)this;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v2);
    _revoke_impl___factory_event_revoker_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt___MP8type___abi_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__AEAAXUIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_3__Z(
      (__int64)this,
      (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v2);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(this);
}
