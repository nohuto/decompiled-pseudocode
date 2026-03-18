/*
 * XREFs of ?VidMmIncrementPeriodicTrimUniqueness@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x14004E9A4
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400FEC44 (-VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PA.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmIncrementPeriodicTrimUniqueness(PRKEVENT *a1, struct VIDMM_PROCESS_ADAPTER_INFO *a2)
{
  _InterlockedIncrement64((volatile signed __int64 *)a2 + 15);
  if ( (*a1)[1673].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)_InterlockedExchangeAdd64(
                                                                        (volatile signed __int64 *)&(*a1)[1673].Header.Lock,
                                                                        1uLL)
    && KeGetCurrentThread() != (struct _KTHREAD *)a1[1] )
  {
    KeSetEvent(a1[3], 0, 0);
  }
}
