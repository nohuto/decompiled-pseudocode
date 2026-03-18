/*
 * XREFs of PopPowerAggregatorGetCurrentTargetState @ 0x1407D6A7C
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140773E40 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorGetCurrentTargetState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int128 v5; // xmm1
  unsigned __int64 ThreadLock; // xmm0_8

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  v5 = *(_OWORD *)&PopPowerAggregatorLock.StackLimit;
  *(_OWORD *)a1 = *(_OWORD *)&PopPowerAggregatorLock.QuantumTarget;
  ThreadLock = PopPowerAggregatorLock.ThreadLock;
  *(_OWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 32) = ThreadLock;
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
