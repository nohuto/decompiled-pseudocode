/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140BFD500
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 *     NtInitiatePowerAction @ 0x140A37400 (NtInitiatePowerAction.c)
 *     PopCurrentPowerStatePrecise @ 0x140AB129C (PopCurrentPowerStatePrecise.c)
 *     PopQueryPowerSettingUlong @ 0x140B41710 (PopQueryPowerSettingUlong.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( LOBYTE(stru_140F10070.WaitBlockList) )
  {
    PopCurrentPowerStatePrecise((__int64)&v1, 0LL);
    if ( !(_BYTE)v1 )
    {
      v2 = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, &v3, &v2);
      if ( !v2 )
        NtInitiatePowerAction((int)stru_140F10070.WpsFeedback, HIDWORD(stru_140F10070.WpsFeedback), 0x80000000, 1);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&stru_140F0F620.UserAffinity);
  return KeSetEvent((PRKEVENT)&stru_140F0F620.WaitBlockFill11[64], 0, 0);
}
