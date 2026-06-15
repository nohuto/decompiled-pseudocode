/*
 * XREFs of ??1Token@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ @ 0x1800C1740
 * Callers:
 *     ??_GToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAAPEAXI@Z @ 0x1800C1990 (--_GToken@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800AE644 (--1-$com_ptr_t@UIAudioPumpDspResourceTrackerToken@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::Token::~Token(__int64 a1)
{
  wil::com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>::~com_ptr_t<IAudioPumpDspResourceTrackerToken,wil::err_returncode_policy>((__int64 *)(a1 + 48));
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioModeEffectsWatcher>(a1);
}
