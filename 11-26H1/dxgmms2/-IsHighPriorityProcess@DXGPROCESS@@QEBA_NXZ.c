/*
 * XREFs of ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003BC64
 * Callers:
 *     UpdateProcessStatusBudgetingInfo @ 0x1400A6654 (UpdateProcessStatusBudgetingInfo.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1400C6FFC (-AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010C244 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_NPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1401116CC (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_N.c)
 *     UpdateAllocationPriorityCB @ 0x1401227C0 (UpdateAllocationPriorityCB.c)
 * Callees:
 *     ?IsForegroundProcess@DXGPROCESS@@QEBA_NXZ @ 0x14004ACA0 (-IsForegroundProcess@DXGPROCESS@@QEBA_NXZ.c)
 */

char __fastcall DXGPROCESS::IsHighPriorityProcess(DXGPROCESS *this)
{
  bool IsForegroundProcess; // al
  char v2; // cl

  if ( (*((_DWORD *)this + 102) & 4) != 0 )
    return 1;
  IsForegroundProcess = DXGPROCESS::IsForegroundProcess(this);
  v2 = 0;
  if ( IsForegroundProcess )
    return 1;
  return v2;
}
