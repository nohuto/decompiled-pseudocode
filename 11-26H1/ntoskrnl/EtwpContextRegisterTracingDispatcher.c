/*
 * XREFs of EtwpContextRegisterTracingDispatcher @ 0x140507CB4
 * Callers:
 *     EtwpLogKernelEvent @ 0x14032CDC0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14041297C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x140412F7C (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpQueueApc @ 0x14020AA10 (EtwpQueueApc.c)
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     EtwpTraceContextRegisters @ 0x1406C4208 (EtwpTraceContextRegisters.c)
 */

void __fastcall EtwpContextRegisterTracingDispatcher(
        __int64 a1,
        unsigned int *a2,
        struct _KTHREAD *a3,
        unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 EffectiveIrql; // al

  CurrentThread = a3;
  if ( !a3 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    EffectiveIrql = KeGetEffectiveIrql();
    if ( EffectiveIrql < 2u )
      EtwpTraceContextRegisters(a1, a2, CurrentThread, a4);
    else
      EtwpQueueApc(
        (unsigned int **)(a1 + 1088),
        CurrentThread,
        EffectiveIrql,
        (__int64)EtwpContextRegisterTracingApc,
        (_SLIST_ENTRY *)xHalTimerWatchdogStop,
        a2[1],
        *a2,
        0LL);
  }
}
