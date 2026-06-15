/*
 * XREFs of ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800E9D94
 * Callers:
 *     ??$call@P6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingControllerStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingControllerStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingControllerStatics@456782@@Z@Z @ 0x1800E8E68 (--$call@P6A-AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 *     ??$call@P6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingParametersStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingParametersStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingParametersStatics@456782@@Z@Z @ 0x1800E8FC8 (--$call@P6A-AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::param::hstring::hstring(__int64 a1, __int64 *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = *((unsigned int *)a2 + 2);
  v3 = 0LL;
  if ( (_DWORD)v2 )
  {
    v4 = *a2;
    if ( *(_WORD *)(v4 + 2 * v2) )
      abort();
    *(_DWORD *)(a1 + 8) = 1;
    v3 = a1 + 8;
    *(_DWORD *)(a1 + 12) = v2;
    *(_QWORD *)(a1 + 24) = v4;
  }
  *(_QWORD *)a1 = v3;
  return a1;
}
