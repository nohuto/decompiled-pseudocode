/*
 * XREFs of ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x14002BF40
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001D494 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004C094 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004C5F4 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004C6D4 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005976C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x14009ABC4 (VidSchiGetNumFlipAllocAttribs.c)
 *     VidSchResetFlipQueueTimeout @ 0x14009BCF8 (VidSchResetFlipQueueTimeout.c)
 * Callees:
 *     <none>
 */

struct VIDSCH_FLIP_QUEUE *__fastcall VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue(VIDSCH_FLIP_QUEUE_ITERATOR *this)
{
  __int64 v1; // rax
  __int64 v2; // r8

  v1 = *((int *)this + 3);
  v2 = *(_QWORD *)this + 8LL * *((unsigned int *)this + 2);
  if ( (_DWORD)v1 == -1 )
    return *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v2 + 3448) + 32LL);
  else
    return *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v2 + 3448) + 8 * v1 + 40);
}
