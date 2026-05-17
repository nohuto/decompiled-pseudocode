/*
 * XREFs of TpStartAsyncIoOperation @ 0x1800D9120
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 */

void __fastcall TpStartAsyncIoOperation(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rdi
  int v5; // eax

  if ( !a1
    || (v2 = *(_DWORD *)(a1 + 168), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppIopCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    TppBarrierAdjust((signed __int64 *)(a1 + 56), 1, 0);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 280));
    _InterlockedIncrement((volatile signed __int32 *)a1);
    v4 = *(_QWORD *)(a1 + 144);
    if ( !v4 || (v5 = *(_DWORD *)(v4 + 440)) == 0 )
      v5 = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v4 + 424) != v5 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v4 + 72), v3);
      TppAdjustRunningThreadGoalWithLock(v4);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
    }
  }
}
