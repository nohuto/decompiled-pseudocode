/*
 * XREFs of ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140049444
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A620 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x140007A8C (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140008F9C (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x14003A48C (-DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z.c)
 *     McTemplateK0pxpqq_EtwWriteTransfer @ 0x14003B450 (McTemplateK0pxpqq_EtwWriteTransfer.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x14004AF78 (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall SubmitPagingToHwQueue(struct HwQueueStagingList ***a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  struct HwQueueStagingList ***v4; // r12
  LARGE_INTEGER *v5; // r13
  LARGE_INTEGER v6; // r15
  __int64 QuadPart; // rsi
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r9
  _DWORD *v16; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v18; // [rsp+38h] [rbp-48h]
  _DXGKARG_SUBMITCOMMANDTOHWQUEUE v19; // [rsp+40h] [rbp-40h] BYREF

  v2 = *((_QWORD *)a2 + 12);
  v4 = a1;
  v5 = *(LARGE_INTEGER **)(v2 + 40);
  v6 = v5[2];
  QuadPart = v5[1].QuadPart;
  v8 = *(_QWORD *)(v6.QuadPart + 24);
  ++*(_DWORD *)(v2 + 152);
  *((_DWORD *)a2 + 20) |= 0x40u;
  if ( (*(_BYTE *)(v8 + 3284) & 1) != 0
    || (a1 = 0LL, *(_DWORD *)(v8 + 3260))
    || *(_BYTE *)(QuadPart + 212)
    || _InterlockedCompareExchange((volatile signed __int32 *)(QuadPart + 208), 0, 0) )
  {
    VidSchiSimulateProgressFenceCompletion((struct HwQueueStagingList *)a1, a2, (struct VIDSCH_HW_QUEUE *)v2);
    VidSchiCompleteHwQueuePacket(v4, a2, 0);
  }
  else
  {
    *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a2 + 13) = 9;
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v6.QuadPart);
    v9 = 0LL;
    if ( !*(_BYTE *)(352LL * *(unsigned __int16 *)(v6.QuadPart + 6)
                   + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL) + 3032LL)
                   + 48) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 24576LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 916;
    }
    v10 = *((_QWORD *)a2 + 36);
    *(_QWORD *)&v19.Flags.0 = v9;
    v19.hHwQueue = *(HANDLE *)(v2 + 112);
    v19.HwQueueProgressFenceId = *((_QWORD *)a2 + 37);
    v19.HwQueueProgressFenceCpuVa = (void *)*((_QWORD *)a2 + 39);
    v19.HwQueueProgressFenceGpuVa = *((_QWORD *)a2 + 38);
    v19.DmaBufferVirtualAddress = *(_QWORD *)(v10 + 88) + *((unsigned int *)a2 + 83);
    v19.DmaBufferSize = *((_DWORD *)a2 + 84);
    v19.pDmaBufferPrivateData = (void *)(*(_QWORD *)(v10 + 120) + *((unsigned int *)a2 + 85));
    v19.DmaBufferPrivateDataSize = *((_DWORD *)a2 + 86);
    v19.Flags.Value = v9 | 1;
    v11 = ADAPTER_RENDER::DdiSubmitCommandToHwQueue(*(ADAPTER_RENDER **)(v8 + 8), &v19);
    v13 = v11;
    if ( (byte_14008A201 & 1) != 0 )
    {
      v14 = *((_QWORD *)a2 + 12);
      v15 = *(_QWORD *)(v14 + 48);
      if ( !v15 )
        v15 = *((_QWORD *)a2 + 12);
      v18 = *(_DWORD *)(QuadPart + 1840);
      McTemplateK0pxpqq_EtwWriteTransfer(
        v14,
        v18,
        v12,
        v15,
        v19.HwQueueProgressFenceId,
        v19.DmaBufferVirtualAddress,
        v11,
        v18);
    }
    v16 = (_DWORD *)(*(_QWORD *)(v6.QuadPart + 184) + 112LL * *(unsigned int *)(v6.QuadPart + 196));
    memset(v16, 0, 0x70uLL);
    *(_DWORD *)(v6.QuadPart + 196) = (*(_DWORD *)(v6.QuadPart + 196) + 1) & (*(_DWORD *)(v6.QuadPart + 192) - 1);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *((LARGE_INTEGER *)v16 + 1) = PerformanceCounter;
    *v16 = 8;
    *((_QWORD *)v16 + 10) = *((_QWORD *)a2 + 37);
    v16[22] = 0;
    *(_DXGKARG_SUBMITCOMMANDTOHWQUEUE *)(v16 + 4) = v19;
    v16[23] = v13;
    v5[28] = PerformanceCounter;
    if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741822 )
      VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v4, QuadPart, 19, 0LL);
  }
}
