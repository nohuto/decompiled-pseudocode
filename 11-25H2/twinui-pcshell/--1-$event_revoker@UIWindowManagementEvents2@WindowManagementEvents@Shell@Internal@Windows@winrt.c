/*
 * XREFs of ??1?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180207488
 * Callers:
 *     ??1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180563A18 (--1TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$17 @ 0x1806AF390 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1806AF390.c)
 * Callees:
 *     ?revoke_impl@?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@AEAAXUITileCollection@StartScreen@UI@WindowsUdk@3@@Z @ 0x18010180C (-revoke_impl@-$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UI.c)
 *     ?get@?$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1801D2B18 (-get@-$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@.c)
 */

void __fastcall __1__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::get(
                                                                                               a1,
                                                                                               &v3);
    _revoke_impl___event_revoker_UITileCollection_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITileCollection_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__AEAAXUITileCollection_StartScreen_UI_WindowsUdk_3__Z(
      (__int64)a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
