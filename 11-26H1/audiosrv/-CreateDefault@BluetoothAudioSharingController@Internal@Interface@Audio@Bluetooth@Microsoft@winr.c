/*
 * XREFs of ?CreateDefault@BluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@SA@XZ @ 0x1800EB5E4
 * Callers:
 *     _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800EA614 (_lambda_23a707cc6c78406526adb642245a01c2_--operator().c)
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800EA9D0 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 * Callees:
 *     ??$call@P6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingControllerStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingControllerStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingControllerStatics@456782@@Z@Z @ 0x1800E8E68 (--$call@P6A-AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 *     ??R_lambda_aa3be214326bf97ef71c4d714e593d62_@@QEBA@AEBUIBluetoothAudioSharingControllerStatics@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@@Z @ 0x1800EA96C (--R_lambda_aa3be214326bf97ef71c4d714e593d62_@@QEBA@AEBUIBluetoothAudioSharingControllerStatics@I.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController::CreateDefault(
        __int64 *a1)
{
  const struct winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics *(__fastcall *v3)(const struct winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics *, __int64); // [rsp+40h] [rbp+8h] BYREF

  v3 = (const struct winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics *(__fastcall *)(const struct winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingParametersStatics *, __int64))&qword_1801D6B08;
  _InterlockedIncrement64(&qword_1801D6B08);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingControllerStatics> )
  {
    _lambda_aa3be214326bf97ef71c4d714e593d62_::operator()(
      (__int64)a1,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingControllerStatics>);
    _InterlockedDecrement64(&qword_1801D6B08);
  }
  else
  {
    _InterlockedDecrement64(&qword_1801D6B08);
    v3 = _lambda_4d657e961041e624fe5d1ab9f4050edc_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController,winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingControllerStatics>::call<winrt::Microsoft::Bluetooth::Audio::Interface::Internal::BluetoothAudioSharingController (*)(winrt::Microsoft::Bluetooth::Audio::Interface::Internal::IBluetoothAudioSharingControllerStatics const &)>(
      a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
