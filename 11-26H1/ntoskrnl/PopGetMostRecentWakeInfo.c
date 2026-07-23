/*
 * XREFs of PopGetMostRecentWakeInfo @ 0x1404F2828
 * Callers:
 *     PopQueryMostRecentWakeSourceAttributes @ 0x1407D28E0 (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407D9C70 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x140B65720 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopIsMostRecentWakeAttended @ 0x140C12608 (PopIsMostRecentWakeAttended.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

__int64 PopGetMostRecentWakeInfo()
{
  __int64 v0; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( PopWakeInfoCount )
  {
    v0 = qword_140F12208;
    _InterlockedIncrement((volatile signed __int32 *)(qword_140F12208 + 16));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v0;
}
