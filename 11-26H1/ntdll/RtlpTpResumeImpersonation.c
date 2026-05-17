/*
 * XREFs of RtlpTpResumeImpersonation @ 0x18004F238
 * Callers:
 *     RtlRegisterWait @ 0x18004EEB0 (RtlRegisterWait.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlCreateTimer @ 0x1800674B0 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x180067850 (RtlDeleteTimer.c)
 *     RtlSetIoCompletionCallback @ 0x1800B7310 (RtlSetIoCompletionCallback.c)
 *     RtlUpdateTimer @ 0x1800F8740 (RtlUpdateTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FBCA0 (RtlDeleteTimerQueueEx.c)
 *     RtlCreateTimerQueue @ 0x1800FDBE0 (RtlCreateTimerQueue.c)
 *     RtlDeregisterWaitEx @ 0x1801087C0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

NTSTATUS __fastcall RtlpTpResumeImpersonation(void *a1)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Handle = a1;
    NtSetInformationThread(-2LL, 5LL, &Handle, 8LL);
    return NtClose(Handle);
  }
  return result;
}
