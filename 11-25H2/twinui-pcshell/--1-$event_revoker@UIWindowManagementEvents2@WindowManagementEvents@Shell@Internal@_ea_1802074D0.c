/*
 * XREFs of ??1?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1802074D0
 * Callers:
 *     ??1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180563A18 (--1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1SnapMigrationHandler@@UEAA@XZ @ 0x18057A5F0 (--1SnapMigrationHandler@@UEAA@XZ.c)
 *     ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@Z @ 0x180592BF0 (--0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@PEAUIImmersiveMonitorManager@@@Z.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$19 @ 0x1806AF3C2 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1806AF3C2.c)
 *     _SnapMigrationHandler::SnapMigrationHandler_::_1_::dtor$1 @ 0x1806D1C82 (_SnapMigrationHandler--SnapMigrationHandler_--_1_--dtor$1.c)
 * Callees:
 *     ?get@?$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1801D2B18 (-get@-$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@.c)
 *     ?revoke_impl@?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@AEAAXUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@3@@Z @ 0x1802CB670 (-revoke_impl@-$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperienc.c)
 */

void __fastcall __1__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::get(
           a1,
           &v3);
    _revoke_impl___factory_event_revoker_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt___MP8type___abi_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__AEAAXUIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_3__Z(
      a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
