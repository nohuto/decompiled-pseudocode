/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x1800FBCA0
 * Callers:
 *     RtlDeleteTimerQueue @ 0x180159590 (RtlDeleteTimerQueue.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18004F238 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180067740 (RtlpTpRevertCapture.c)
 *     RtlpTpTimerRundown @ 0x1800677EC (RtlpTpTimerRundown.c)
 *     TpTimerOutstandingCallbackCount @ 0x1800679A0 (TpTimerOutstandingCallbackCount.c)
 *     TpReleaseTimer @ 0x180067E70 (TpReleaseTimer.c)
 *     RtlpTpTimerQueueRundown @ 0x1800FBE04 (RtlpTpTimerQueueRundown.c)
 *     NtWaitForAlertByThreadId @ 0x180162BB0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlDeleteTimerQueueEx(__int64 a1, __int64 a2)
{
  int v4; // r14d
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  HANDLE v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v14 = 0LL;
  v15 = a1;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v6 = RtlpTpRevertCapture(&v14, 0);
    if ( v6 >= 0 )
    {
      if ( a2 )
      {
        if ( a2 == -1 )
          *(_QWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *(_QWORD *)(a1 + 16) = a2;
      }
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8), v5);
      v9 = *(_QWORD **)(a1 + 24);
      while ( v9 != (_QWORD *)(a1 + 24) )
      {
        v10 = (__int64)v9;
        v9 = (_QWORD *)*v9;
        _InterlockedOr((volatile signed __int32 *)(v10 + 48), 1u);
        v4 += TpTimerOutstandingCallbackCount(*(_QWORD *)(v10 + 64), v7, v8);
        TpReleaseTimer(*(_QWORD *)(v10 + 64), v11, v12);
        _m_prefetchw((const void *)(v10 + 48));
        if ( (_InterlockedAnd((volatile signed __int32 *)(v10 + 48), 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown(v10);
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      if ( _InterlockedDecrement((volatile signed __int32 *)a1) )
      {
        if ( a2 != -1 )
        {
          v6 = v4 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(a1, 0LL);
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        RtlpTpTimerQueueRundown(a1);
      }
      v6 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v14);
    return (unsigned int)v6;
  }
  return 3221225711LL;
}
