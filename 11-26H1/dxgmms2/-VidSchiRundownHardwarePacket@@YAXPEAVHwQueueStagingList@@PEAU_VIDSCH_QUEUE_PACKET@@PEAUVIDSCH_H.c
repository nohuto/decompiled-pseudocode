/*
 * XREFs of ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004BBB4
 * Callers:
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x140041574 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 * Callees:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1400136F8 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400160B0 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004AF78 (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiRundownHardwarePacket(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE *a3)
{
  struct _VIDSCH_QUEUE_PACKET *v4; // rbx
  struct HwQueueStagingList *v5; // rcx
  struct VIDSCH_HW_QUEUE *v6; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  v5 = (struct HwQueueStagingList *)*((int *)a2 + 12);
  if ( (_DWORD)v5 )
  {
    switch ( (_DWORD)v5 )
    {
      case 3:
        VidSchiSubmitHwQueueMmIoFlipCommand(a1, a2);
        return;
      case 4:
        VidSchiCompleteHwQueueWaitPacket(a1, a2);
        return;
      case 5:
LABEL_8:
        VidSchiCompleteHwQueueSignalPacket(a1, a2);
        return;
      case 7:
        goto LABEL_14;
    }
    if ( (_DWORD)v5 != 8 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 2048LL, a3, a2, v5);
      WdLogGlobalForLineNumber = 916;
      goto LABEL_8;
    }
  }
  if ( (*((_DWORD *)a2 + 20) & 0x40) == 0 )
  {
    v6 = 0LL;
    VidSchiReleasePacketToGpu(a1, a2, &v6, 0LL);
    return;
  }
  VidSchiSimulateProgressFenceCompletion(v5, a2, a3);
  a2 = v4;
LABEL_14:
  VidSchiCompleteHwQueuePacket((struct HwQueueStagingList ***)a1, a2, 0);
}
