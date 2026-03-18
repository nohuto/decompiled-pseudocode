/*
 * XREFs of ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_NPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1401116CC
 * Callers:
 *     AddCommitmentCb @ 0x140128280 (AddCommitmentCb.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003BC64 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x14003D780 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1400C7184 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x14010F778 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1401196A0 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::AddCommitment(
        DXGPROCESS **this,
        struct VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT_BASE *a4,
        bool a5,
        const struct VIDMM_GLOBAL_ALLOC *a6)
{
  struct VIDMM_DEVICE_COMMITMENT_INFO *v7; // r9
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int8 v15; // si
  _QWORD *v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rsi
  unsigned __int64 v19; // r9
  int v20; // ecx
  __int64 **v21; // rdx
  __int64 *v22; // rax
  struct VIDMM_SEGMENT_BASE *v23; // rbx
  struct VIDMM_SEGMENT_BASE **v24; // rcx
  __int64 AllocationPriorityClassFromPriority; // r8
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v27; // r10

  v7 = a2;
  v9 = a3;
  v10 = *(_QWORD *)a6;
  v11 = *(_QWORD *)(*(_QWORD *)a6 + 16LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7 = a2;
    v12[3] = this;
    v12[4] = v9;
    v12[5] = a4;
    v12[6] = a5;
    v12[7] = v11;
    WdLogGlobalForLineNumber = 1135;
  }
  v13 = *((_QWORD *)this[4] + v9);
  if ( v13 )
  {
    v13 = *(_QWORD *)(v13 + 8);
    v14 = *(_QWORD *)(304LL * *((unsigned __int16 *)a4 + 30) + v13) + 184LL * *((unsigned __int16 *)a4 + 31);
  }
  else
  {
    v14 = 0LL;
  }
  *(_QWORD *)(v14 + 16) += v11;
  v15 = 1;
  ++*(_DWORD *)(v14 + 56);
  if ( !a5 )
    goto LABEL_6;
  ++*(_DWORD *)(v14 + 8);
  v13 = v14 + 40;
  v21 = *(__int64 ***)(v14 + 48);
  v22 = (__int64 *)((char *)v7 + 16);
  if ( *v21 != (__int64 *)(v14 + 40) )
    goto LABEL_16;
  *v22 = v13;
  *((_QWORD *)v7 + 3) = v21;
  *v21 = v22;
  *(_QWORD *)(v14 + 48) = v22;
  if ( *(_DWORD *)(v14 + 8) != 1 )
LABEL_6:
    v15 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
    v16[3] = v14;
    v16[4] = a4;
    v16[5] = v15;
    v16[6] = v11;
    WdLogGlobalForLineNumber = 6676;
  }
  if ( v15 )
  {
    v23 = (struct VIDMM_SEGMENT_BASE *)(v14 + 24);
    v24 = (struct VIDMM_SEGMENT_BASE **)*((_QWORD *)a4 + 14);
    if ( *v24 == (struct VIDMM_SEGMENT_BASE *)((char *)a4 + 104) )
    {
      *(_QWORD *)v23 = (char *)a4 + 104;
      *((_QWORD *)v23 + 1) = v24;
      *v24 = v23;
      *((_QWORD *)a4 + 14) = v23;
      goto LABEL_10;
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_10:
  v17 = (__int64 *)*((_QWORD *)this[4] + v9);
  v18 = v17[1] + 304 * ((*(_DWORD *)(v10 + 52) >> 2) & 0x3FLL);
  v19 = v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 8LL * *((int *)a4 + 24) + 208), v11);
  if ( (byte_14008A201 & 0x20) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v17[2], &EventVidMmProcessCommitmentChange, v19 - v11);
  v20 = *(_DWORD *)(*((_QWORD *)a4 + 1) + 96LL);
  if ( _bittest(&v20, *((unsigned __int8 *)a4 + 62)) && (*((_DWORD *)a6 + 6) & 0x10) == 0 )
  {
    AllocationPriorityClassFromPriority = (unsigned __int8)GetAllocationPriorityClassFromPriority(*(_DWORD *)(*(_QWORD *)a6 + 48LL));
    *(_QWORD *)(v18 + 8 * AllocationPriorityClassFromPriority + 264) += v11;
    if ( (byte_14008A201 & 0x20) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(
        *v17,
        &EventVidMmProcessDemotedCommitmentChange,
        AllocationPriorityClassFromPriority);
    if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted((VIDMM_PROCESS_BUDGET_STATE *)(v18 + 8)) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(this[9]);
      VIDMM_GLOBAL::AddToPromotionCandidateList(
        v27,
        (*(_DWORD *)(v10 + 52) >> 2) & 0x3F,
        (struct VIDMM_PROCESS_BUDGET_STATE *)(v18 + 8),
        IsHighPriorityProcess);
    }
  }
}
