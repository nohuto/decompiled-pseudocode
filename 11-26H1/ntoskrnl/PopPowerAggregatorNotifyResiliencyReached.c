/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x1407D9EBC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyResiliencyReached(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  if ( (_DWORD)xmmword_140F0D8D0 == 1 )
    BYTE9(xmmword_140F0D8E0) = 0;
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
}
