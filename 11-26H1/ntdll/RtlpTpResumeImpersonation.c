/*
 * XREFs of RtlpTpResumeImpersonation @ 0x1800397B8
 * Callers:
 *     RtlRegisterWait @ 0x180039430 (RtlRegisterWait.c)
 *     RtlQueueWorkItem @ 0x1800867E0 (RtlQueueWorkItem.c)
 *     RtlCreateTimer @ 0x180087900 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x180087CA0 (RtlDeleteTimer.c)
 *     RtlSetIoCompletionCallback @ 0x1800B4830 (RtlSetIoCompletionCallback.c)
 *     RtlUpdateTimer @ 0x1800F7F10 (RtlUpdateTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FB3F0 (RtlDeleteTimerQueueEx.c)
 *     RtlCreateTimerQueue @ 0x1800FD330 (RtlCreateTimerQueue.c)
 *     RtlDeregisterWaitEx @ 0x180108160 (RtlDeregisterWaitEx.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

NTSTATUS __fastcall RtlpTpResumeImpersonation(void *a1)
{
  NTSTATUS result; // eax
  HANDLE ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    ThreadInformation = a1;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    return NtClose(ThreadInformation);
  }
  return result;
}
