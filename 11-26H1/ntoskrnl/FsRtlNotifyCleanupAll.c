/*
 * XREFs of FsRtlNotifyCleanupAll @ 0x140790910
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140A856F4 (FsRtlNotifyCleanupOneEntry.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyCleanupAll(PNOTIFY_SYNC NotifySync, PLIST_ENTRY NotifyList)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // r14

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
  }
  ++*((_DWORD *)NotifySync + 16);
  for ( i = NotifyList->Flink; i != NotifyList; i = Flink )
  {
    Flink = i->Flink;
    FsRtlNotifyCleanupOneEntry(&i[-2]);
  }
  if ( (*((_DWORD *)NotifySync + 16))-- == 1 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
