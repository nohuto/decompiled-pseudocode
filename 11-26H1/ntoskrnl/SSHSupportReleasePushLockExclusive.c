/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x1404AC97C
 * Callers:
 *     SshpFreeDataEntry @ 0x1407E8E24 (SshpFreeDataEntry.c)
 *     SshSessionManagerFlushBuffers @ 0x1407E8EFC (SshSessionManagerFlushBuffers.c)
 *     SshpSessionManagerOpenControlTrace @ 0x1407E959C (SshpSessionManagerOpenControlTrace.c)
 *     SshpAlpcProcessAlpcMessage @ 0x1407EA404 (SshpAlpcProcessAlpcMessage.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A90440 (SleepstudyHelperBuildBlocker.c)
 *     SshpPurgeBlockersWorker @ 0x140AAB2F0 (SshpPurgeBlockersWorker.c)
 *     SshNotifySystemSessionChange @ 0x140ADC854 (SshNotifySystemSessionChange.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140AFE4F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     SshpTracingRundownBlockerState @ 0x140B15904 (SshpTracingRundownBlockerState.c)
 *     SshpTracingRundownCollectionState @ 0x140B15A34 (SshpTracingRundownCollectionState.c)
 *     SshpSessionManagerSendControlEvent @ 0x140B31D28 (SshpSessionManagerSendControlEvent.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140B66F90 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall SSHSupportReleasePushLockExclusive(struct _KTHREAD *a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
}
