/*
 * XREFs of LdrpCompleteProcessCloning @ 0x18015DCB8
 * Callers:
 *     RtlCloneUserProcess @ 0x18015C500 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015C810 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015C9C0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18007C860 (LdrpReleaseLoaderLock.c)
 *     LdrpCreateLoaderEvents @ 0x1800FB2E4 (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 */

NTSTATUS __fastcall LdrpCompleteProcessCloning(int a1)
{
  NTSTATUS LoaderEvents; // eax
  __int64 v2; // rcx

  if ( a1 )
  {
    LdrpWorkQueueLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpWorkQueueLock.RecursionCount = 1;
    LdrpWorkQueueLock.LockCount = -2;
    LdrpWorkQueueLock.LockSemaphore = 0LL;
    LdrpLoaderLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
    LdrpLoaderLock.LockCount = -2;
    LdrpLoaderLock.RecursionCount = 1;
    LdrpLoaderLock.LockSemaphore = 0LL;
    LoaderEvents = LdrpCreateLoaderEvents();
    if ( LoaderEvents < 0 )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, LoaderEvents);
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v2, 13, 0);
  return LdrpDropLastInProgressCount();
}
