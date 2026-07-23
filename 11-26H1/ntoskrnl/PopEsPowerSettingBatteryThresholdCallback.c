/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x140B53450
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x1409C34D4 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // ebx

  v5 = -1073741811;
  if ( a2 && (_DWORD)a3 == 4 )
  {
    v5 = 0;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock, (__int64)a2, a3, a4);
    LODWORD(PpmIdlePolicyLock.GlobalForegroundListEntry.Flink) = *a2;
    if ( LODWORD(PpmIdlePolicyLock.GlobalForegroundListEntry.Flink) > 0x64 )
      LODWORD(PpmIdlePolicyLock.GlobalForegroundListEntry.Flink) = 100;
    PopReleaseRwLock((struct _KTHREAD *)&PopEsLock);
    PopEsWorkItemSchedule(2);
  }
  return v5;
}
