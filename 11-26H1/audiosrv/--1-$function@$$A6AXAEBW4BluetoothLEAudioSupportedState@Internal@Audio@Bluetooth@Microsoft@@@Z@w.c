/*
 * XREFs of ??1?$function@$$A6AXAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z@wistd@@QEAA@XZ @ 0x1800A973C
 * Callers:
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x1800A96EC (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 *     ?SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ @ 0x1800D5EB0 (-SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800DB064 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@BluetoothBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800ED2BC (-RuntimeClassInitialize@BluetoothBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x18011BDE4 (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x18011E9C4 (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z @ 0x180151C00 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJPEBU_tlgProvider_t@@_N@Z.c)
 *     ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180156B64 (-PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV-$function@$$A6AJXZ@wistd@@PE.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x180157430 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     _CAudioStream::SetUpAudioEffectsWatcher_::_1_::dtor$0 @ 0x18016871D (_CAudioStream--SetUpAudioEffectsWatcher_--_1_--dtor$0.c)
 *     _AtmosCheck::PerformLicenseCheckHelperLegacy_::_1_::dtor$0 @ 0x18016C16E (_AtmosCheck--PerformLicenseCheckHelperLegacy_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>::~function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
