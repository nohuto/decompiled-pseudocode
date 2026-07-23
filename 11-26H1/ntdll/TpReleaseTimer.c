/*
 * XREFs of TpReleaseTimer @ 0x1800882C0
 * Callers:
 *     RtlDeleteTimer @ 0x180087CA0 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x180090A74 (RtlpInitializeWnf.c)
 *     RtlpHpGCTimerEnable @ 0x1800CC558 (RtlpHpGCTimerEnable.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FB3F0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x180088B20 (TppCancelTimer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  volatile int Flags; // eax
  signed __int32 v3; // eax
  _PEB_LDR_DATA *Ldr; // rcx
  _TP_POOL *Pool; // rdx
  char v6; // al
  void *ThreadPoolData; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !Timer
    || Timer->WaitTimer
    || (Flags = Timer->Work.CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL
     || *(PTP_TIMER *)(*(_QWORD *)ThreadPoolData + 240LL) != Timer)
    || (__int64 (__fastcall **)(PVOID))Timer->Work.CleanupGroupMember.VFuncs != &TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( Ldr->ShutdownInProgress )
      return;
LABEL_14:
    TppRaiseInvalidParameter(Ldr, 0LL);
    return;
  }
  _m_prefetchw(&Timer->Work.CleanupGroupMember.168);
  Ldr = (_PEB_LDR_DATA *)(Timer->Work.CleanupGroupMember.Flags | 0x10000u);
  v3 = _InterlockedOr(&Timer->Work.CleanupGroupMember.Flags, 0x10000u);
  if ( (v3 & 0x10000) != 0 )
    goto LABEL_14;
  if ( (v3 & 0x30000) == 0 )
  {
    Timer->Work.CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
    RtlAcquireSRWLockExclusive(&Timer->Lock);
    Pool = Timer->Work.CleanupGroupMember.Pool;
    ++Timer->BlockInsert;
    v6 = TppCancelTimer(Timer, &Pool->TimerQueue, 0LL);
    if ( _InterlockedExchangeAdd(&Timer->Work.CleanupGroupMember.Refcount.Refcount, -((v6 != 0) + 1)) == (v6 != 0) + 1 )
      Timer->Work.CleanupGroupMember.VFuncs->Free(&Timer->Work.CleanupGroupMember);
  }
}
