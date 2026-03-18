/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140B462E8
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140ABB41C (PopPowerAggregatorScheduleWorker.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyDisplayPoweredOn(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  if ( LODWORD(PopPowerAggregatorLock.CycleTime) == 2 )
  {
    LOBYTE(PopPowerAggregatorLock.KernelStack) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorLock.Header.WaitListHead.Blink);
  }
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
