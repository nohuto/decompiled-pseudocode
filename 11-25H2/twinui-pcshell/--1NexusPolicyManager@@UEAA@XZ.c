/*
 * XREFs of ??1NexusPolicyManager@@UEAA@XZ @ 0x18035A314
 * Callers:
 *     ??_GNexusPolicyManager@@UEAAPEAXI@Z @ 0x180342A60 (--_GNexusPolicyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?revoke_impl@?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@AEAAXUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@3@@Z @ 0x1802CB670 (-revoke_impl@-$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperienc.c)
 *     ??1?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x180335BEC (--1-$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Interna.c)
 */

void __fastcall NexusPolicyManager::~NexusPolicyManager(NexusPolicyManager *this)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v1; // rbx
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v1 = (NexusPolicyManager *)((char *)this + 40);
  *(_QWORD *)this = &NexusPolicyManager::`vftable';
  v3 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  v6 = v3;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 5, &v5);
  _revoke_impl___factory_event_revoker_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt___MP8type___abi_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__AEAAXUIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_3__Z(
    (__int64)v1,
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  if ( *((_QWORD *)this + 4) )
    UnregisterGamingFullScreenExperienceChangeNotification();
  __1__factory_event_revoker_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt___MP8type___abi_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ(v1);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
