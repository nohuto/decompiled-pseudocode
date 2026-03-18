/*
 * XREFs of ?IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3I@Z @ 0x14003D744
 * Callers:
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x14009B954 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     VidMmReportDmaPoolState @ 0x140124C50 (VidMmReportDmaPoolState.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@_N@Z @ 0x140127C48 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?VidMmFlushDmaBufferPendingCPUAccess@@YAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x140128230 (-VidMmFlushDmaBufferPendingCPUAccess@@YAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::IterateAllPhysicalMemoryRangesEx(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        int (*a3)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *),
        void *a4,
        unsigned int a5)
{
  return (*(__int64 (__fastcall **)(VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, int (*)(struct VIDMM_PHYSICAL_ADAPTER *, struct VIDMM_PHYSICAL_ALLOC *, const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *, void *), void *, unsigned int, _DWORD, _DWORD))(*(_QWORD *)this + 104LL))(
           this,
           a2,
           a3,
           a4,
           a5,
           0,
           *((_QWORD *)a2 + 2) >> 12);
}
