/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x180087DF0
 * Callers:
 *     RtlDeleteTimer @ 0x180087CA0 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FB3F0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  int v2; // eax
  _RTL_SRWLOCK *v3; // rdi
  unsigned int v4; // ebx
  _PEB_LDR_DATA *Ldr; // rcx

  if ( !a1
    || *(_BYTE *)(a1 + 353)
    || (v2 = *(_DWORD *)(a1 + 168), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    || *(__int64 (__fastcall ***)(PVOID))(a1 + 8) != &TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, 0LL);
    return 0LL;
  }
  else
  {
    v3 = (_RTL_SRWLOCK *)(a1 + 240);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    v4 = *(_DWORD *)(a1 + 56);
    RtlReleaseSRWLockExclusive(v3);
    return v4;
  }
}
