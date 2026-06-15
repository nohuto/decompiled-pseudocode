/*
 * XREFs of ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800B85CC
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x1800A9964 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4F.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800B6F6C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800B7768 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ??$InternalCallback@W4_PO_STANDBY_AUDIO_POLICY@@@?$wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@QEAAXPEBW4_PO_STANDBY_AUDIO_POLICY@@K@Z @ 0x1800D68CC (--$InternalCallback@W4_PO_STANDBY_AUDIO_POLICY@@@-$wnf_subscription_state@W4_PO_STANDBY_AUDIO_PO.c)
 *     ??$InternalCallback@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@?$wnf_subscription_state@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@details@wil@@QEAAXPEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@K@Z @ 0x1800E8568 (--$InternalCallback@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@-$wnf_.c)
 *     ??$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@QEAAXPEBW4ShellState@Holographic@Shell@Internal@Windows@@K@Z @ 0x18015007C (--$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@-$wnf_subscription_state@W.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFastImmediate_Unexpected(wil::details::in1diag3 *this)
{
  __fastfail(7u);
}
