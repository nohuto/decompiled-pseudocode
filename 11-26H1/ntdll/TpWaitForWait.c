/*
 * XREFs of TpWaitForWait @ 0x1800153F0
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180108160 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppWorkWait @ 0x1800166F0 (TppWorkWait.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x180087E90 (TppCancelWait.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpWaitForWait(PTP_WAIT Wait, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax
  unsigned int v3; // edi
  char v4; // r14
  _TP_POOL *Pool; // rdi
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  Flags = Wait->Timer.Work.CleanupGroupMember.Flags;
  v3 = 0;
  v4 = 0;
  v8 = 0;
  if ( (Flags & 0x10000) != 0
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)(PVOID))Wait->Timer.Work.CleanupGroupMember.VFuncs != &TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    if ( CancelPendingCallbacks )
    {
      Pool = Wait->Timer.Work.CleanupGroupMember.Pool;
      RtlAcquireSRWLockExclusive(&Wait->Timer.Lock);
      ++Wait->Timer.BlockInsert;
      TppCancelWait(Wait, &Pool->TimerQueue, 2LL, &v8);
      if ( Wait->Timer.Work.CleanupGroupMember.CallbackBarrier.Ptr.0 )
        v4 = 1;
      else
        --Wait->Timer.BlockInsert;
      RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
      TppWorkWait(Wait, CancelPendingCallbacks);
      if ( v4 )
      {
        RtlAcquireSRWLockExclusive(&Wait->Timer.Lock);
        --Wait->Timer.BlockInsert;
        RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
      }
      v3 = v8;
    }
    else
    {
      TppWorkWait(Wait, CancelPendingCallbacks);
    }
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(&Wait->Timer.Work.CleanupGroupMember.Refcount.Refcount, v3) == -v3 )
        Wait->Timer.Work.CleanupGroupMember.VFuncs->Free(&Wait->Timer.Work.CleanupGroupMember);
    }
  }
}
