/*
 * XREFs of TpWaitOutstandingCallbackCount @ 0x1800D9C9C
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180108160 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpWaitOutstandingCallbackCount(__int64 a1)
{
  int v1; // eax
  _RTL_SRWLOCK *v3; // rdi
  unsigned int v4; // ebx

  v1 = *(_DWORD *)(a1 + 168);
  if ( ((v1 & 0x10000) != 0
     || (v1 & 0x20000) != 0
     || *(__int64 (__fastcall ***)(PVOID))(a1 + 8) != &TppWaitpCleanupGroupMemberVFuncs
     || NtCurrentPeb()->Ldr->ShutdownInProgress)
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  v3 = (_RTL_SRWLOCK *)(a1 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
  v4 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v3);
  return v4;
}
