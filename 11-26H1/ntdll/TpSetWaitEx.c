/*
 * XREFs of TpSetWaitEx @ 0x180039E60
 * Callers:
 *     RtlRegisterWait @ 0x180039430 (RtlRegisterWait.c)
 *     TpSetWait @ 0x180039D40 (TpSetWait.c)
 *     RtlpWnfNotificationThread @ 0x180039D50 (RtlpWnfNotificationThread.c)
 *     EtwpNotificationThread @ 0x18003AF40 (EtwpNotificationThread.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18009052C (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180090B64 (RtlpWnfRegisterTpNotification.c)
 *     RtlpTpWaitCheckReset @ 0x1800BE0F0 (RtlpTpWaitCheckReset.c)
 *     RtlDeregisterWaitEx @ 0x180108160 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x180088B20 (TppCancelTimer.c)
 *     TppSetTimer @ 0x180089890 (TppSetTimer.c)
 *     TppRaiseHandleStatus @ 0x1800C7568 (TppRaiseHandleStatus.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180160070 (ZwAssociateWaitCompletionPacket.c)
 *     ZwCancelWaitCompletionPacket @ 0x180160110 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  volatile int Flags; // eax
  HANDLE v6; // r10
  _RTL_SRWLOCK *p_Lock; // rbp
  int v9; // esi
  char *SchedulerSharedDataSlot; // r8
  _TP_POOL *Pool; // r14
  unsigned int i; // ecx
  signed int v13; // edi
  $1F934B8EBDE74339D46E9E4915B607C8 *p_WaitFlags; // r14
  char v15; // r12
  unsigned __int8 v16; // al
  _BOOL8 v17; // r15
  _TP_POOL *v18; // r14
  void *WaitPkt; // rcx
  NTSTATUS v20; // eax
  unsigned __int8 v22; // al
  NTSTATUS v23; // eax
  __int64 QuadPart; // rax
  unsigned __int64 v25; // rax
  HANDLE v26; // rdx
  unsigned __int64 v27; // rax
  int v28; // ecx
  unsigned __int8 AllFlags; // al
  BOOLEAN AlreadySignaled; // [rsp+80h] [rbp+8h] BYREF
  HANDLE v31; // [rsp+88h] [rbp+10h]

  v31 = Handle;
  Flags = Wait->Timer.Work.CleanupGroupMember.Flags;
  v6 = Handle;
  if ( (Flags & 0x10000) != 0
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)(PVOID))Wait->Timer.Work.CleanupGroupMember.VFuncs != &TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !Handle && NtCurrentPeb()->Ldr->ShutdownInProgress )
      return 0;
  }
  else if ( !Reserved )
  {
    p_Lock = &Wait->Timer.Lock;
    v9 = 0;
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    Pool = Wait->Timer.Work.CleanupGroupMember.Pool;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        Handle = &SchedulerSharedDataSlot[8 * i];
        if ( !*(_QWORD *)Handle )
        {
          *(_QWORD *)Handle = p_Lock;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_Lock, 0LL) )
    {
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&Wait->Timer.Lock, (unsigned __int64)Handle);
      v6 = v31;
    }
    if ( Wait->Handle )
    {
      v23 = ZwCancelWaitCompletionPacket(Wait->WaitPkt, 0);
      if ( v23 )
      {
        if ( v23 != 259 && v23 != -1073741536 )
          TppRaiseInvalidParameter();
        p_WaitFlags = &Wait->WaitFlags;
        v15 = 0;
        AllFlags = Wait->WaitFlags.AllFlags;
        if ( (AllFlags & 4) == 0 )
        {
          p_WaitFlags->AllFlags = AllFlags | 4;
          TppBarrierAdjust((_RTL_SRWLOCK *)&Wait->Timer.Work.CleanupGroupMember.CallbackBarrier, 1, 0);
        }
        v6 = v31;
        v13 = 0;
      }
      else
      {
        v15 = 1;
        Wait->Handle = 0LL;
        v13 = -1;
        if ( (unsigned __int8)TppCancelTimer(Wait, &Pool->TimerQueue, 1LL) )
          v13 = -2;
        p_WaitFlags = &Wait->WaitFlags;
        if ( (Wait->WaitFlags.AllFlags & 4) != 0 )
        {
          TppBarrierAdjust((_RTL_SRWLOCK *)&Wait->Timer.Work.CleanupGroupMember.CallbackBarrier, -1, 0);
          p_WaitFlags->AllFlags &= ~4u;
        }
        v6 = v31;
      }
    }
    else
    {
      v13 = 0;
      p_WaitFlags = &Wait->WaitFlags;
      v15 = 1;
    }
    p_WaitFlags->AllFlags &= ~1u;
    v16 = p_WaitFlags->AllFlags & 0xFD;
    p_WaitFlags->AllFlags = v16;
    v17 = v13 != 0;
    if ( !v6 || Wait->Timer.BlockInsert )
      goto LABEL_26;
    if ( !v15 )
    {
      v22 = v16 | 1;
      Wait->NextWaitHandle = v6;
      p_WaitFlags->AllFlags = v22;
      if ( Timeout )
      {
        p_WaitFlags->AllFlags = v22 | 2;
        Wait->NextWaitTimeout = *Timeout;
      }
LABEL_21:
      if ( v13 > 0 )
      {
        _InterlockedAdd(&Wait->Timer.Work.CleanupGroupMember.Refcount.Refcount, v13);
        RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
        return v17;
      }
LABEL_26:
      RtlReleaseSRWLockExclusive(&Wait->Timer.Lock);
      if ( v13 < 0 && _InterlockedExchangeAdd(&Wait->Timer.Work.CleanupGroupMember.Refcount.Refcount, v13) == -v13 )
        Wait->Timer.Work.CleanupGroupMember.VFuncs->Free(&Wait->Timer.Work.CleanupGroupMember);
      return v17;
    }
    if ( Wait->Handle )
      goto LABEL_26;
    v18 = Wait->Timer.Work.CleanupGroupMember.Pool;
    WaitPkt = Wait->WaitPkt;
    AlreadySignaled = 0;
    Wait->Handle = v6;
    v20 = ZwAssociateWaitCompletionPacket(
            WaitPkt,
            v18->CompletionPort,
            v6,
            &Wait->Direct,
            Wait,
            0,
            0LL,
            &AlreadySignaled);
    if ( v20 < 0 )
    {
      v26 = v31;
      Wait->Handle = 0LL;
      TppRaiseHandleStatus((unsigned int)v20, v26, Wait);
    }
    else
    {
      if ( Timeout && !AlreadySignaled )
      {
        QuadPart = Timeout->QuadPart;
        if ( Timeout->QuadPart < 0 )
        {
          v27 = -QuadPart;
        }
        else
        {
          if ( QuadPart <= MEMORY[0x7FFE0014] )
          {
            LODWORD(v25) = 0;
            goto LABEL_50;
          }
          v27 = QuadPart - MEMORY[0x7FFE0014];
        }
        v25 = v27 >> 16;
        v28 = 300;
        if ( v25 > 0x12C )
        {
LABEL_51:
          TppSetTimer(Wait, &v18->TimerQueue, Timeout, 0LL, v28);
          v9 = 2;
          goto LABEL_20;
        }
LABEL_50:
        v28 = v25;
        goto LABEL_51;
      }
      v9 = 1;
    }
LABEL_20:
    v13 += v9;
    goto LABEL_21;
  }
  TppRaiseInvalidParameter();
  return 0;
}
