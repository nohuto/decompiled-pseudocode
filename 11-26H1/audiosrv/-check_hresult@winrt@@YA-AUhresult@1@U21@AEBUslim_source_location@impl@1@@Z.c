/*
 * XREFs of ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800EDCC8
 * Callers:
 *     ??$call@P6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingControllerStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingControllerStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingControllerStatics@456782@@Z@Z @ 0x1800E8E68 (--$call@P6A-AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 *     ??$call@P6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingParametersStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingParametersStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingParametersStatics@456782@@Z@Z @ 0x1800E8FC8 (--$call@P6A-AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 *     _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800EA614 (_lambda_23a707cc6c78406526adb642245a01c2_--operator().c)
 *     ??R_lambda_aa3be214326bf97ef71c4d714e593d62_@@QEBA@AEBUIBluetoothAudioSharingControllerStatics@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@@Z @ 0x1800EA96C (--R_lambda_aa3be214326bf97ef71c4d714e593d62_@@QEBA@AEBUIBluetoothAudioSharingControllerStatics@I.c)
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800EA9D0 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 *     ?CurrentSession@?$consume_Microsoft_Bluetooth_Audio_Interface_Internal_IBluetoothAudioSharingController@UIBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800EB65C (-CurrentSession@-$consume_Microsoft_Bluetooth_Audio_Interface_Internal_IBluetoothAudioSharingCon.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800EE990 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

int *__fastcall winrt::check_hresult(int *a1, int a2, __int64 a3)
{
  if ( a2 < 0 )
    winrt::throw_hresult((unsigned int)a2, a3);
  *a1 = a2;
  return a1;
}
