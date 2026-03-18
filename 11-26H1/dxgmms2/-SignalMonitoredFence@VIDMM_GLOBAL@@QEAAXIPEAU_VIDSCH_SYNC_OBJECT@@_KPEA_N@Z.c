/*
 * XREFs of ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1401267F0
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x14004CF70 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 *     VidSchGetDriverPagingHwQueue @ 0x1400567C0 (VidSchGetDriverPagingHwQueue.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x1400A539C (-GetPagingProcessGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FEN.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400D6590 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7AC4 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUI.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400D7C7C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 */

void __fastcall VIDMM_GLOBAL::SignalMonitoredFence(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDSCH_SYNC_OBJECT *a3,
        UINT64 a4,
        bool *a5)
{
  __int64 v6; // r14
  char v8; // r15
  struct VIDMM_GLOBAL_ALLOC *v9; // r8
  UINT64 v10; // rdi
  VIDMM_FENCE_STORAGE_PAGE *v11; // rcx
  D3DGPU_VIRTUAL_ADDRESS PagingProcessGpuVA; // rax
  __int64 v13; // r9
  ADAPTER_RENDER *v14; // r9
  int v15; // eax
  int v16; // esi
  _DXGKARG_SIGNALMONITOREDFENCE v17; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v18; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v19; // [rsp+220h] [rbp+120h] BYREF
  UINT64 v20; // [rsp+238h] [rbp+138h]

  v20 = a4;
  v6 = a2;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 63LL)
    && !*((_BYTE *)this + 7040)
    && *((_QWORD *)this + a2 + 144)
    && (*(_DWORD *)(*((_QWORD *)this + a2 + 80) + 36LL) & 4) != 0
    && *((_QWORD *)this + a2 + 805) )
  {
    if ( *((struct _VIDSCH_SYNC_OBJECT **)this + a2 + 741) == a3 )
    {
      v8 = 1;
      if ( *((_BYTE *)this + a2 + 4577) )
      {
        *a5 = 1;
        return;
      }
      *((_BYTE *)this + a2 + 4577) = 1;
    }
    else
    {
      v8 = 0;
    }
    memset(&v18, 0, sizeof(v18));
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v6, v9, &v18);
    v10 = v20;
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v6, 0LL, &v18);
      v11 = (VIDMM_FENCE_STORAGE_PAGE *)*((_QWORD *)a3 + 8);
      v17.DmaBufferGpuVirtualAddress = v18.DmaBufferGpuVirtualAddress;
      v17.DmaBufferPrivateDataSize = v18.DmaBufferPrivateDataSize;
      v17.DmaSize = v18.DmaSize;
      *((_DWORD *)&v17.KernelSubmissionType + 1) = 0;
      *(&v17.DmaSize + 1) = 0;
      v17.MonitoredFenceGpuVa = 0LL;
      v18.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE;
      PagingProcessGpuVA = VIDMM_FENCE_STORAGE_PAGE::GetPagingProcessGpuVA(
                             v11,
                             this,
                             (struct _VIDSCH_SYNC_OBJECT *)((char *)a3 + 64),
                             v6);
      v13 = *((_QWORD *)this + 2);
      v17.MonitoredFenceGpuVa = PagingProcessGpuVA;
      v18.UpdateContextAllocation.ContextAllocation = PagingProcessGpuVA;
      v17.MonitoredFenceCpuVa = (void *)*((_QWORD *)a3 + 9);
      v17.MultipassOffset = v18.MultipassOffset;
      v17.pDmaBuffer = v18.pDmaBuffer;
      v17.pDmaBufferPrivateData = v18.pDmaBufferPrivateData;
      v17.MonitoredFenceValue = v10;
      v18.Fill.FillSize = v10;
      v17.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_BUILD_PAGING_BUFFER;
      v17.hHwQueue = (HANDLE)VidSchGetDriverPagingHwQueue(*(_QWORD *)(v13 + 744), v6);
      v15 = ADAPTER_RENDER::DdiSignalMonitoredFence(v14, v18.hSystemContext, &v17);
      v18.DmaBufferPrivateDataSize = v17.DmaBufferPrivateDataSize;
      v16 = v15;
      v18.DmaSize = v17.DmaSize;
      v18.MultipassOffset = v17.MultipassOffset;
      v18.pDmaBuffer = v17.pDmaBuffer;
      v18.pDmaBufferPrivateData = v17.pDmaBufferPrivateData;
      v19 = 0LL;
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v6, 0LL, &v18, v15, 0, &v19, 0LL);
    }
    while ( v16 == -1071775743 );
    *a5 = v16 >= 0;
    if ( v8 )
      *((_BYTE *)this + v6 + 4577) = 0;
  }
  else
  {
    *a5 = 0;
  }
}
