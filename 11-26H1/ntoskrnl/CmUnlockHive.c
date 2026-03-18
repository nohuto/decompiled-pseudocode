/*
 * XREFs of CmUnlockHive @ 0x1408C86FC
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x14047EAC4 (CmpWaitForLateUnloadWorker.c)
 *     CmpFlushNotify @ 0x1408BA228 (CmpFlushNotify.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408C52DC (CmpDoQueueLateUnloadWorker.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140A59A10 (CmpCloseKeyObject.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall CmUnlockHive(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 1680;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1680));
  KeAbPostRelease(v1);
}
