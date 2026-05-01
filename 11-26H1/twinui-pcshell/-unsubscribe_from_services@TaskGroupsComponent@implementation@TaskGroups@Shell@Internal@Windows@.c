/*
 * XREFs of ?unsubscribe_from_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801C7060
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800250B4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180026FEC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?revoke@?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x1801C7118 (-revoke@-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@.c)
 *     ?get@?$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1801C7194 (-get@-$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@.c)
 *     ?revoke@?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEI@AA@impl@winrt@@QEAAXXZ @ 0x1801C71E4 (-revoke@-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Inte_ea_1801C71E4.c)
 *     ?revoke@?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAAXXZ @ 0x1801C7260 (-revoke@-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Inte_ea_1801C7260.c)
 *     ?revoke_impl@?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@AEAAXUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@3@@Z @ 0x1802C2ED8 (-revoke_impl@-$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperienc.c)
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this,
        struct IServiceProvider *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  SmartCookie::Unregister((winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *)((char *)this + 160));
  _revoke___event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAAXXZ((char *)this + 504);
  _revoke___event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAAXXZ((char *)this + 520);
  _revoke___event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEI_AA_impl_winrt__QEAAXXZ((char *)this + 536);
  v3 = (__int64 *)((char *)this + 552);
  v6 = 0LL;
  v4 = *((_QWORD *)this + 69);
  v7 = v4;
  *v3 = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(v3, &v6);
  v5 = winrt::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::get(&v7, &v8);
  _revoke_impl___factory_event_revoker_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt___MP8type___abi_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__AEAAXUIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_3__Z(
    v3,
    v5);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
}
