/*
 * XREFs of ?RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180670888
 * Callers:
 *     ?GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA?AU13456@XZ @ 0x1806705D4 (-GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA-AU.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$get_weak@UTabTipAdapter@KeyboardHosting@@@?$root_implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@impl@winrt@@IEAA?AU?$weak_ref@UTabTipAdapter@KeyboardHosting@@@2@XZ @ 0x180477A74 (--$get_weak@UTabTipAdapter@KeyboardHosting@@@-$root_implements@UTabTipAdapter@KeyboardHosting@@U.c)
 *     ??1?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x180649AC4 (--1-$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@wi_ea_180649AC4.c)
 *     ??$?0UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUIInspectable@Foundation@45@@Z@NetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@QEAA@$$QEAU?$weak_ref@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@4@$$QEAP8NetworkConnectionUtils@implementation@Shell@Internal@34@EAAXAEBUIInspectable@Foundation@34@@Z@Z @ 0x18066FE78 (--$-0UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUIInsp.c)
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@Uauto_revoke_t@5@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x180670780 (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@Uauto_revoke_.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::RegisterEvents(
        winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *this)
{
  char v2; // dl
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7[2]; // [rsp+30h] [rbp-10h] BYREF
  void (__fastcall **v8)(_QWORD, __int64 *, __int64 *); // [rsp+50h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  winrt::impl::root_implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::get_weak<KeyboardHosting::TabTipAdapter>(
    (volatile signed __int64 *)this,
    &v9);
  *(_QWORD *)&v6 = winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::OnNetworkStatusChanged;
  DWORD2(v6) = 0;
  winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(
    &v8,
    &v9,
    &v6);
  v3 = winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged(v7, v2, &v8);
  v4 = *v3;
  *v3 = 0LL;
  *((_QWORD *)&v6 + 1) = v3[1];
  *(_QWORD *)&v6 = 0LL;
  v10 = v4;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v6, (__int64 *)this + 6);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 6, &v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  v5 = *((_QWORD *)&v6 + 1);
  *((_QWORD *)&v6 + 1) = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v5;
  __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v7);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
}
