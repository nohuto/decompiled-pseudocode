/*
 * XREFs of PopBsdUpdateWorker @ 0x140B027B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdFlush @ 0x140B02804 (PopBsdFlush.c)
 */

__int64 __fastcall PopBsdUpdateWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // eax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, a2, a3, a4);
  while ( 1 )
  {
    v4 = PopBsdUpdateRequests;
    PopBsdUpdateRequests = 0;
    if ( !v4 )
      break;
    PopBsdFlush(v4);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopBsdUpdateWorkItem);
  return PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
}
