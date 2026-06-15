/*
 * XREFs of ??1factory_count_guard@impl@winrt@@QEAA@XZ @ 0x1800EA14C
 * Callers:
 *     _winrt::impl::factory_cache_entry_winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters_winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics_::call_winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingParameters_(__cdecl_)(winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics_const_&)__::_1_::dtor$3 @ 0x180168F75 (_winrt--impl--factory_cache_entry_winrt--Microsoft--Bluetooth--Audio--Interface--In_ea_180168F75.c)
 *     __lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator()_::_1_::dtor$7 @ 0x180168FFC (__lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator()_--_1_--dtor$7.c)
 *     _winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController::CreateDefault_::_1_::dtor$1 @ 0x1801690C5 (_winrt--Microsoft--Bluetooth--Audio--Interface--Internal--BluetoothAudioSharingController--Creat.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::factory_count_guard::~factory_count_guard(volatile signed __int64 **this)
{
  _InterlockedDecrement64(*this);
}
