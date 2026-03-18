/*
 * XREFs of ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1400C7184
 * Callers:
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1400C6FFC (-AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_NPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1401116CC (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_N.c)
 *     UpdateAllocationPriorityCB @ 0x1401227C0 (UpdateAllocationPriorityCB.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(VIDMM_PROCESS_BUDGET_STATE *this)
{
  if ( *((_QWORD *)this + 36) || *((_QWORD *)this + 35) )
    return 1;
  if ( *((_QWORD *)this + 32) || *((_QWORD *)this + 33) || *((_QWORD *)this + 34) )
    return *((_QWORD *)this + 25) < *((_QWORD *)this + 3);
  return 0;
}
