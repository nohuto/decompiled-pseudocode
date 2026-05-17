/*
 * XREFs of RtlDeleteTimer @ 0x180067850
 * Callers:
 *     RtlCancelTimer @ 0x180159580 (RtlCancelTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18004F238 (RtlpTpResumeImpersonation.c)
 *     RtlpTpRevertCapture @ 0x180067740 (RtlpTpRevertCapture.c)
 *     RtlpTpTimerRundown @ 0x1800677EC (RtlpTpTimerRundown.c)
 *     TpTimerOutstandingCallbackCount @ 0x1800679A0 (TpTimerOutstandingCallbackCount.c)
 *     TpReleaseTimer @ 0x180067E70 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x180068120 (TpWaitForTimer.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 */

__int64 __fastcall RtlDeleteTimer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // edi
  HANDLE v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  v6 = RtlpTpRevertCapture(&v11, 0);
  if ( v6 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a2 + 56) + 8LL), v5);
    v7 = *(_QWORD *)a2;
    v8 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v8 != a2 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a2 + 56) + 8LL));
    _InterlockedOr((volatile signed __int32 *)(a2 + 48), 1u);
    TpSetTimerEx(*(_QWORD *)(a2 + 64), 0LL, 0LL, 0LL);
    if ( a3 == -1 )
    {
      TpWaitForTimer(*(_QWORD *)(a2 + 64), 1LL);
    }
    else if ( a3 )
    {
      *(_QWORD *)(a2 + 72) = a3;
    }
    v9 = TpTimerOutstandingCallbackCount(*(_QWORD *)(a2 + 64));
    TpReleaseTimer(*(_QWORD *)(a2 + 64));
    _m_prefetchw((const void *)(a2 + 48));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a2 + 48), 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpTimerRundown(a2);
      v9 = 0;
    }
    v6 = v9 != 0 ? 0x103 : 0;
  }
  RtlpTpResumeImpersonation(v11);
  return (unsigned int)v6;
}
