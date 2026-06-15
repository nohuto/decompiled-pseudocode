/*
 * XREFs of ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800CA468
 * Callers:
 *     ??$InternalCallback@G@?$wnf_array_subscription_state@G@details@wil@@QEAAXPEBGK@Z @ 0x1800AB4D4 (--$InternalCallback@G@-$wnf_array_subscription_state@G@details@wil@@QEAAXPEBGK@Z.c)
 *     ??$InternalCallback@W4_PO_STANDBY_AUDIO_POLICY@@@?$wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@QEAAXPEBW4_PO_STANDBY_AUDIO_POLICY@@K@Z @ 0x1800D68CC (--$InternalCallback@W4_PO_STANDBY_AUDIO_POLICY@@@-$wnf_subscription_state@W4_PO_STANDBY_AUDIO_PO.c)
 *     ??$InternalCallback@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@?$wnf_subscription_state@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@details@wil@@QEAAXPEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@K@Z @ 0x1800E8568 (--$InternalCallback@W4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@-$wnf_.c)
 *     ??$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@QEAAXPEBW4ShellState@Holographic@Shell@Internal@Windows@@K@Z @ 0x18015007C (--$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@-$wnf_subscription_state@W.c)
 *     ??$wnf_query_nothrow@W4ShellState@Holographic@Shell@Internal@Windows@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4ShellState@Holographic@Shell@Internal@Windows@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180150868 (--$wnf_query_nothrow@W4ShellState@Holographic@Shell@Internal@Windows@@@wil@@YAJAEBU_WNF_STATE_NA.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1800C328C (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_HrMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        unsigned __int64 a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-48h]
  wil::details *v9; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v6 = (unsigned int)a4;
  LODWORD(v9) = (_DWORD)a4;
  wil::details::ReportFailure_HrMsg<2>((__int64)this, a2, a3, (__int64)a4, v8, retaddr, v9, a5, (char *)&a6);
  return v6;
}
