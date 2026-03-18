/*
 * XREFs of UnlockChildPages @ 0x14004D130
 * Callers:
 *     ?UnlockHeapAllocation@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z @ 0x1400B57F0 (-UnlockHeapAllocation@VIDMM_PARAVIRTUALIZATION_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UnlockChildPages(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))DxgCoreInterface[96])(a1, 0LL);
}
