/*
 * XREFs of ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x14001606C
 * Callers:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiIsFocusHwContext(struct VIDSCH_HW_CONTEXT *a1)
{
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 40LL) + 7085LL) )
    return *((_DWORD *)a1 + 26) == 2;
  if ( !*((_BYTE *)a1 + 148) )
    return *((_BYTE *)a1 + 76) & 1;
  return gulPublicPriorityToSchedulingPriority[*((unsigned int *)a1 + 36)] == 16;
}
