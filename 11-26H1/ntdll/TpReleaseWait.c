/*
 * XREFs of TpReleaseWait @ 0x180090840
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x18009052C (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180090B64 (RtlpWnfRegisterTpNotification.c)
 *     RtlDeregisterWaitEx @ 0x180108160 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x180088B20 (TppCancelTimer.c)
 *     ZwCancelWaitCompletionPacket @ 0x180160110 (ZwCancelWaitCompletionPacket.c)
 */

void __cdecl TpReleaseWait(PTP_WAIT Wait)
{
  volatile int Flags; // eax
  volatile int v3; // eax
  volatile int v4; // ett
  _TP_POOL *Pool; // rsi
  $1F934B8EBDE74339D46E9E4915B607C8 *p_WaitFlags; // rsi
  int v7; // edi
  void *ThreadPoolData; // rax
  NTSTATUS v9; // eax
  unsigned __int8 AllFlags; // al
  void *retaddr; // [rsp+28h] [rbp+0h]

  Flags = Wait->Timer.Work.CleanupGroupMember.Flags;
  if ( (Flags & 0x10000) != 0
    || (Flags & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL
     || *(PTP_WAIT *)(*(_QWORD *)ThreadPoolData + 240LL) != Wait)
    || (__int64 (__fastcall **)(PVOID))Wait->Timer.Work.CleanupGroupMember.VFuncs != &TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
      return;
LABEL_17:
    TppRaiseInvalidParameter();
    return;
  }
  _m_prefetchw(&Wait->Timer.Work.CleanupGroupMember.168);
  v3 = Wait->Timer.Work.CleanupGroupMember.Flags;
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange(&Wait->Timer.Work.CleanupGroupMember.Flags, v3 | 0x10000, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 0x10000) != 0 )
    goto LABEL_17;
  if ( (v3 & 0x30000) != 0 )
    return;
  Pool = Wait->Timer.Work.CleanupGroupMember.Pool;
  Wait->Timer.Work.CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
  RtlAcquireSRWLockExclusive(&Wait->Timer.Lock);
  if ( Wait->Handle )
  {
    v9 = ZwCancelWaitCompletionPacket(Wait->WaitPkt, 1u);
    if ( !v9 )
    {
      Wait->Handle = 0LL;
      v7 = -1;
      if ( TppCancelTimer((__int64)Wait, &Pool->TimerQueue.Lock, 1) )
        v7 = -2;
      p_WaitFlags = &Wait->WaitFlags;
      if ( (Wait->WaitFlags.AllFlags & 4) != 0 )
      {
        TppBarrierAdjust((_RTL_SRWLOCK *)&Wait->Timer.Work.CleanupGroupMember.CallbackBarrier, -1, 0);
        p_WaitFlags->AllFlags &= ~4u;
      }
      goto LABEL_12;
    }
    if ( v9 != 259 && v9 != -1073741536 )
      TppRaiseInvalidParameter();
    p_WaitFlags = &Wait->WaitFlags;
    AllFlags = Wait->WaitFlags.AllFlags;
    if ( (AllFlags & 4) == 0 )
    {
      p_WaitFlags->AllFlags = AllFlags | 4;
      TppBarrierAdjust((_RTL_SRWLOCK *)&Wait->Timer.Work.CleanupGroupMember.CallbackBarrier, 1, 0);
    }
  }
  else
  {
    p_WaitFlags = &Wait->WaitFlags;
  }
  v7 = 0;
LABEL_12:
  p_WaitFlags->AllFlags &= ~1u;
  p_WaitFlags->AllFlags &= ~2u;
  ++Wait->Timer.BlockInsert;
  RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
  if ( _InterlockedExchangeAdd(&Wait->Timer.Work.CleanupGroupMember.Refcount.Refcount, v7 - 1) == 1 - v7 )
    Wait->Timer.Work.CleanupGroupMember.VFuncs->Free(&Wait->Timer.Work.CleanupGroupMember);
}
