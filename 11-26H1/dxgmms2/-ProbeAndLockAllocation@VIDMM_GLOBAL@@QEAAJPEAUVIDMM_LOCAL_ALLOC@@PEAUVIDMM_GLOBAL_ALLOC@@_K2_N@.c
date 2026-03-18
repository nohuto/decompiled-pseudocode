/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@Z @ 0x1400A2004
 * Callers:
 *     ?StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A7EAC (-StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1_N2PEA_N@Z @ 0x1400BC9A0 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1_N2PEA_N@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1400EBE64 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ECEC4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ??0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z @ 0x14010CDFC (--0VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@PEAT_LARGE_INTEGER@@PEAI_N@Z.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x14010FC50 (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProbeAndLockAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCAL_ALLOC *a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4,
        unsigned __int64 a5,
        bool a6)
{
  VIDMM_GLOBAL *v8; // rbx
  _BYTE v11[32]; // [rsp+50h] [rbp-28h] BYREF

  v8 = this;
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR(
    (VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v11,
    (union _LARGE_INTEGER *)(*(_QWORD *)this + 8LL * ((**((_DWORD **)a3 + 46) & 4) == 0) + 296),
    (unsigned int *)(*(_QWORD *)this + 4 * (((**((_DWORD **)a3 + 46) & 4) == 0) + 89LL)),
    KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL));
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, int, VIDMM_GLOBAL *, bool))(**((_QWORD **)a3 + 27) + 16LL))(
                  *((_QWORD *)a3 + 27),
                  *((_QWORD *)a3 + 28),
                  a3,
                  a4,
                  a5,
                  ~(unsigned __int8)(*((_DWORD *)a3 + 6) >> 5) & 2,
                  v8,
                  a6);
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v11);
  return (unsigned int)v8;
}
