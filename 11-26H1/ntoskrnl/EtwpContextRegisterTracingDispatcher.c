/*
 * XREFs of EtwpContextRegisterTracingDispatcher @ 0x140501688
 * Callers:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpQueueApc @ 0x14020AAF0 (EtwpQueueApc.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     EtwpTraceContextRegisters @ 0x1406C7E48 (EtwpTraceContextRegisters.c)
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
