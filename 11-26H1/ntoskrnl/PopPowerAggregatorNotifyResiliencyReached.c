/*
 * XREFs of PopPowerAggregatorNotifyResiliencyReached @ 0x1407D6D8C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyResiliencyReached(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  if ( LODWORD(PopPowerAggregatorLock.QuantumTarget) == 1 )
    BYTE1(PopPowerAggregatorLock.StackBase) = 0;
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
