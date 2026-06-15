/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_7cbdedfb44f57d0b0260c43b6dda9a65_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800E8540
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@?$wnf_subscription_state@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@details@wil@@QEAAXPEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@K@Z @ 0x1800E8568 (--$InternalCallback@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@-$wnf_.c)
 */

__int64 __fastcall _lambda_7cbdedfb44f57d0b0260c43b6dda9a65_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState>::InternalCallback<enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState>(
      a4,
      a5,
      a6);
  return 0LL;
}
