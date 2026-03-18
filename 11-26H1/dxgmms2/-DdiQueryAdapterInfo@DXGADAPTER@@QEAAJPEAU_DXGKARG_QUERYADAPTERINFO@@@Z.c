/*
 * XREFs of ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14004CE78
 * Callers:
 *     ?VidSchiGpuPerfTracing@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1400542E4 (-VidSchiGpuPerfTracing@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x14009A15C (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@I.c)
 *     CreateAndInitializeSegmentsAndMmus @ 0x1400AE950 (CreateAndInitializeSegmentsAndMmus.c)
 *     CreatePhysicalAdapterSegments @ 0x1400B14D0 (CreatePhysicalAdapterSegments.c)
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@Z@Z @ 0x1400BE6C0 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@Z@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryAdapterInfo(DXGADAPTER *this, struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  return ((__int64 (__fastcall *)(DXGADAPTER *, struct _DXGKARG_QUERYADAPTERINFO *))DxgCoreInterface[12])(this, a2);
}
