/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x1404B32FC
 * Callers:
 *     SshpFreeDataEntry @ 0x1407E3AD8 (SshpFreeDataEntry.c)
 *     SshSessionManagerFlushBuffers @ 0x1407E3BB0 (SshSessionManagerFlushBuffers.c)
 *     SshpSessionManagerOpenControlTrace @ 0x1407E4148 (SshpSessionManagerOpenControlTrace.c)
 *     SshpAlpcProcessAlpcMessage @ 0x1407E48A4 (SshpAlpcProcessAlpcMessage.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A89550 (SleepstudyHelperBuildBlocker.c)
 *     SshpPurgeBlockersWorker @ 0x140AAD230 (SshpPurgeBlockersWorker.c)
 *     SshNotifySystemSessionChange @ 0x140ADF00C (SshNotifySystemSessionChange.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFC980 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     SshpTracingRundownBlockerState @ 0x140B13E44 (SshpTracingRundownBlockerState.c)
 *     SshpTracingRundownCollectionState @ 0x140B13F74 (SshpTracingRundownCollectionState.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B2FF48 (SshpSessionManagerSendControlEvent.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140B63EF0 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall SSHSupportReleasePushLockExclusive(struct _KTHREAD *a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
}
