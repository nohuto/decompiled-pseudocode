/*
 * XREFs of PopThermalCsExit @ 0x140607B18
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140434F64 (PopThermalStandbyEndTracking.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 *     PopThermalStandbyNotify @ 0x140607BF4 (PopThermalStandbyNotify.c)
 */

char __fastcall PopThermalCsExit(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F0F620.SchedulerAssistPriorityFloor, a2, a3, a4);
  PopThermalStandbyEndTracking(1LL, v4, v5);
  LOBYTE(stru_140F0F620.KernelShadowStackInitial) = 1;
  if ( HIDWORD(stru_140F0F620.KernelShadowStackInitial) )
  {
    LOBYTE(v6) = 1;
    PopThermalStandbyNotify(v6);
    LOWORD(stru_140F0F620.KernelShadowStackInitial) = 256;
  }
  else if ( BYTE1(stru_140F0F620.KernelShadowStackInitial) )
  {
    PopThermalStandbyNotify(0LL);
    BYTE1(stru_140F0F620.KernelShadowStackInitial) = 0;
  }
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.SchedulerAssistPriorityFloor);
  return PopQueueWorkItem((__int64)&stru_140F0F620.SchedulerAssist, DelayedWorkQueue);
}
