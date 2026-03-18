/*
 * XREFs of ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400E4CD8
 * Callers:
 *     ?VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14009BD68 (-VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     FlushTemporaryResources @ 0x1400AF4C4 (FlushTemporaryResources.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E090 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     FlushTemporaryResources_0 @ 0x140114508 (FlushTemporaryResources_0.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x14003B0B8 (VidSchIsMonitoredFenceSignaled.c)
 */

bool __fastcall VIDMM_GLOBAL::IsPagingOperationPending(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v4 = *((_QWORD *)a2 + (a3 ^ 1LL) + 10);
  v5 = (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F;
  v6 = *((_QWORD *)this + v5 + 677);
  return (v6 <= v4 || v6 - v4 < 0x7FFFFFFF) && VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v5 + 741), v4) == 0;
}
