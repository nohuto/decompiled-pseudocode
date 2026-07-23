/*
 * XREFs of HalpQueueMapBufferWorker @ 0x140436E5C
 * Callers:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14035B920 (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalAllocateAdapterChannelV2 @ 0x14035BB40 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035BE20 (HalBuildScatterGatherListV2.c)
 *     IoFreeAdapterChannelV2 @ 0x14035CB20 (IoFreeAdapterChannelV2.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14043721C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall HalpQueueMapBufferWorker(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 Pool2; // rax

  v4 = *(_BYTE *)(a1 + 442) != 0 ? 4 : 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v4), 1, 0) )
  {
    Pool2 = ExAllocatePool2(0x42uLL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_QWORD *)(Pool2 + 16) = HalpGrowMapBufferWorker;
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 160);
      *(_DWORD *)(Pool2 + 44) = a2;
      *(_BYTE *)(Pool2 + 40) = *(_BYTE *)(a1 + 442);
      *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 156);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
    }
    else
    {
      *(_DWORD *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v4) = 0;
    }
  }
}
