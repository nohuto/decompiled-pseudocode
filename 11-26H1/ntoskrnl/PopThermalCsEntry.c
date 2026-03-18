/*
 * XREFs of PopThermalCsEntry @ 0x1404355E4
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x140434F64 (PopThermalStandbyEndTracking.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalStandbyInitiated @ 0x14060A128 (PopTraceThermalStandbyInitiated.c)
 */

void __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquireRwLockExclusive(&stru_140F0F620.SchedulerAssistPriorityFloor);
  LOBYTE(stru_140F0F620.KernelShadowStackInitial) = 0;
  if ( a1 )
  {
    BYTE5(stru_140F0F620.KernelShadowStackBase) = 1;
    LOBYTE(v3) = BYTE4(stru_140F0F620.KernelShadowStackBase);
    stru_140F0F620.KernelShadowStackLimit.AllFields = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v3);
  }
  if ( !HIDWORD(stru_140F0F620.KernelShadowStackInitial) )
    PopThermalStandbyEndTracking(0LL, v2, v4);
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.SchedulerAssistPriorityFloor);
  if ( _InterlockedIncrement((volatile signed __int32 *)&stru_140F0F620.UserWaitTime) == 1 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F0F620.SchedulerAssist, DelayedWorkQueue);
}
