/*
 * XREFs of PopBsdFlushWorker @ 0x140B02770
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x140B02804 (PopBsdFlush.c)
 */

__int64 __fastcall PopBsdFlushWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  PopBsdFlush(7LL);
  PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
  return PopOkayToQueueNextWorkItem((__int64)&PopBsdFlushWorkItem);
}
