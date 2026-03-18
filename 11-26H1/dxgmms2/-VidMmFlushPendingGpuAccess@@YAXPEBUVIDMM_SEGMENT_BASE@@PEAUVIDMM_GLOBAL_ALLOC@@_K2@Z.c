/*
 * XREFs of ?VidMmFlushPendingGpuAccess@@YAXPEBUVIDMM_SEGMENT_BASE@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1400A31E0
 * Callers:
 *     ReleaseTemporaryResourcesForAllocation @ 0x1400AFF9C (ReleaseTemporaryResourcesForAllocation.c)
 *     ?FlushPendingGPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A078 (-FlushPendingGPUAccess@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     ?VidMmFlushAllocationRangeFromProcessorCache@@YAXPEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400A2F6C (-VidMmFlushAllocationRangeFromProcessorCache@@YAXPEAUVIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VidMmFlushPendingGpuAccess(
        const struct VIDMM_SEGMENT_BASE *a1,
        struct VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        ULONG a4)
{
  if ( (*((_DWORD *)a1 + 14) & 0x10) == 0 )
    VidMmFlushAllocationRangeFromProcessorCache(a2, a3, a4);
}
