/*
 * XREFs of KeDeleteMutant @ 0x1403DFA18
 * Callers:
 *     ExpDeleteMutant @ 0x1403DFA00 (ExpDeleteMutant.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1403E078C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406007F8 (-KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 */

void __fastcall KeDeleteMutant(struct _KTHREAD *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v4; // r12d
  volatile signed __int32 *InitialStack; // rdi
  struct _KTHREAD *v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v9; // r8
  int SignalState; // eax
  __int64 v11; // rdx
  struct _KTHREAD *v12; // r8
  struct _KTHREAD **SListFaultAddress; // rdx
  struct _KTHREAD **QuantumTarget; // rcx
  LIST_ENTRY *Flink; // r14
  LIST_ENTRY *v16; // rdx
  __int64 v17; // rax
  struct _LIST_ENTRY *v18; // rcx
  char v19; // cl
  int v20; // eax
  volatile signed __int32 LockNV; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF
  int v23; // [rsp+98h] [rbp+10h]

  v23 = a2;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  LOBYTE(v23) = 0;
  InitialStack = 0LL;
  v6 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&v6->Header.Lock, a2, a3);
  SignalState = v6->Header.SignalState;
  LOBYTE(v6->StackLimit) |= 1u;
  v6->Header.SignalState = 1;
  if ( SignalState > 0 )
  {
    _InterlockedAnd(&v6->Header.Lock, 0xFFFFFF7F);
    goto LABEL_7;
  }
  LockNV = v6->Header.LockNV;
  BYTE2(LockNV) = 0;
  v6->Header.LockNV = LockNV;
  v4 = BYTE1(v6->StackLimit);
  InitialStack = (volatile signed __int32 *)v6->InitialStack;
  LODWORD(v22) = 0;
  while ( _interlockedbittestandset64(InitialStack + 16, 0LL) )
  {
    do
      KeYieldProcessorEx(&v22);
    while ( *((_QWORD *)InitialStack + 8) );
  }
  SListFaultAddress = (struct _KTHREAD **)v6->SListFaultAddress;
  QuantumTarget = (struct _KTHREAD **)v6->QuantumTarget;
  if ( SListFaultAddress[1] != (struct _KTHREAD *)&v6->SListFaultAddress
    || *QuantumTarget != (struct _KTHREAD *)&v6->SListFaultAddress )
  {
LABEL_27:
    __fastfail(3u);
  }
  *QuantumTarget = (struct _KTHREAD *)SListFaultAddress;
  SListFaultAddress[1] = (struct _KTHREAD *)QuantumTarget;
  if ( ((__int64)v6->StackLimit & 2) != 0 )
  {
    LOBYTE(v23) = 1;
    if ( InitialStack != (volatile signed __int32 *)CurrentThread )
      ObfReferenceObjectWithTag((PVOID)InitialStack, 0x746C6644u);
  }
  *((_QWORD *)InitialStack + 8) = 0LL;
  v6->InitialStack = 0LL;
  Flink = v6->Header.WaitListHead.Flink;
  while ( Flink != &v6->Header.WaitListHead )
  {
    v16 = Flink->Flink;
    v17 = (__int64)Flink;
    Flink = v16;
    v18 = *(struct _LIST_ENTRY **)(v17 + 8);
    if ( v16->Blink != (struct _LIST_ENTRY *)v17 || v18->Flink != (struct _LIST_ENTRY *)v17 )
      goto LABEL_27;
    v18->Flink = v16;
    v16->Blink = v18;
    v19 = *(_BYTE *)(v17 + 16);
    switch ( v19 )
    {
      case 1:
        if ( KiTryUnwaitThread((__int64)CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), &v22) )
        {
LABEL_23:
          v20 = v6->Header.SignalState - 1;
          v6->Header.SignalState = v20;
          if ( !v20 )
            goto LABEL_24;
        }
        break;
      case 2:
        *(_BYTE *)(v17 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v17 + 24), (_QWORD *)v17, v9);
        goto LABEL_23;
      case 4:
        *(_BYTE *)(v17 + 17) = 5;
        v6->Header.SignalState = 0;
        KiInsertQueueDpc(*(_QWORD *)(v17 + 24), (__int64)v6, v17, 0LL, 0);
        break;
      default:
        KiTryUnwaitThread((__int64)CurrentPrcb, v17, 256LL, 0LL);
        break;
    }
  }
LABEL_24:
  _InterlockedAnd(&v6->Header.Lock, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(v6);
LABEL_7:
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  if ( (_BYTE)v23 )
  {
    if ( InitialStack == (volatile signed __int32 *)CurrentThread )
    {
      KeAbPostRelease((unsigned __int64)v6);
      goto LABEL_25;
    }
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpCrossThreadDelete((AutoBoost *)v6, (void *)InitialStack, v12);
    else
      LegacyAutoBoost::KiAbpCrossThreadDelete(v6, (LegacyAutoBoost *)InitialStack, v12);
    ObfDereferenceObjectWithTag((PVOID)InitialStack, 0x746C6644u);
  }
  else
  {
    if ( InitialStack != (volatile signed __int32 *)CurrentThread )
      return;
LABEL_25:
    if ( v4 )
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v11);
  }
}
