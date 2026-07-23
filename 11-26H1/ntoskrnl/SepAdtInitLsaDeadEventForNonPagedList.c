/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x14063DDEC
 * Callers:
 *     SepRmCommandServerThread @ 0x140AF3750 (SepRmCommandServerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&RtlpBootStatHandleLock.InGlobalForegroundList, &LockHandle);
  *(_QWORD *)&RtlpBootStatHandleLock.ThreadTimerDelay = a1;
  LOBYTE(a1) = RtlpBootStatHandleLock.ThreadListEntry.Blink != (struct _LIST_ENTRY *)&RtlpBootStatHandleLock.ThreadListEntry.Blink;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a1;
}
