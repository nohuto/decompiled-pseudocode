/*
 * XREFs of TpWaitForTimer @ 0x180088570
 * Callers:
 *     RtlDeleteTimer @ 0x180087CA0 (RtlDeleteTimer.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x180088B20 (TppCancelTimer.c)
 *     TppETWCallbackCancel @ 0x18010D8B0 (TppETWCallbackCancel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax
  char v5; // bp
  char v6; // si
  _TP_POOL *Pool; // rdx
  __int64 v8; // r8
  unsigned __int32 Exchange; // eax
  unsigned __int32 v10; // edi
  _DWORD *SharedData; // rcx
  __int64 v12; // rcx
  unsigned __int32 v13; // ett

  if ( !Timer
    || Timer->WaitTimer
    || (Flags = Timer->Work.CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)(PVOID))Timer->Work.CleanupGroupMember.VFuncs != &TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    v5 = 0;
    v6 = 0;
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive(&Timer->Lock);
      Pool = Timer->Work.CleanupGroupMember.Pool;
      LOBYTE(v8) = 1;
      ++Timer->BlockInsert;
      v6 = TppCancelTimer(Timer, &Pool->TimerQueue, v8);
      if ( Timer->Work.CleanupGroupMember.CallbackBarrier.Ptr.0 )
        v5 = 1;
      else
        --Timer->BlockInsert;
      RtlReleaseSRWLockExclusive(&Timer->Lock);
    }
    _m_prefetchw((const void *)&Timer->Work.WorkState);
    Exchange = Timer->Work.WorkState.Exchange;
    if ( CancelPendingCallbacks )
    {
      while ( 1 )
      {
        v10 = Exchange >> 1;
        if ( !(Exchange >> 1) )
          break;
        v13 = Exchange;
        Exchange = _InterlockedCompareExchange(&Timer->Work.WorkState.Exchange, Exchange & 1, Exchange);
        if ( v13 == Exchange )
          goto LABEL_14;
      }
    }
    v10 = 0;
LABEL_14:
    TppBarrierAdjust((_RTL_SRWLOCK *)&Timer->Work.CleanupGroupMember.CallbackBarrier, -v10, 1);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 && v10 )
      TppETWCallbackCancel(
        Timer->Work.CleanupGroupMember.Pool,
        (_DWORD)Timer + 200,
        Timer->Work.CleanupGroupMember.Callback,
        Timer->Work.CleanupGroupMember.Context,
        (__int64)Timer->Work.CleanupGroupMember.SubProcessTag,
        v10);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive(&Timer->Lock);
      --Timer->BlockInsert;
      RtlReleaseSRWLockExclusive(&Timer->Lock);
    }
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(&Timer->Work.CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
        Timer->Work.CleanupGroupMember.VFuncs->Free(&Timer->Work.CleanupGroupMember);
    }
  }
}
