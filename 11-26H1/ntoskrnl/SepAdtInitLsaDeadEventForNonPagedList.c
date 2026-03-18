/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x14063AD24
 * Callers:
 *     SepRmCommandServerThread @ 0x140AF0B10 (SepRmCommandServerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&RtlpBootStatHandleLock.PriorityFloorCounts[24], &LockHandle);
  RtlpBootStatHandleLock.OtherOperationCount = a1;
  LOBYTE(a1) = *(_QWORD *)&RtlpBootStatHandleLock.SchedulerApcFill5[80] != (_QWORD)&RtlpBootStatHandleLock.SchedulerApcFill5[80];
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a1;
}
