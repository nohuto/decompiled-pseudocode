/*
 * XREFs of ?DecrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14003DA1C
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x14001642C (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall DecrementNumberOfQueuedFlipPerSource(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( *((_BYTE *)a1 + 2500) )
    v2 = 4LL * a2 + 804;
  else
    v2 = 804LL;
  _InterlockedDecrement((volatile signed __int32 *)((char *)a1 + v2));
}
