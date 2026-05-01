/*
 * XREFs of ??1?$event_revoker@UIGattCharacteristic@GenericAttributeProfile@Bluetooth@Devices@Windows@winrt@@$MP8type@?$abi@UIGattCharacteristic@GenericAttributeProfile@Bluetooth@Devices@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKI@AA@impl@winrt@@QEAA@XZ @ 0x18034213C
 * Callers:
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x180342624 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??_9type@?$abi@UIGattCharacteristic@GenericAttributeProfile@Bluetooth@Devices@Windows@winrt@@X@impl@winrt@@$BKI@AA @ 0x180344D9C (--_9type@-$abi@UIGattCharacteristic@GenericAttributeProfile@Bluetooth@Devices@Windows@winrt@@X@i.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __1__event_revoker_UIGattCharacteristic_GenericAttributeProfile_Bluetooth_Devices_Windows_winrt___MP8type___abi_UIGattCharacteristic_GenericAttributeProfile_Bluetooth_Devices_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>,
      &v3);
    if ( v3 )
       winrt::impl::abi<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic,void>::type::`vcall'{168,{flat}}(
        v3,
        a1[1]);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
