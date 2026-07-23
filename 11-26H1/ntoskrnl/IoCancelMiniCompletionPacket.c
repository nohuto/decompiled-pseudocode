/*
 * XREFs of IoCancelMiniCompletionPacket @ 0x1405CE180
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeRemoveQueueEntry @ 0x1403B4810 (KeRemoveQueueEntry.c)
 */

char __fastcall IoCancelMiniCompletionPacket(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
  LOBYTE(a2) = KeRemoveQueueEntry(a1, a2, v4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (char)a2;
}
