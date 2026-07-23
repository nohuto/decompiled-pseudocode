/*
 * XREFs of KeInitializeMutantEx @ 0x140471064
 * Callers:
 *     NtCreateMutant @ 0x140A9E470 (NtCreateMutant.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KeInitializeMutantEx(struct _KTHREAD *a1, __int64 a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  char v5; // bp
  struct _KTHREAD *v6; // rbx
  char v7; // al
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *p_SListFaultAddress; // rax
  unsigned __int64 v12; // rax
  volatile unsigned __int8 *v13; // rdx
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  v6 = a1;
  *(_OWORD *)&a1->Header.Lock = 0LL;
  *(_OWORD *)&a1->Header.WaitListHead.Blink = 0LL;
  *(_OWORD *)&a1->QuantumTarget = 0LL;
  a1->StackLimit = 0LL;
  a1->Header.Type = 2;
  if ( (_BYTE)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    a1->InitialStack = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    p_SListFaultAddress = (struct _LIST_ENTRY *)&v6->SListFaultAddress;
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    p_SListFaultAddress->Flink = &CurrentThread->MutantListHead;
    v6->QuantumTarget = (unsigned __int64)Blink;
    Blink->Flink = p_SListFaultAddress;
    CurrentThread->MutantListHead.Blink = p_SListFaultAddress;
    CurrentThread->ThreadLock = 0LL;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  else
  {
    a1->Header.SignalState = 1;
  }
  v6->Header.WaitListHead.Blink = &v6->Header.WaitListHead;
  v6->Header.WaitListHead.Flink = &v6->Header.WaitListHead;
  v7 = (__int64)v6->StackLimit & 0xFE;
  BYTE1(v6->StackLimit) = 0;
  LOBYTE(v6->StackLimit) = v7;
  if ( (a3 & 1) != 0 )
  {
    LOBYTE(v6->StackLimit) = v7 | 2;
    if ( v5 )
    {
      v12 = KeAbPreAcquire((__int64)v6, 0LL, 1LL, a4);
      if ( v12 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v13) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v12 + 33), v13, 1);
        }
        else
        {
          *(_BYTE *)(v12 + 10) = 1;
        }
      }
    }
  }
}
