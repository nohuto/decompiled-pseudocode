/*
 * XREFs of PopPowerAggregatorGetCurrentTargetState @ 0x1407D9BE8
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140776E40 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorGetCurrentTargetState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int128 v5; // xmm1
  __int64 v6; // xmm0_8

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  v5 = xmmword_140F0D8E0;
  *(_OWORD *)a1 = xmmword_140F0D8D0;
  v6 = qword_140F0D8F0;
  *(_OWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 32) = v6;
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
}
