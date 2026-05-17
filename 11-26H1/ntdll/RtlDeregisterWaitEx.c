/*
 * XREFs of RtlDeregisterWaitEx @ 0x1801087C0
 * Callers:
 *     RtlDeregisterWait @ 0x1801087B0 (RtlDeregisterWait.c)
 * Callees:
 *     TpWaitForWait @ 0x18002A2F0 (TpWaitForWait.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18004F238 (RtlpTpResumeImpersonation.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 *     RtlpTpRevertCapture @ 0x180067740 (RtlpTpRevertCapture.c)
 *     TpReleaseWait @ 0x1800703F0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x1800DCD2C (TpWaitOutstandingCallbackCount.c)
 *     RtlpTpWaitRundown @ 0x1800DDAA0 (RtlpTpWaitRundown.c)
 */

__int64 __fastcall RtlDeregisterWaitEx(__int64 a1, __int64 a2)
{
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // rdx
  int v8; // edi
  int v9; // esi
  __int64 v10; // rdx
  HANDLE v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  v6 = RtlpTpRevertCapture(&v11, 0);
  if ( v6 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 16), v5);
    *(_DWORD *)(a1 + 8) |= 8u;
    TpSetWaitEx(*(_QWORD *)(a1 + 48), 0LL, 0LL, 0LL);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
    v8 = 1;
    _InterlockedOr((volatile signed __int32 *)(a1 + 24), 1u);
    if ( (*(_DWORD *)(a1 + 8) & 4) == 0 || *(_DWORD *)(a1 + 88) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      v8 = 0;
    if ( a2 == -1 )
    {
      if ( !v8 )
        TpWaitForWait(*(_QWORD *)(a1 + 48), 0LL);
    }
    else if ( a2 )
    {
      *(_QWORD *)(a1 + 80) = a2;
    }
    v9 = TpWaitOutstandingCallbackCount(*(_QWORD *)(a1 + 48), v7);
    TpReleaseWait(*(_QWORD *)(a1 + 48), v10);
    _m_prefetchw((const void *)(a1 + 24));
    if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 24), 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(a1);
      v9 = 0;
    }
    if ( v9 )
      v6 = v8 == 0 ? 0x103 : 0;
    else
      v6 = 0;
  }
  RtlpTpResumeImpersonation(v11);
  return (unsigned int)v6;
}
