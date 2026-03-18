/*
 * XREFs of KiOutSwapProcesses @ 0x14049A3E4
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405F7C80 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x14037B7C4 (KiReadyOutSwappedThreads.c)
 *     MmOutSwapProcess @ 0x14049A5C8 (MmOutSwapProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiOutSwapProcesses(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rsi
  unsigned __int64 *v4; // r12
  struct _EPROCESS *v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  volatile _KSTACK_COUNT v7; // eax
  struct _LIST_ENTRY *p_ReadyListHead; // rdi
  _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v12; // r8
  bool v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 AffinityVersion; // rax

  v3 = a1;
  do
  {
    v4 = v3;
    v5 = (struct _EPROCESS *)(v3 - 15);
    v3 = (unsigned __int64 *)*v3;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    KiAcquireKobjectLockSafe(&v5->Pcb.Header.Lock, a2, a3);
    v7.Value = (int)v5->Pcb.StackCount;
    p_ReadyListHead = &v5->Pcb.ReadyListHead;
    Flink = v5->Pcb.ReadyListHead.Flink;
    if ( Flink == &v5->Pcb.ReadyListHead || (v7.Value & 7) == 6 )
    {
      _InterlockedXor(&v5->Pcb.StackCount.Value, (LOBYTE(v7.Value) ^ 0xFD) & 7);
      _InterlockedAnd(&v5->Pcb.Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v5);
      v13 = 0;
      v14 = KeGetCurrentIrql();
      v15 = 2LL;
      if ( (_BYTE)v14 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v14, 2LL);
      KiAcquireKobjectLockSafe(&v5->Pcb.Header.Lock, v15, v12);
      if ( p_ReadyListHead->Flink == p_ReadyListHead )
      {
        v16 = 4;
      }
      else
      {
        _m_prefetchw(&KiSupervisorXStateFeaturesLock.AffinityVersion);
        AffinityVersion = KiSupervisorXStateFeaturesLock.AffinityVersion;
        do
        {
          *v4 = AffinityVersion;
          a1 = (unsigned __int64 *)AffinityVersion;
          AffinityVersion = _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.AffinityVersion,
                              (signed __int64)v4,
                              AffinityVersion);
        }
        while ( (unsigned __int64 *)AffinityVersion != a1 );
        v13 = AffinityVersion == 0;
        v16 = 7;
      }
      _InterlockedXor(&v5->Pcb.StackCount.Value, v16);
      _InterlockedAnd(&v5->Pcb.Header.Lock, 0xFFFFFF7F);
      if ( v13 )
      {
        KiAcquireKobjectLockSafe((volatile signed __int32 *)&KiSupervisorXStateFeaturesLock.StackLimit, a2, a3);
        HIDWORD(KiSupervisorXStateFeaturesLock.StackLimit) = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSupervisorXStateFeaturesLock.StackLimit, 0xFFFFFF7F);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    else
    {
      v10 = p_ReadyListHead->Flink;
      if ( p_ReadyListHead->Flink->Blink != p_ReadyListHead
        || (Blink = v5->Pcb.ReadyListHead.Blink, Blink->Flink != p_ReadyListHead) )
      {
        __fastfail(3u);
      }
      Blink->Flink = v10;
      v10->Blink = Blink;
      v5->Pcb.ReadyListHead.Blink = p_ReadyListHead;
      p_ReadyListHead->Flink = p_ReadyListHead;
      _InterlockedXor(&v5->Pcb.StackCount.Value, 3u);
      _InterlockedAnd(&v5->Pcb.Header.Lock, 0xFFFFFF7F);
      KiReadyOutSwappedThreads(Flink, CurrentIrql);
    }
  }
  while ( v3 );
}
