/*
 * XREFs of LZNT1DecompressChunkNewThread @ 0x140205048
 * Callers:
 *     RtlDecompressBufferLZNT1 @ 0x140A84A70 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A9B040 (RtlDecompressFragmentLZNT1.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     LZNT1DecompressChunk @ 0x1407362D0 (LZNT1DecompressChunk.c)
 */

__int64 __fastcall LZNT1DecompressChunkNewThread(
        __int64 a1,
        unsigned __int64 a2,
        struct _LIST_ENTRY *a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6)
{
  struct _WORK_QUEUE_ITEM *v11; // rbx
  __int64 v12; // rcx
  KPRIORITY PriorityThread; // eax
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  if ( a2 < 0xFFFF800000000000uLL )
    return LZNT1DecompressChunk(a2, (_DWORD)a3, a4, a5, (__int64)&v14);
  if ( a4 < 0xFFFF800000000000uLL )
    return LZNT1DecompressChunk(a2, (_DWORD)a3, a4, a5, (__int64)&v14);
  if ( (__int64)((__int64)a3 - a2) < a6 )
    return LZNT1DecompressChunk(a2, (_DWORD)a3, a4, a5, (__int64)&v14);
  v11 = (struct _WORK_QUEUE_ITEM *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&PspTlsContext.ApcStateFill[32]);
  if ( !v11 )
    return LZNT1DecompressChunk(a2, (_DWORD)a3, a4, a5, (__int64)&v14);
  v12 = a5;
  v11->WorkerRoutine = (void (__fastcall *)(void *))LZNT1DecompressChunkWorkItem;
  v11->Parameter = v11;
  v11->List.Flink = 0LL;
  v11[1].Parameter = (void *)v12;
  v11[2].List.Flink = (struct _LIST_ENTRY *)&v11[2].List.Blink;
  v11[1].List.Flink = (struct _LIST_ENTRY *)a2;
  v11[1].List.Blink = a3;
  v11[1].WorkerRoutine = (void (__fastcall *)(void *))a4;
  v11[2].WorkerRoutine = (void (__fastcall *)(void *))a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  ExQueueWorkItem(v11, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  return 0LL;
}
