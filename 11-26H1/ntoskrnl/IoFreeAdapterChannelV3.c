/*
 * XREFs of IoFreeAdapterChannelV3 @ 0x140437640
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x14043721C (HalpAllocateDmaResourcesInternal.c)
 *     HalFreeAdapterObject @ 0x140437610 (HalFreeAdapterObject.c)
 *     HalCancelAdapterChannelDmaThin @ 0x1404D8330 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x14050C960 (HalCancelAdapterChannelDmarThin.c)
 *     HalCancelAdapterChannel @ 0x14058AF80 (HalCancelAdapterChannel.c)
 *     IoFreeAdapterChannelV3Passive @ 0x14058B340 (IoFreeAdapterChannelV3Passive.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     IoFreeAdapterChannelV3Internal @ 0x140437694 (IoFreeAdapterChannelV3Internal.c)
 *     HalpContinueProcessingWaitQueue @ 0x1404377B0 (HalpContinueProcessingWaitQueue.c)
 */

void __fastcall IoFreeAdapterChannelV3(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 520);
  if ( KeGetCurrentIrql() == 2 && v2 )
  {
    if ( *(_BYTE *)(a1 + 224) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 480), CriticalWorkQueue);
  }
  else
  {
    IoFreeAdapterChannelV3Internal(a1);
    HalpContinueProcessingWaitQueue(a1);
  }
}
