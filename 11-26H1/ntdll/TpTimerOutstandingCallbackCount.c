/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x1800679A0
 * Callers:
 *     RtlDeleteTimer @ 0x180067850 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FBCA0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  volatile signed __int64 *v5; // rdi
  unsigned int v6; // ebx
  _PEB_LDR_DATA *Ldr; // rcx

  if ( !a1
    || *(_BYTE *)(a1 + 353)
    || (v4 = *(_DWORD *)(a1 + 168), (v4 & 0x10000) != 0)
    || (v4 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, 0LL, a3);
    return 0LL;
  }
  else
  {
    v5 = (volatile signed __int64 *)(a1 + 240);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240), 0LL);
    v6 = *(_DWORD *)(a1 + 56);
    RtlReleaseSRWLockExclusive(v5);
    return v6;
  }
}
