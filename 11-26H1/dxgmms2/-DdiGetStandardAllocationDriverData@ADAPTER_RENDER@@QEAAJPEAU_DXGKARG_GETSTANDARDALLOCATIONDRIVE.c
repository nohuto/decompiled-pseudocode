/*
 * XREFs of ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x14004CE54
 * Callers:
 *     ?GetFenceStorageAllocInfo@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1400A51E4 (-GetFenceStorageAllocInfo@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_DXGK_ALL.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
        ADAPTER_RENDER *this,
        struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA *))DxgCoreInterface[106])(
           this,
           a2);
}
