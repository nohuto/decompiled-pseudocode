/*
 * XREFs of VidSchiRestartQueuedFlip @ 0x1400324EC
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140032608 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400329BC (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x140034B7C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x140059AC0 (-VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUE.c)
 */

__int64 __fastcall VidSchiRestartQueuedFlip(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbp
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 result; // rax
  int v14; // edx
  unsigned int v15; // [rsp+20h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 40);
  v7 = a3;
  if ( *(_BYTE *)(v5 + 67) )
    VidSchiCancelHwQueuedFlips(a1, (struct _VIDSCH_DEVICE *)a2, a3, a4, v15);
  v10 = *((_DWORD *)a4 + 16);
  if ( v10 != a5 )
  {
    v11 = VidSchiCompleteFlipEntry(a1, v5, v7, (__int64)a4, v10, ((_BYTE)a5 - 1) & 0x3F, 6u, 0LL);
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 32LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 40) + 4LL))
                      + 8 * v7
                      + 88);
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v7 + 6728) + 8LL), -v11);
      *(_DWORD *)(*(_QWORD *)(v5 + 8 * v7 + 6728) + 4LL) += v11;
      _InterlockedAdd((volatile signed __int32 *)(v12 + 8), -v11);
      *(_DWORD *)(v12 + 4) += v11;
    }
  }
  if ( !*(_BYTE *)(v5 + 7086)
    || (result = *((unsigned int *)a4 + 350 * a5 + 293), (_DWORD)result)
    && ((unsigned int)result > 0xF || (v14 = 37472, !_bittest(&v14, result))) )
  {
    *((_DWORD *)a4 + 16) = a5;
    return VidSchiUpdateFlipQueueHistory(6LL, v5, (unsigned int)v7, a4, a5);
  }
  return result;
}
