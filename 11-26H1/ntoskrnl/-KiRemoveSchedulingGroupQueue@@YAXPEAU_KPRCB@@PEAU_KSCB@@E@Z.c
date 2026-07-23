/*
 * XREFs of ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x140307964 (KiRemoveThreadFromScbQueue.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1403364D0 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140338054 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140338300 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KeSetSchedulingGroupRankBias @ 0x14043D434 (KeSetSchedulingGroupRankBias.c)
 *     ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x14043E6EC (-KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

void __fastcall KiRemoveSchedulingGroupQueue(struct _KPRCB *a1, struct _KSCB *a2, char a3)
{
  _RTL_RB_TREE *p_ScbQueue; // rsi
  _KSCB **p_Parent; // r14
  _KSCB *Parent; // rax
  _RTL_RB_TREE *p_ChildScbQueue; // rdi
  _RTL_RB_TREE *v9; // rcx
  unsigned __int64 Root; // rcx

  p_ScbQueue = &a1->ScbQueue;
  do
  {
    p_Parent = &a2->Parent;
    Parent = a2->Parent;
    p_ChildScbQueue = &Parent->ChildScbQueue;
    if ( !Parent )
      p_ChildScbQueue = p_ScbQueue;
    if ( a3 )
      a2->ReadyTime += MEMORY[0xFFFFF78000000008] - a2->InsertTime;
    a2->PrcbLockFlags &= ~1u;
    RtlRbRemoveNode(p_ChildScbQueue, &a2->QueueNode);
    if ( p_ChildScbQueue == p_ScbQueue && !p_ScbQueue->Root && !a1->ReadyThreadCount )
      _InterlockedAnd64(
        (volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues,
        ~a1->GroupSetMember);
    a2 = *p_Parent;
    if ( !*p_Parent || (*(_BYTE *)&a2->0 & 1) == 0 )
      break;
    v9 = &a2->ChildScbQueue;
    if ( (*(_BYTE *)&a2->ChildScbQueue.0 & 1) == 0 )
    {
      Root = (unsigned __int64)v9->Root;
LABEL_17:
      if ( Root )
        return;
      continue;
    }
    if ( v9->Root )
    {
      Root = (unsigned __int64)v9->Root ^ (unsigned __int64)v9;
      goto LABEL_17;
    }
  }
  while ( !a2->ReadySummary );
}
