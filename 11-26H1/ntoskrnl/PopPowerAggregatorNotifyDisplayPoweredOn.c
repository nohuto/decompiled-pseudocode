/*
 * XREFs of PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140B48318
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140ABC8DC (PopPowerAggregatorScheduleWorker.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyDisplayPoweredOn(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  if ( (_DWORD)xmmword_140F0D8F8 == 2 )
  {
    LOBYTE(xmmword_140F0D908) = 1;
    PopPowerAggregatorScheduleWorker((__int64)PopPowerAggregatorContext);
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
}
