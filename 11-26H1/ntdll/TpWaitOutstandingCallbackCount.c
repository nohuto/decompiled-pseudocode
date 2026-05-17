/*
 * XREFs of TpWaitOutstandingCallbackCount @ 0x1800DCD2C
 * Callers:
 *     RtlDeregisterWaitEx @ 0x1801087C0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpWaitOutstandingCallbackCount(__int64 a1, __int64 a2)
{
  int v2; // eax
  volatile signed __int64 *v4; // rdi
  unsigned int v5; // ebx

  v2 = *(_DWORD *)(a1 + 168);
  if ( ((v2 & 0x10000) != 0
     || (v2 & 0x20000) != 0
     || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
     || NtCurrentPeb()->Ldr->ShutdownInProgress)
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  v4 = (volatile signed __int64 *)(a1 + 240);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240), a2);
  v5 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v4);
  return v5;
}
