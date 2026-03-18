/*
 * XREFs of ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4
 * Callers:
 *     ?MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0514 (-MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAME.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@21U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A0BA8 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFE.c)
 *     ?NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2III_KPEB_K@Z @ 0x1400A1848 (-NotifyResidency2@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@_N2II.c)
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1400A2228 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1400A25F0 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400CDBD4 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z @ 0x1400D76D0 (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11PEBU_MDL@@_N3@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z @ 0x1400D80D8 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D83E4 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@1@Z @ 0x1400D8B94 (-FillAllocationInternal@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_GLOBAL_ALLOC@@_K1IPEBUVIDMM_SEGMENT_BASE@@.c)
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z @ 0x1400D9190 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@_N@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400D941C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1400E6514 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1401267F0 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4)
{
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  void *v12; // rdx

  if ( a3 && (**((_DWORD **)a3 + 46) & 0x10000000) != 0 )
  {
    a4->pDmaBuffer = 0LL;
    a4->pDmaBufferPrivateData = 0LL;
    a4->DmaSize = 0;
    a4->DmaBufferPrivateDataSize = 0;
    *((_QWORD *)this + a2 + 336) = 0LL;
    *((_QWORD *)this + a2 + 400) = 0LL;
    return;
  }
  v6 = a2;
  v7 = 1;
  v8 = *((_QWORD *)this + v6 + 80);
  if ( (*(_DWORD *)(v8 + 36) & 4) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 29LL, v8, a3, 0LL);
    WdLogGlobalForLineNumber = 213;
    goto LABEL_12;
  }
  if ( *((_QWORD *)this + v6 + 336) || *((_QWORD *)this + v6 + 400) )
  {
LABEL_12:
    g_DxgMmsBugcheckExportIndex = v7;
    WdLogSingleEntry5(0LL, 270LL, 86LL, v8, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400D7C75LL);
  }
  v9 = (_QWORD *)*((_QWORD *)this + v6 + 144);
  if ( *(_DWORD *)(v9[16] + 40LL) )
    v10 = *(_QWORD *)(v9[6] + 208LL);
  else
    v10 = v9[8];
  v11 = (void *)(*((unsigned int *)this + v6 + 416) + v10);
  *((_QWORD *)this + v6 + 336) = v11;
  a4->pDmaBuffer = v11;
  v12 = (void *)(*((unsigned int *)this + v6 + 544) + *(_QWORD *)(*((_QWORD *)this + v6 + 144) + 120LL));
  *((_QWORD *)this + v6 + 400) = v12;
  a4->pDmaBufferPrivateData = v12;
  a4->DmaSize = *((_DWORD *)this + v6 + 31) - *((_DWORD *)this + v6 + 416);
  a4->DmaBufferPrivateDataSize = *((_DWORD *)this + v6 + 95) - *((_DWORD *)this + v6 + 544);
  a4->DmaBufferGpuVirtualAddress = *(_QWORD *)(*((_QWORD *)this + v6 + 144) + 88LL);
  a4->DmaBufferWriteOffset = *((_DWORD *)this + v6 + 416);
}
