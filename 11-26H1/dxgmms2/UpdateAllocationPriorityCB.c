/*
 * XREFs of UpdateAllocationPriorityCB @ 0x1401227C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003BC64 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?VidMmiIsDemotedSegmentForThisAllocation@@YA_NPEBUVIDMM_SEGMENT_BASE@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E220 (-VidMmiIsDemotedSegmentForThisAllocation@@YA_NPEBUVIDMM_SEGMENT_BASE@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1400C7184 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1401196A0 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

__int64 __fastcall UpdateAllocationPriorityCB(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *a3,
        unsigned __int8 *a4)
{
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // r11
  __int64 v14; // rdi
  _QWORD *v15; // r10
  __int64 v16; // r14
  char v17; // r9
  _QWORD *v18; // rdx
  VIDMM_PROCESS_BUDGET_STATE *v19; // r8
  char IsHighPriorityProcess; // al
  struct VIDMM_PROCESS_BUDGET_STATE *v21; // r8
  VIDMM_GLOBAL *v22; // r10

  v8 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8LL * *((unsigned __int16 *)a3 + 8));
  if ( VidMmiIsDemotedSegmentForThisAllocation(
         (const struct VIDMM_SEGMENT_BASE *)((v8 + 8) & -(__int64)(v8 != 0)),
         *(const struct VIDMM_GLOBAL_ALLOC **)a2) )
  {
    v11 = *((unsigned int *)a3 + 3);
    v12 = (_QWORD *)(v9 + 112);
    v13 = *(_QWORD **)(v9 + 112);
    v14 = v11 << 12;
    while ( v13 != v12 )
    {
      v15 = v13 - 2;
      v16 = *(v13 - 5);
      v17 = 0;
      v18 = (_QWORD *)*(v13 - 2);
      v19 = (VIDMM_PROCESS_BUDGET_STATE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 32)
                                                                 + 8LL
                                                                 * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 7)
                                                                                               + 24LL)
                                                                                   + 240LL))
                                                     + 8LL)
                                         + 304LL * ((*((_DWORD *)a2 + 13) >> 2) & 0x3F)
                                         + 8);
      if ( v18 != v13 - 2 )
      {
        do
        {
          if ( (*((_DWORD *)v18 - 3) & 3) == 2 )
          {
            *((_QWORD *)v19 + *a4 + 32) -= v14;
            *((_QWORD *)v19 + a4[1] + 32) += v14;
            if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v19) )
              v17 = 1;
          }
          v18 = (_QWORD *)*v18;
        }
        while ( v18 != v15 );
        if ( v17 )
        {
          IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(v16 + 72));
          VIDMM_GLOBAL::AddToPromotionCandidateList(v22, (*((_DWORD *)a2 + 13) >> 2) & 0x3F, v21, IsHighPriorityProcess);
        }
      }
      v13 = (_QWORD *)*v13;
    }
  }
  return 0LL;
}
