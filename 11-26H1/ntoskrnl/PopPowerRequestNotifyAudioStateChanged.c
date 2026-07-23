/*
 * XREFs of PopPowerRequestNotifyAudioStateChanged @ 0x1409C2104
 * Callers:
 *     PopWnfAudioCallback @ 0x1409C24C0 (PopWnfAudioCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1404EDF18 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409C2150 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

__int64 __fastcall PopPowerRequestNotifyAudioStateChanged(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, a2, a3, a4);
  if ( BYTE2(stru_140F12EA0.Spare35[1]) != a1 )
  {
    BYTE2(stru_140F12EA0.Spare35[1]) = a1;
    PopPowerRequestStatsNotifyScenarioStateChange(0, a1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  return PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
}
