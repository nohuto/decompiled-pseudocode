/*
 * XREFs of ExpNodeHotAddProcessorWorker @ 0x140845B80
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PsQuitNextPartition @ 0x140619954 (PsQuitNextPartition.c)
 *     ExpWorkQueueManagerStart @ 0x1408465D4 (ExpWorkQueueManagerStart.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A8F720 (KeSynchronizeWithDynamicProcessors.c)
 */

void __fastcall ExpNodeHotAddProcessorWorker(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  void *NextPartition; // rax
  void *v7; // rbx
  int v8; // eax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  KeSynchronizeWithDynamicProcessors(a1, a2, a3, a4);
  v5 = 0LL;
  while ( 1 )
  {
    NextPartition = PsGetNextPartition(v5);
    v7 = NextPartition;
    if ( !NextPartition )
      break;
    v8 = ExpWorkQueueManagerStart(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextPartition + 2) + 16LL) + 8LL * *a1));
    v5 = v7;
    if ( v8 < 0 )
    {
      PsQuitNextPartition(v7);
      Interval.QuadPart = -500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      *((_QWORD *)a1 + 11) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 44), DelayedWorkQueue);
      return;
    }
  }
}
