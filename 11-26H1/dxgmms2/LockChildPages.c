/*
 * XREFs of LockChildPages @ 0x14004D084
 * Callers:
 *     ?LockHeapAllocation@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_N@Z @ 0x1400B5310 (-LockHeapAllocation@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_A.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LockChildPages(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))DxgCoreInterface[95])(a1, 0LL);
}
