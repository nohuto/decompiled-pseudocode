/*
 * XREFs of PopBsdFlushWorker @ 0x140B00A40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x140B00AD4 (PopBsdFlush.c)
 */

__int64 __fastcall PopBsdFlushWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, a2, a3, a4);
  PopBsdFlush(7LL);
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
  return PopOkayToQueueNextWorkItem((__int64)&stru_140F12D20.AbCompletedIoQoSBoostCount);
}
