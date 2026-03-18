/*
 * XREFs of ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001D494
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x1400496F4 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     VidSchiCompletePendingFlipOnPlane @ 0x140003348 (VidSchiCompletePendingFlipOnPlane.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x14002BF40 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140032608 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 */

void __fastcall VidSchiSubmitNextFlipRange(struct HwQueueStagingList *a1, struct _VIDSCH_GLOBAL *a2, unsigned int a3)
{
  int v6; // esi
  __int64 v7; // r14
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rdi
  int v9; // eax
  unsigned int i; // edx
  struct _VIDSCH_GLOBAL *v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+3Ch] [rbp-1Ch]
  bool v14; // [rsp+70h] [rbp+18h] BYREF

  v11 = a2;
  v12 = a3;
  v6 = -1;
  v7 = *((_QWORD *)a2 + a3 + 431);
  while ( 1 )
  {
    v13 = v6;
    if ( v6 == *((_DWORD *)a2 + 40) )
      break;
    v14 = 0;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v11);
    if ( !FlipQueue )
      goto LABEL_16;
    v9 = *(_DWORD *)(v7 + 3236);
    if ( *((_BYTE *)a2 + 7086) )
    {
      if ( !v9 )
        goto LABEL_16;
      if ( *(_BYTE *)(v7 + 78948) )
      {
LABEL_14:
        VidSchiSubmitNextFlipQueueEntryRange(a1, a2, &v14, a3, FlipQueue);
        if ( v14 )
          VidSchiCompletePendingFlipOnPlane((__int64)a1, (__int64)a2, a3, (__int64)FlipQueue, 9);
        goto LABEL_16;
      }
      for ( i = ((unsigned __int8)*((_DWORD *)FlipQueue + 19) + 1) & 0x3F;
            i != (((unsigned __int8)*((_DWORD *)FlipQueue + 14) + 1) & 0x3F);
            i = ((_BYTE)i + 1) & 0x3F )
      {
        if ( *((_DWORD *)FlipQueue + 350 * i + 293) == 14 )
          goto LABEL_14;
      }
    }
    else if ( v9 && *(_BYTE *)(v7 + 78948) )
    {
      goto LABEL_14;
    }
LABEL_16:
    ++v6;
  }
}
