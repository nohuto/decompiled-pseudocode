/*
 * XREFs of RtlDeleteTimer @ 0x180087CA0
 * Callers:
 *     RtlCancelTimer @ 0x180159450 (RtlCancelTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x1800397B8 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180087B90 (RtlpTpRevertCapture.c)
 *     RtlpTpTimerRundown @ 0x180087C3C (RtlpTpTimerRundown.c)
 *     TpTimerOutstandingCallbackCount @ 0x180087DF0 (TpTimerOutstandingCallbackCount.c)
 *     TpReleaseTimer @ 0x1800882C0 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x180088570 (TpWaitForTimer.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 */

NTSTATUS __cdecl RtlDeleteTimer(HANDLE TimerQueueHandle, HANDLE TimerToCancel, HANDLE Event)
{
  int v5; // edi
  _QWORD *v6; // rcx
  HANDLE *v7; // rax
  int v8; // edi
  HANDLE v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( !TimerQueueHandle )
    return -1073741585;
  if ( !TimerToCancel )
    return -1073741584;
  v5 = RtlpTpRevertCapture(&v10, 0);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)TimerToCancel + 7) + 8LL));
    v6 = *(_QWORD **)TimerToCancel;
    v7 = (HANDLE *)*((_QWORD *)TimerToCancel + 1);
    if ( *(HANDLE *)(*(_QWORD *)TimerToCancel + 8LL) != TimerToCancel || *v7 != TimerToCancel )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*((_QWORD *)TimerToCancel + 7) + 8LL));
    _InterlockedOr((volatile signed __int32 *)TimerToCancel + 12, 1u);
    TpSetTimerEx(*((PTP_TIMER *)TimerToCancel + 8), 0LL, 0, 0);
    if ( Event == (HANDLE)-1LL )
    {
      TpWaitForTimer(*((PTP_TIMER *)TimerToCancel + 8), 1u);
    }
    else if ( Event )
    {
      *((_QWORD *)TimerToCancel + 9) = Event;
    }
    v8 = TpTimerOutstandingCallbackCount(*((_QWORD *)TimerToCancel + 8));
    TpReleaseTimer(*((PTP_TIMER *)TimerToCancel + 8));
    _m_prefetchw((char *)TimerToCancel + 48);
    if ( (_InterlockedAnd((volatile signed __int32 *)TimerToCancel + 12, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpTimerRundown(TimerToCancel);
      v8 = 0;
    }
    v5 = v8 != 0 ? 0x103 : 0;
  }
  RtlpTpResumeImpersonation(v10);
  return v5;
}
