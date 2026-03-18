/*
 * XREFs of ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x14009B954
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEAU1@0PEBUVIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC@@PEAX@Z3I@Z @ 0x14003D744 (-IterateAllPhysicalMemoryRangesEx@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@P6AJPEA.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400E1030 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x14010F778 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateAllocationPriority(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, int a3)
{
  _DWORD *v4; // r9
  __int64 v5; // rax
  struct VIDMM_PHYSICAL_ALLOC *v6; // rdi
  __int64 v7; // rcx
  VIDMM_PHYSICAL_ADAPTER *v8; // rsi
  unsigned int v9; // r8d
  char AllocationPriorityClassFromPriority; // al
  char v11; // dl
  __int64 v12; // r9
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+51h] [rbp+9h]

  if ( (*((_BYTE *)this + 41065) & 0x20) == 0 )
  {
    v4 = **(_DWORD ***)a2;
    v5 = *((_QWORD *)this + 5040);
    v6 = *(struct VIDMM_PHYSICAL_ALLOC **)v4;
    v7 = *(unsigned int *)(*(_QWORD *)v4 + 48LL);
    v8 = *(VIDMM_PHYSICAL_ADAPTER **)(v5 + 8LL * ((*(_DWORD *)(*(_QWORD *)v4 + 52LL) >> 2) & 0x3F));
    *(_DWORD *)(*(_QWORD *)v4 + 48LL) = a3;
    if ( v4[18] == 2 )
    {
      GetAllocationPriorityClassFromPriority(v7);
      AllocationPriorityClassFromPriority = GetAllocationPriorityClassFromPriority(v9);
      if ( v11 != AllocationPriorityClassFromPriority )
      {
        v14 = v11;
        v15 = AllocationPriorityClassFromPriority;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(v12 + 136), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
        VIDMM_PHYSICAL_ADAPTER::IterateAllPhysicalMemoryRangesEx(v8, v6, UpdateAllocationPriorityCB, &v14, 0);
        DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v13);
        VIDMM_GLOBAL::RequestNewBudget(this, 1);
      }
    }
  }
}
