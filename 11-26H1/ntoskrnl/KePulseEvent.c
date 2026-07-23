/*
 * XREFs of KePulseEvent @ 0x1404C0CC0
 * Callers:
 *     MmResourcesAvailable @ 0x1404795B4 (MmResourcesAvailable.c)
 *     MiPulseLowAvailableEvent @ 0x1404C0C58 (MiPulseLowAvailableEvent.c)
 *     MiPulseCommitSignal @ 0x140503364 (MiPulseCommitSignal.c)
 *     KeBalanceSetManager @ 0x1405FA400 (KeBalanceSetManager.c)
 *     DifKePulseEventWrapper @ 0x140665F60 (DifKePulseEventWrapper.c)
 *     MiNotifyMemoryChange @ 0x14086D084 (MiNotifyMemoryChange.c)
 *     NtPulseEvent @ 0x140A95880 (NtPulseEvent.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char v4; // si
  KPRIORITY v5; // r13d
  PRKEVENT v6; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // r8
  LONG SignalState; // r15d
  struct _LIST_ENTRY *p_WaitListHead; // rdi
  bool v12; // zf
  struct _LIST_ENTRY *Flink; // rsi
  __int64 v14; // rax
  char v15; // cl
  __int64 v16; // r8
  struct _LIST_ENTRY *v18; // rdx
  __int64 v19; // rax
  struct _LIST_ENTRY *v20; // rcx
  char v21; // cl
  int v22; // eax

  v4 = Event->Header.Type & 0x7F;
  v5 = Increment;
  v6 = Event;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Increment) = 2;
    LOBYTE(Event) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Event, Increment);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&v6->Header.Lock, *(__int64 *)&Increment, Wait);
  SignalState = v6->Header.SignalState;
  if ( !SignalState )
  {
    p_WaitListHead = &v6->Header.WaitListHead;
    v6->Header.SignalState = 1;
    v12 = v4 == 0;
    Flink = v6->Header.WaitListHead.Flink;
    if ( v12 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
        {
          v6->Header.WaitListHead.Blink = &v6->Header.WaitListHead;
          p_WaitListHead->Flink = p_WaitListHead;
          goto LABEL_12;
        }
        v14 = (__int64)Flink;
        Flink = Flink->Flink;
        v15 = *(_BYTE *)(v14 + 16);
        if ( v15 == 1 )
          break;
        if ( v15 == 2 )
        {
          *(_BYTE *)(v14 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v14 + 24), (_QWORD *)v14, v9);
        }
        else if ( v15 == 4 )
        {
          *(_BYTE *)(v14 + 17) = 5;
          v6->Header.SignalState = 0;
          KiInsertQueueDpc(*(_QWORD *)(v14 + 24), (__int64)v6, v14, 0LL, 0);
        }
        else
        {
          v16 = 256LL;
LABEL_10:
          KiTryUnwaitThread((__int64)CurrentPrcb, v14, v16, 0LL);
        }
      }
      v16 = *(unsigned __int16 *)(v14 + 18);
      goto LABEL_10;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
          goto LABEL_12;
        v18 = Flink->Flink;
        v19 = (__int64)Flink;
        Flink = v18;
        v20 = *(struct _LIST_ENTRY **)(v19 + 8);
        if ( v18->Blink != (struct _LIST_ENTRY *)v19 || v20->Flink != (struct _LIST_ENTRY *)v19 )
          __fastfail(3u);
        v20->Flink = v18;
        v18->Blink = v20;
        v21 = *(_BYTE *)(v19 + 16);
        if ( v21 != 1 )
          break;
        if ( KiTryUnwaitThread((__int64)CurrentPrcb, v19, *(unsigned __int16 *)(v19 + 18), 0LL) )
        {
LABEL_20:
          v22 = v6->Header.SignalState - 1;
          v6->Header.SignalState = v22;
          if ( !v22 )
            goto LABEL_12;
        }
      }
      if ( v21 == 2 )
      {
        *(_BYTE *)(v19 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v19 + 24), (_QWORD *)v19, v9);
        goto LABEL_20;
      }
      if ( v21 == 4 )
      {
        *(_BYTE *)(v19 + 17) = 5;
        v6->Header.SignalState = 0;
        KiInsertQueueDpc(*(_QWORD *)(v19 + 24), (__int64)v6, v19, 0LL, 0);
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v19, 256LL, 0LL);
      }
    }
  }
LABEL_12:
  v6->Header.SignalState = 0;
  _InterlockedAnd(&v6->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, Wait != 0 ? 3 : 0, 1u, v5, CurrentIrql);
  return SignalState;
}
