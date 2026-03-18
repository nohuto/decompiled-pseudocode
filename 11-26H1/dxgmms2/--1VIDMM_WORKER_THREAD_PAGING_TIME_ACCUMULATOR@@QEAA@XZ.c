/*
 * XREFs of ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x14010FC50
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@Z @ 0x1400A2004 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@.c)
 *     VidMmDemoteAllocationsToFitGlobalAlloc @ 0x140100748 (VidMmDemoteAllocationsToFitGlobalAlloc.c)
 *     VidMmSuspendDevices @ 0x14010107C (VidMmSuspendDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
        VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *this)
{
  if ( *((_BYTE *)this + 16) )
    **((_QWORD **)this + 1) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)this;
}
