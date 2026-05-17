/*
 * XREFs of LdrpInitParallelLoadingSupport @ 0x1800FBB44
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 */

__int64 LdrpInitParallelLoadingSupport()
{
  qword_1801CB698 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  qword_1801CB648 = (__int64)&LdrpRetryQueue;
  LdrpRetryQueue = (__int64)&LdrpRetryQueue;
  RtlInitializeCriticalSectionEx((__int64)&LdrpWorkQueueLock, 0, 0);
  return LdrpCreateLoaderEvents();
}
