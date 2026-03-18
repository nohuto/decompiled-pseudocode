/*
 * XREFs of ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102D7C
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400FF140 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     MapInVideoMemory @ 0x140102EA8 (MapInVideoMemory.c)
 *     HandlePromotionCandidates @ 0x14011A818 (HandlePromotionCandidates.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101480 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1401016B4 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

struct VIDMM_DEVICE *__fastcall VidMmSuspendAccessToAllocation(VIDMM_GLOBAL **a1, struct VIDMM_GLOBAL_ALLOC *a2)
{
  struct _KTHREAD **v2; // rbp
  _QWORD **v4; // r15
  __int64 v5; // r12
  _QWORD *i; // rdi
  _QWORD *j; // rbx

  v2 = (struct _KTHREAD **)((char *)a2 + 136);
  v4 = (_QWORD **)((char *)a2 + 112);
  v5 = 0LL;
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
    {
      if ( (*((_DWORD *)j - 3) & 3) == 2 )
      {
        if ( !*(_QWORD *)(*(j - 4) + 184LL) )
        {
          DXGFASTMUTEX::Release(v2);
          VIDMM_DEVICE::PartiallySuspend((struct VIDMM_PROCESS **)*(j - 4));
          if ( g_Feature_Largify64KBPrototype )
            v5 = *(j - 4);
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v2);
        }
        VIDMM_GLOBAL::FaultOneAllocation(*a1, (struct VIDMM_ALLOC *)(j - 5));
      }
    }
  }
  DXGFASTMUTEX::Release(v2);
  return (struct VIDMM_DEVICE *)v5;
}
