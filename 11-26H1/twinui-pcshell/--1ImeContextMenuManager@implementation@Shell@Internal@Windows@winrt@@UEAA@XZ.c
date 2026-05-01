/*
 * XREFs of ??1ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18063AD2C
 * Callers:
 *     ??1?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x18063ACC0 (--1-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??_EImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18063ADCC (--_EImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 *     _wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager_::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager__::_1_::dtor$0 @ 0x1806D8266 (_wil--details--module_count_wrapper_winrt--Windows--Internal--Shell--implementation_ea_1806D8266.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x1801F9A5C (--1-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_1801F9A5C.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::~ImeContextMenuManager(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *this)
{
  __1__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *)((char *)this + 104));
  if ( *((_QWORD *)this + 12) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 12);
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *)((char *)this + 8));
}
