/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x1800FB3F0
 * Callers:
 *     RtlDeleteTimerQueue @ 0x180159460 (RtlDeleteTimerQueue.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x1800397B8 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180087B90 (RtlpTpRevertCapture.c)
 *     RtlpTpTimerRundown @ 0x180087C3C (RtlpTpTimerRundown.c)
 *     TpTimerOutstandingCallbackCount @ 0x180087DF0 (TpTimerOutstandingCallbackCount.c)
 *     TpReleaseTimer @ 0x1800882C0 (TpReleaseTimer.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FB554 (RtlpTpTimerQueueRundown.c)
 *     NtWaitForAlertByThreadId @ 0x180162AB0 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlDeleteTimerQueueEx(HANDLE TimerQueueHandle, HANDLE Event)
{
  int v4; // r14d
  int v5; // edi
  volatile signed __int32 *v6; // r15
  volatile signed __int32 *v7; // rdi
  HANDLE v9; // [rsp+60h] [rbp+8h] BYREF
  HANDLE v10; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v9 = 0LL;
  v10 = TimerQueueHandle;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( TimerQueueHandle )
  {
    v5 = RtlpTpRevertCapture(&v9, 0);
    if ( v5 >= 0 )
    {
      if ( Event )
      {
        if ( Event == (HANDLE)-1LL )
          *((_QWORD *)TimerQueueHandle + 5) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *((_QWORD *)TimerQueueHandle + 2) = Event;
      }
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      v6 = (volatile signed __int32 *)*((_QWORD *)TimerQueueHandle + 3);
      while ( v6 != (volatile signed __int32 *)((char *)TimerQueueHandle + 24) )
      {
        v7 = v6;
        v6 = *(volatile signed __int32 **)v6;
        _InterlockedOr(v7 + 12, 1u);
        v4 += TpTimerOutstandingCallbackCount(*((_QWORD *)v7 + 8));
        TpReleaseTimer(*((PTP_TIMER *)v7 + 8));
        _m_prefetchw((const void *)(v7 + 12));
        if ( (_InterlockedAnd(v7 + 12, 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown((PVOID)v7);
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      if ( _InterlockedDecrement((volatile signed __int32 *)TimerQueueHandle) )
      {
        if ( Event != (HANDLE)-1LL )
        {
          v5 = v4 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(TimerQueueHandle, 0LL);
      }
      else
      {
        *((_QWORD *)TimerQueueHandle + 5) = 0LL;
        RtlpTpTimerQueueRundown(TimerQueueHandle);
      }
      v5 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v9);
    return v5;
  }
  return -1073741585;
}
