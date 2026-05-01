/*
 * XREFs of ??1?$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180619EB4
 * Callers:
 *     ??1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18061A070 (--1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _lambda_aa297103944b40500ac49b04ee807ad8_::operator() @ 0x18061A160 (_lambda_aa297103944b40500ac49b04ee807ad8_--operator().c)
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::DiscoverabilityManager_::_1_::dtor$9 @ 0x1807022C7 (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--Discovera_ea_1807022C7.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??_9type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BFI@AA @ 0x1802DE090 (--_9type@-$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BFI@AA.c)
 *     ?get@?$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180359634 (-get@-$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

void __fastcall __1__event_revoker_UIDeviceWatcher_Enumeration_Devices_Windows_winrt___MP8type___abi_UIDeviceWatcher_Enumeration_Devices_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::get(a1, &v3);
    if ( *v2 )
       winrt::impl::abi<winrt::WindowsUdk::UI::StartScreen::ITileCollection,void>::type::`vcall'{88,{flat}}(*v2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
