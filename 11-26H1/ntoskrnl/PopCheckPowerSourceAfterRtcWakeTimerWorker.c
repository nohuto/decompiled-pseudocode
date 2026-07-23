/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140C03500
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     NtInitiatePowerAction @ 0x1409F2FC0 (NtInitiatePowerAction.c)
 *     PopCurrentPowerStatePrecise @ 0x140AAF28C (PopCurrentPowerStatePrecise.c)
 *     PopQueryPowerSettingUlong @ 0x140B43720 (PopQueryPowerSettingUlong.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise((__int64)&v1, 0LL);
    if ( !(_BYTE)v1 )
    {
      v2 = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, &v3, &v2);
      if ( !v2 )
        NtInitiatePowerAction(SystemAction, LightestSystemState, 0x80000000, 1u);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140F0FC08);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
