/*
 * XREFs of CmUnlockHive @ 0x1408CECB0
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x140478434 (CmpWaitForLateUnloadWorker.c)
 *     CmpFlushNotify @ 0x1408C07F8 (CmpFlushNotify.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408CB8AC (CmpDoQueueLateUnloadWorker.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140A66980 (CmpCloseKeyObject.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall CmUnlockHive(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 1680;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1680));
  KeAbPostRelease(v1);
}
