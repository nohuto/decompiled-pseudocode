/*
 * XREFs of PopGetMostRecentWakeInfo @ 0x1404F9218
 * Callers:
 *     PopQueryMostRecentWakeSourceAttributes @ 0x1407CF840 (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407D6B00 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x140B62680 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopIsMostRecentWakeAttended @ 0x140C0C3F8 (PopIsMostRecentWakeAttended.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 */

__int64 PopGetMostRecentWakeInfo()
{
  __int64 v0; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F11D08.Teb, &LockHandle);
  if ( LODWORD(stru_140F11D08.Queue) )
  {
    v0 = *(_QWORD *)&stru_140F11D08.Timer.Header.Lock;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&stru_140F11D08.Timer.Header.Lock + 16LL));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v0;
}
