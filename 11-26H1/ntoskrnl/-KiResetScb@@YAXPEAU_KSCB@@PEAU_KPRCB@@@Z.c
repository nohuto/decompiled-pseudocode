/*
 * XREFs of ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x14043E6EC
 * Callers:
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E3E4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 * Callees:
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14043E8C0 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall KiResetScb(struct _KSCB *a1, struct _KPRCB *a2)
{
  volatile signed __int32 *ShareRank; // r8
  struct _KSCB *v4; // rbx
  _KSCB *Parent; // rax
  unsigned int Rank; // eax
  struct _KPRCB *v7; // r8
  unsigned __int64 Root; // rax

  ShareRank = (volatile signed __int32 *)a1->ShareRank;
  a1->GenerationCycles = 0LL;
  a1->PrcbLockFlags &= 0xFFF9u;
  a1->RankCycleTarget = 0LL;
  v4 = a1;
  a1->LastReportedCycles = 0LL;
  a1->ReadyTime = 0LL;
  if ( ShareRank )
    _InterlockedAdd(ShareRank, -a1->Rank);
  a1->Rank = 0;
  a1->PrcbLockFlags &= ~8u;
  if ( a1->ReadySummary )
  {
    do
    {
      Parent = a1->Parent;
      if ( !Parent )
        break;
      a1 = a1->Parent;
    }
    while ( !Parent->Rank );
    Rank = a1->Rank;
    v7 = 0LL;
    if ( !Rank )
      v7 = a2;
    KiMoveScbThreadsToNewReadylist(v4, (struct _KSCB *)((unsigned __int64)a1 & -(__int64)(Rank != 0)), v7, 0LL);
    if ( (*(_BYTE *)&v4->0 & 1) != 0 )
    {
      Root = (unsigned __int64)v4->ChildScbQueue.Root;
      if ( (*(_BYTE *)&v4->ChildScbQueue.0 & 1) != 0 )
      {
        if ( !Root )
          goto LABEL_12;
        Root ^= (unsigned __int64)&v4->ChildScbQueue;
      }
      if ( !Root )
LABEL_12:
        KiRemoveSchedulingGroupQueue(a2, v4, 0);
    }
  }
}
