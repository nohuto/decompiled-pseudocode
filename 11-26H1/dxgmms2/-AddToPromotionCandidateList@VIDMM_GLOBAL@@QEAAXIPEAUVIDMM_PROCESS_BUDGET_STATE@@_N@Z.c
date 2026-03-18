/*
 * XREFs of ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1401196A0
 * Callers:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_NPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1401116CC (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_N.c)
 *     UpdateAllocationPriorityCB @ 0x1401227C0 (UpdateAllocationPriorityCB.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddToPromotionCandidateList(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_PROCESS_BUDGET_STATE *a3,
        char a4)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax

  if ( !*(_QWORD *)a3 )
  {
    v4 = *((_QWORD *)this + 5040);
    v5 = (_QWORD *)(*(_QWORD *)(v4 + 8LL * a2) + 600LL);
    if ( a4 )
    {
      v7 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 )
LABEL_4:
        __fastfail(3u);
      *(_QWORD *)a3 = v7;
      *((_QWORD *)a3 + 1) = v5;
      *(_QWORD *)(v7 + 8) = a3;
      *v5 = a3;
    }
    else
    {
      v6 = *(_QWORD **)(*(_QWORD *)(v4 + 8LL * a2) + 608LL);
      if ( (_QWORD *)*v6 != v5 )
        goto LABEL_4;
      *(_QWORD *)a3 = v5;
      *((_QWORD *)a3 + 1) = v6;
      *v6 = a3;
      v5[1] = a3;
    }
  }
}
