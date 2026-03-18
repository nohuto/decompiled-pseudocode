/*
 * XREFs of IoFreeAdapterChannelV3 @ 0x14043EB30
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x14043E70C (HalpAllocateDmaResourcesInternal.c)
 *     HalFreeAdapterObject @ 0x14043EB00 (HalFreeAdapterObject.c)
 *     HalCancelAdapterChannelDmaThin @ 0x1404DEC50 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x140512EF0 (HalCancelAdapterChannelDmarThin.c)
 *     HalCancelAdapterChannel @ 0x1405888B0 (HalCancelAdapterChannel.c)
 *     IoFreeAdapterChannelV3Passive @ 0x140588C70 (IoFreeAdapterChannelV3Passive.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     IoFreeAdapterChannelV3Internal @ 0x14043EB84 (IoFreeAdapterChannelV3Internal.c)
 *     HalpContinueProcessingWaitQueue @ 0x14043ECA0 (HalpContinueProcessingWaitQueue.c)
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
