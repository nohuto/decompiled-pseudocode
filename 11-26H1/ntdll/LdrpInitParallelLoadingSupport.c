/*
 * XREFs of LdrpInitParallelLoadingSupport @ 0x1800FB294
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 */

__int64 LdrpInitParallelLoadingSupport()
{
  qword_1801CA6F8 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  qword_1801CA678 = (__int64)&LdrpRetryQueue;
  LdrpRetryQueue = (__int64)&LdrpRetryQueue;
  RtlInitializeCriticalSectionEx(&LdrpWorkQueueLock, 0, 0);
  return LdrpCreateLoaderEvents();
}
