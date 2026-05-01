/*
 * XREFs of ??1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18061A070
 * Callers:
 *     ??1?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180619F58 (--1-$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 *     ??_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18061A6C8 (--_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager____::_1_::dtor$1 @ 0x1807021E8 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_1807021E8.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA@XZ @ 0x1800CB824 (--1-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@23@.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800DB40C (--1SmartCookie@@QEAA@XZ.c)
 *     ??1?$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x180342084 (--1-$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@-$abi@UIDeviceWat.c)
 *     ??1?$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180619EB4 (--1-$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@-$ab_ea_180619EB4.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::~DiscoverabilityManager(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::~deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>((__int64 *)this + 57);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 440));
  __1__event_revoker_UIDeviceWatcher_Enumeration_Devices_Windows_winrt___MP8type___abi_UIDeviceWatcher_Enumeration_Devices_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 53);
  __1__event_revoker_UIDeviceWatcher_Enumeration_Devices_Windows_winrt___MP8type___abi_UIDeviceWatcher_Enumeration_Devices_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 51);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 400));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 392));
  SmartCookie::~SmartCookie((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 256));
  SmartCookie::~SmartCookie((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 128));
  if ( *((_QWORD *)this + 15) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 15);
  if ( *((_QWORD *)this + 14) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 14);
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 24));
}
