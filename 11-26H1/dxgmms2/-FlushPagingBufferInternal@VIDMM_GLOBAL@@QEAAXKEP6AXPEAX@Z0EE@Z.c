/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@21U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A0BA8 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFE.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400A1420 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     FlushTemporaryResources @ 0x1400AF4C4 (FlushTemporaryResources.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z @ 0x1400B6084 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 *     PageInAllocation_0 @ 0x1400D2924 (PageInAllocation_0.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D83E4 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1400E58B8 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1400E6514 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1400E7230 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E7CEC (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400FF9E0 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     FlushTemporaryResources_0 @ 0x140114508 (FlushTemporaryResources_0.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x140116E50 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x140039488 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x140039708 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     CommitPendingTemporaryResources @ 0x14004DA18 (CommitPendingTemporaryResources.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidMmAcquireDmaBuffer @ 0x1400EB3D0 (VidMmAcquireDmaBuffer.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     VidSchSubmitPagingCommand @ 0x1401092D8 (VidSchSubmitPagingCommand.c)
 *     VidSchSignalPagingFences @ 0x14010A330 (VidSchSignalPagingFences.c)
 *     ?GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@QEAAXKPEA_K@Z @ 0x14010FA54 (-GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@QEAAXKPEA_K@Z.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_PAGING_DATA@@K@Z @ 0x140116158 (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_PAGING_DATA@@K@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1401267F0 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?VidMmFlushDmaBufferPendingCPUAccess@@YAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x140128230 (-VidMmFlushDmaBufferPendingCPUAccess@@YAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int8 a3,
        void (__fastcall *a4)(void *),
        void *a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  __int64 v7; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r15
  _QWORD *v13; // rax
  char v14; // al
  char v15; // al
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  char v18; // cl
  unsigned int v19; // edx
  __int64 v20; // rcx
  struct _VIDSCH_SYNC_OBJECT *v21; // r8
  unsigned __int64 v22; // r12
  char v23; // si
  __int64 v24; // rax
  int v25; // edx
  unsigned __int8 v26; // r13
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // edx
  unsigned int v32; // r8d
  int v33; // r9d
  __int64 v34; // r8
  __int64 v35; // [rsp+30h] [rbp-61h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int64 v37; // [rsp+40h] [rbp-51h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v38; // [rsp+48h] [rbp-49h] BYREF
  __int64 v39; // [rsp+50h] [rbp-41h] BYREF
  __int64 v40; // [rsp+58h] [rbp-39h]
  unsigned __int64 v41; // [rsp+60h] [rbp-31h]
  __int64 v42; // [rsp+68h] [rbp-29h]
  __int64 v43; // [rsp+70h] [rbp-21h]
  __int64 v44; // [rsp+78h] [rbp-19h]
  int v45; // [rsp+80h] [rbp-11h]
  int v46; // [rsp+84h] [rbp-Dh]
  int v47; // [rsp+88h] [rbp-9h]
  int v48; // [rsp+8Ch] [rbp-5h]
  int v49; // [rsp+90h] [rbp-1h]
  int v50; // [rsp+94h] [rbp+3h]
  bool v51; // [rsp+98h] [rbp+7h]
  int v52; // [rsp+99h] [rbp+8h]
  __int16 v53; // [rsp+9Dh] [rbp+Ch]
  char v54; // [rsp+9Fh] [rbp+Eh]
  int v55; // [rsp+E0h] [rbp+4Fh] BYREF
  bool v56; // [rsp+E8h] [rbp+57h] BYREF

  v7 = *((_QWORD *)this + 5040);
  v55 = 0;
  v35 = 0LL;
  v10 = a2;
  v11 = a3;
  v52 = 0;
  v53 = 0;
  v12 = *(_QWORD *)(v7 + 8LL * a2);
  v54 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v13[3] = v11;
    v13[4] = *((unsigned int *)this + v10 + 416);
    v13[5] = *((unsigned int *)this + v10 + 480);
    WdLogGlobalForLineNumber = 15452;
  }
  v14 = *((_BYTE *)this + 41066);
  if ( (v14 & 1) != 0 && (_BYTE)v11 )
    *((_BYTE *)this + 41066) = v14 | 2;
  VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v10);
  v15 = *((_BYTE *)this + 41066);
  if ( (v15 & 1) == 0 )
  {
    if ( a6 && (v15 & 2) != 0 )
      LOBYTE(v11) = 0;
    *((_BYTE *)this + 41066) = v15 & 0xFD;
  }
  if ( *((_DWORD *)this + v10 + 480) == *((_DWORD *)this + v10 + 416)
    && *((_DWORD *)this + v10 + 608) == *((_DWORD *)this + v10 + 544)
    && !(_BYTE)v11 )
  {
    CommitPendingTemporaryResources(v12);
  }
  else
  {
    if ( !*((_DWORD *)this + 2) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 33LL, this, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    v16 = *((_QWORD *)this + v10 + 144);
    v17 = *(_QWORD **)(v16 + 48);
    if ( !v17 || (*((_BYTE *)this + 41065) & 0x20) != 0 )
      v35 = *(_QWORD *)(v16 + 80);
    else
      (*(void (__fastcall **)(__int64, _QWORD, int *, __int64 *, _QWORD))(*(_QWORD *)v12 + 48LL))(
        v12,
        *v17,
        &v55,
        &v35,
        0LL);
    if ( a4 )
      a4(a5);
    VidMmFlushDmaBufferPendingCPUAccess(*((struct VIDMM_DMA_BUFFER **)this + v10 + 144));
    if ( *((_DWORD *)this + v10 + 416) != *((_DWORD *)this + v10 + 480)
      || (v18 = 1, *((_DWORD *)this + v10 + 544) != *((_DWORD *)this + v10 + 608)) )
    {
      v18 = 0;
    }
    if ( *((_DWORD *)this + v10 + 1161) || !v18 )
    {
      if ( (*(_BYTE *)(v12 + 557) & 8) != 0 )
      {
        WdLogSingleEntry1(3LL, v10);
        WdLogGlobalForLineNumber = 15586;
      }
      v36 = 0LL;
      VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(this, v10, &v36);
      v20 = *((_QWORD *)this + 2);
      v21 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + v10 + 741);
      v22 = v36;
      v23 = *(_BYTE *)(*(_QWORD *)(v20 + 744) + 63LL);
      v56 = v23;
      v38 = v21;
      v37 = v36;
      if ( v23 && !*(_BYTE *)(*(_QWORD *)(v20 + 744) + 66LL) )
      {
        VIDMM_GLOBAL::SignalMonitoredFence(this, v19, v21, v36, &v56);
        v23 = v56;
      }
      v24 = *((_QWORD *)this + v10 + 741);
      v39 = 256LL;
      v41 = v22;
      v43 = *(_QWORD *)(v24 + 72);
      v42 = *((_QWORD *)this + v10 + 805);
      v40 = *((_QWORD *)this + v10 + 144);
      _InterlockedIncrement((volatile signed __int32 *)(v40 + 32));
      v25 = *((_DWORD *)this + v10 + 480);
      v26 = a7;
      v47 = *((_DWORD *)this + v10 + 416) - v25;
      v27 = *((_DWORD *)this + v10 + 544);
      v46 = v25;
      v28 = v27 - *((_DWORD *)this + v10 + 608);
      v48 = *((_DWORD *)this + v10 + 608);
      v49 = v28;
      v29 = *((_QWORD *)this + 3);
      v45 = v55;
      v44 = v35;
      v30 = *(_QWORD *)(v29 + 3032) + 352 * v10;
      if ( a7 )
        v31 = *(_DWORD *)(v30 + 20);
      else
        v31 = *(unsigned __int16 *)(v30 + 2);
      v50 = VidSchiDriverNodeEngineToSchedulerNode(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), v31, v10);
      v51 = v26 != 0;
      if ( (*((_BYTE *)this + 41064) & 2) != 0 )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(this, (struct _VIDSCH_PAGING_DATA *)&v39, v32);
      VidSchSubmitPagingCommand(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), &v39);
      if ( !v23 )
        VidSchSignalPagingFences(
          *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
          (unsigned int)&v38,
          (unsigned int)&v37,
          v33,
          v10,
          v26 != 0);
      *((_QWORD *)this + v10 + 677) = v22;
    }
    *((_DWORD *)this + v10 + 480) = *((_DWORD *)this + v10 + 416);
    *((_DWORD *)this + v10 + 608) = *((_DWORD *)this + v10 + 544);
    CommitPendingTemporaryResources(v12);
    *((_DWORD *)this + v10 + 948) = 1;
    *((_DWORD *)this + v10 + 1161) = 0;
    if ( (_BYTE)v11 )
    {
      VidMmReleaseDmaBuffer(*((struct VIDMM_DMA_BUFFER **)this + v10 + 144), 1);
      LOBYTE(v34) = 1;
      VidMmAcquireDmaBuffer(*((_QWORD *)this + v10 + 80), 0LL, v34, (char *)this + 8 * v10 + 1152);
      *(_DWORD *)(*((_QWORD *)this + v10 + 144) + 32LL) = 1;
      *((_DWORD *)this + v10 + 416) = 0;
      *((_DWORD *)this + v10 + 480) = 0;
      *((_DWORD *)this + v10 + 544) = 0;
      *((_DWORD *)this + v10 + 608) = 0;
    }
  }
  *(_QWORD *)(v12 + 568) = 0LL;
}
