/*
 * XREFs of PopPowerAggregatorHandleIntent @ 0x1409FAB24
 * Callers:
 *     PopTriggerMonitorPowerEvent @ 0x1409FA938 (PopTriggerMonitorPowerEvent.c)
 *     PopDirectedDripsInitializeBroadcast @ 0x140AC7158 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409FABE4 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntent(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned int v8; // ebx

  v5 = (unsigned int)a4;
  v6 = a3;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  v8 = PopPowerAggregatorHandleIntentUnsafe(a1, a2, v6, v5);
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  return v8;
}
