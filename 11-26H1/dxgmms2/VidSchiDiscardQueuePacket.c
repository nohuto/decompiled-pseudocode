/*
 * XREFs of VidSchiDiscardQueuePacket @ 0x1400EA710
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1400E8924 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400E9090 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400EAB34 (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushPendingCommand @ 0x14011DCA0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x14000C1AC (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039708 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     VidMmUnreferenceDmaBuffer @ 0x14003AE50 (VidMmUnreferenceDmaBuffer.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140045214 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x14004CDE8 (-DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidMmBeginDmaBufferCPUAccess_0 @ 0x14010CDD8 (VidMmBeginDmaBufferCPUAccess_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiDiscardQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r13
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v5; // r12
  __int64 v6; // r14
  bool v8; // zf
  UINT v9; // ecx
  UINT v10; // eax
  __int64 v11; // rcx
  UINT v12; // eax
  void *v13; // rax
  __int64 v14; // rcx
  UINT v15; // ecx
  const D3DDDI_PATCHLOCATIONLIST *v16; // rax
  int v17; // eax
  _DXGKARG_CANCELCOMMAND v18; // [rsp+38h] [rbp-39h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v2 = (_DWORD *)((char *)a1 + 72);
  v3 = *((_QWORD *)a1 + 36);
  v5 = *(_QWORD *)(v1 + 96);
  v6 = *(_QWORD *)(*(_QWORD *)(v1 + 104) + 40LL);
  if ( *(_BYTE *)(v6 + 54) )
  {
    memset(&v18, 0, sizeof(v18));
    v8 = (*v2 & 0x8000000) == 0;
    v18.hContext = *(HANDLE *)(v1 + 64);
    if ( v8 )
    {
      if ( !v3 )
        goto LABEL_3;
      v14 = *(_QWORD *)(v3 + 128);
      v18.DmaBufferSize = *(_DWORD *)(v3 + 36);
      v18.pDmaBufferPrivateData = *(void **)(v3 + 120);
      v18.DmaBufferPrivateDataSize = *(_DWORD *)(v14 + 80);
      VidMmBeginDmaBufferCPUAccess_0(v14, v3, &v18.pDmaBuffer);
      v15 = *((_DWORD *)a1 + 88);
      v18.DmaBufferSubmissionEndOffset = *((_DWORD *)a1 + 83);
      v18.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v3 + 104);
      v18.AllocationListSize = *((_DWORD *)a1 + 85);
      v16 = *(const D3DDDI_PATCHLOCATIONLIST **)(v3 + 112);
      v18.DmaBufferPrivateDataSubmissionStartOffset = v15;
      v18.pPatchLocationList = v16;
      v18.PatchLocationListSize = *(_DWORD *)(v3 + 44);
      v18.PatchLocationListSubmissionLength = v18.PatchLocationListSize;
      v18.DmaBufferSubmissionStartOffset = 0;
      v18.DmaBufferPrivateDataSubmissionEndOffset = v18.DmaBufferPrivateDataSize + v15;
      v18.PatchLocationListSubmissionStart = 0;
    }
    else
    {
      v9 = *((_DWORD *)a1 + 83);
      v18.DmaBufferVirtualAddress = *((_QWORD *)a1 + 40);
      v10 = *((_DWORD *)a1 + 90);
      v18.DmaBufferSize = v9;
      v18.DmaBufferSubmissionEndOffset = v9;
      v11 = *((_QWORD *)a1 + 37);
      v18.DmaBufferUmdPrivateDataSize = v10;
      v12 = *((_DWORD *)a1 + 89);
      v18.DmaBufferPrivateDataSubmissionEndOffset = v12;
      if ( v11 )
      {
        v18.DmaBufferPrivateDataSize = *(_DWORD *)(v11 + 8);
        v13 = (void *)(v11 + 16);
      }
      else if ( v3 )
      {
        v18.DmaBufferPrivateDataSize = v12;
        v13 = *(void **)(v3 + 120);
      }
      else
      {
        v18.DmaBufferPrivateDataSize = 0;
        v13 = 0LL;
      }
      v18.pDmaBufferPrivateData = v13;
    }
    v17 = ADAPTER_RENDER::DdiCancelCommand(*(ADAPTER_RENDER **)(v6 + 8), &v18);
    if ( v17 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 9LL, v17, &v18, a1);
      WdLogGlobalForLineNumber = 916;
LABEL_20:
      VidSchiFreeHistoryBufferStorage(a1);
      return VidSchiProcessCompletedQueuePacket(a1);
    }
  }
  if ( v3 && !*((_DWORD *)a1 + 12) )
    VidMmUnreferenceDmaBuffer(v3, 0);
LABEL_3:
  if ( (*v2 & 0x100) != 0 )
  {
    VidMmReleaseDmaBuffer((struct VIDMM_DMA_BUFFER *)v3, *((_DWORD *)a1 + 12) == 8);
    VidSchiSignalRegisteredEvent(v6, (struct _KEVENT **)(v1 + 384));
    VidSchiSignalRegisteredEvent(v6, (struct _KEVENT **)(v5 + 408));
    VidSchiSignalRegisteredEvent(v6, (struct _KEVENT **)(v6 + 1912));
    *(_QWORD *)(v1 + 360) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v1 + 328), 0, 0);
    *(_QWORD *)(v5 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 240), 0, 0);
    *(_QWORD *)(v6 + 1720) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v6 + 1688), 0, 0);
    VidSchiSignalRegisteredEvent(v6, (struct _KEVENT **)(v6 + 1960));
  }
  *((_DWORD *)a1 + 20) |= 0x20u;
  if ( *((_QWORD *)a1 + 34) )
    goto LABEL_20;
  return VidSchiProcessCompletedQueuePacket(a1);
}
