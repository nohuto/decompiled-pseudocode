/*
 * XREFs of EtwpTiAsyncVadQueryEventWrite @ 0x14025A374
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x14025A2AC (EtwpTiVadQueryEventWrite.c)
 * Callees:
 *     EtwpTiTestBloomFilter @ 0x14025A474 (EtwpTiTestBloomFilter.c)
 *     EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x14025A4F4 (EtwpTiAllocVadQueryEventWriteWorkItemContext.c)
 *     EtwpTiAddBloomFilter @ 0x14025A688 (EtwpTiAddBloomFilter.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall EtwpTiAsyncVadQueryEventWrite(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5, int a6, __int64 a7)
{
  void *Src; // rsi
  int v9; // edi
  int v11; // r15d
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  PWORK_QUEUE_ITEM v14; // rcx
  PWORK_QUEUE_ITEM WorkItem; // [rsp+88h] [rbp+20h] BYREF

  Src = a5;
  WorkItem = 0LL;
  v9 = a4;
  v11 = a1;
  v12 = *a5 ^ ((*(_QWORD *)(a4 + 1656) ^ (KeGetCurrentThread()->ApcState.Process[3].CycleTime << 16)) << 32);
  if ( !(unsigned __int8)EtwpTiTestBloomFilter(a1, v12)
    && (int)EtwpTiAllocVadQueryEventWriteWorkItemContext(v11, a2, a3, v9, Src, a6, a7, v12, (__int64)&WorkItem) >= 0 )
  {
    EtwpTiAddBloomFilter(v13, v12);
    v14 = WorkItem;
    WorkItem->WorkerRoutine = (void (__fastcall *)(void *))EtwpTiVadQueryEventWriteCallback;
    v14->Parameter = v14;
    v14->List.Flink = 0LL;
    ExQueueWorkItem(v14, DelayedWorkQueue);
  }
}
