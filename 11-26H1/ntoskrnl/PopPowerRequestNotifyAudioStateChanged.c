/*
 * XREFs of PopPowerRequestNotifyAudioStateChanged @ 0x140946794
 * Callers:
 *     PopWnfAudioCallback @ 0x140946B50 (PopWnfAudioCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1404F4938 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409467E0 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

__int64 __fastcall PopPowerRequestNotifyAudioStateChanged(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20, a2, a3, a4);
  if ( BYTE2(stru_140F12D20.StateSaveArea) != a1 )
  {
    BYTE2(stru_140F12D20.StateSaveArea) = a1;
    PopPowerRequestStatsNotifyScenarioStateChange(0, a1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  return PopReleaseRwLock(&stru_140F12D20);
}
