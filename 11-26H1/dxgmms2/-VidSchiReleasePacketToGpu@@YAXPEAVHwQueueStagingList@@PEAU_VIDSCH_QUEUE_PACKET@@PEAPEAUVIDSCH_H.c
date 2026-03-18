/*
 * XREFs of ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620
 * Callers:
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A150 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004BBB4 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A798 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1400136F8 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014A48 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140049444 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiReleasePacketToGpu(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE **a3,
        struct _KLOCK_QUEUE_HANDLE *a4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  struct _VIDSCH_QUEUE_PACKET *v10; // r8
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax

  v4 = *((_QWORD *)a2 + 12);
  v5 = (_QWORD *)((char *)a2 + 32);
  v10 = *(struct _VIDSCH_QUEUE_PACKET **)(v4 + 208);
  if ( v10 == (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 32) )
  {
    WdLogSingleEntry3(4LL, *((_QWORD *)a2 + 12), v10, *v5);
    *(_QWORD *)(v4 + 208) = *v5;
    WdLogGlobalForLineNumber = 4667;
  }
  v11 = *((_DWORD *)a2 + 12);
  if ( !v11 )
  {
    SubmitRenderToHwQueue(a1, a2, a3, a4);
    return;
  }
  if ( v11 == 5 )
  {
    if ( *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 12) + 160LL )
    {
      VidSchiCompleteHwQueueSignalPacket(a1, a2, (bool)v10);
      return;
    }
LABEL_8:
    *((_DWORD *)a2 + 20) |= 1u;
    return;
  }
  v12 = v11 - 3;
  if ( !v12 )
  {
    VidSchiSubmitHwQueueMmIoFlipCommand(a1, a2);
    return;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 3;
    if ( !v14 )
    {
      if ( *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 12) + 160LL )
      {
        VidSchiCompleteHwQueuePacket(a1, a2, 1);
        return;
      }
      goto LABEL_8;
    }
    if ( v14 == 1 )
      SubmitPagingToHwQueue(a1, a2);
  }
  else
  {
    v15 = *((_DWORD *)a2 + 70);
    if ( (v15 & 1) == 0 )
    {
      if ( (v15 & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(a1);
      else
        VidSchiUnwaitWaitQueuePacket(a1);
    }
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 777;
    VidSchiFreeCompletedHwQueuePacket(a2);
  }
}
