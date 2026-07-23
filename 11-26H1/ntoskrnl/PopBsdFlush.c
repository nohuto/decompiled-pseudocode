/*
 * XREFs of PopBsdFlush @ 0x140B02804
 * Callers:
 *     PopBsdHandleRequest @ 0x1404DEFD0 (PopBsdHandleRequest.c)
 *     PopBsdFlushWorker @ 0x140B02770 (PopBsdFlushWorker.c)
 *     PopBsdUpdateWorker @ 0x140B027B0 (PopBsdUpdateWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopWriteBsdPoInfo @ 0x140425088 (PopWriteBsdPoInfo.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

LONG __fastcall PopBsdFlush(char a1)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = 0LL;
  if ( !PopBsdFlushInactiveEvent.Header.SignalState
    || KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, &Timeout) < 0 )
  {
    PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
    KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, v3, v4, v5);
  }
  if ( (a1 & 1) != 0 )
    PopWriteBsdPoInfo(RtlBsdPowerTransition);
  if ( (a1 & 2) != 0 )
    PopWriteBsdPoInfo(RtlBsdPowerTransitionExtension);
  if ( (a1 & 4) != 0 )
    PopWriteBsdPoInfo(RtlBsdItemPowerButtonPressInfo);
  return KeSetEvent(&PopBsdFlushInactiveEvent, 0, 0);
}
