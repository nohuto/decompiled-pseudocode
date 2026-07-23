/*
 * XREFs of ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1403B46B8
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x1403B3AE0 (ExpShutdownWorkerFactory.c)
 *     IopCancelWaitCompletionPacket @ 0x1403B45E4 (IopCancelWaitCompletionPacket.c)
 *     ExCancelDpcEventWait @ 0x1406D3AD0 (ExCancelDpcEventWait.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KiDeregisterObjectWaitBlock(volatile signed __int32 *a1, struct _KWAIT_BLOCK *a2, __int64 a3)
{
  volatile signed __int32 *v4; // rsi
  char v5; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  v4 = a1;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe(v4, v7, a3);
  if ( a2->BlockState == 4 )
  {
    Flink = a2->WaitListEntry.Flink;
    if ( (struct _KWAIT_BLOCK *)a2->WaitListEntry.Flink->Blink != a2
      || (Blink = a2->WaitListEntry.Blink, (struct _KWAIT_BLOCK *)Blink->Flink != a2) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    v5 = 1;
    Flink->Blink = Blink;
    a2->BlockState = 5;
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
