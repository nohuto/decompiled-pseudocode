/*
 * XREFs of RtlDeregisterWaitEx @ 0x180108160
 * Callers:
 *     RtlDeregisterWait @ 0x180108150 (RtlDeregisterWait.c)
 * Callees:
 *     TpWaitForWait @ 0x1800153F0 (TpWaitForWait.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x1800397B8 (RtlpTpResumeImpersonation.c)
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     RtlpTpRevertCapture @ 0x180087B90 (RtlpTpRevertCapture.c)
 *     TpReleaseWait @ 0x180090840 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x1800D9C9C (TpWaitOutstandingCallbackCount.c)
 *     RtlpTpWaitRundown @ 0x1800DAA10 (RtlpTpWaitRundown.c)
 */

NTSTATUS __cdecl RtlDeregisterWaitEx(HANDLE WaitHandle, HANDLE CompletionEvent)
{
  int v5; // edi
  int v6; // edi
  int v7; // esi
  HANDLE TokenHandle; // [rsp+40h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( !WaitHandle )
    return -1073741585;
  v5 = RtlpTpRevertCapture(&TokenHandle, 0);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)WaitHandle + 2);
    *((_DWORD *)WaitHandle + 2) |= 8u;
    TpSetWaitEx(*((PTP_WAIT *)WaitHandle + 6), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)WaitHandle + 2);
    v6 = 1;
    _InterlockedOr((volatile signed __int32 *)WaitHandle + 6, 1u);
    if ( (*((_DWORD *)WaitHandle + 2) & 4) == 0
      || *((_DWORD *)WaitHandle + 22) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    {
      v6 = 0;
    }
    if ( CompletionEvent == (HANDLE)-1LL )
    {
      if ( !v6 )
        TpWaitForWait(*((PTP_WAIT *)WaitHandle + 6), 0);
    }
    else if ( CompletionEvent )
    {
      *((_QWORD *)WaitHandle + 10) = CompletionEvent;
    }
    v7 = TpWaitOutstandingCallbackCount(*((_QWORD *)WaitHandle + 6));
    TpReleaseWait(*((PTP_WAIT *)WaitHandle + 6));
    _m_prefetchw((char *)WaitHandle + 24);
    if ( (_InterlockedAnd((volatile signed __int32 *)WaitHandle + 6, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown((HANDLE *)WaitHandle);
      v7 = 0;
    }
    if ( v7 )
      v5 = v6 == 0 ? 0x103 : 0;
    else
      v5 = 0;
  }
  RtlpTpResumeImpersonation(TokenHandle);
  return v5;
}
