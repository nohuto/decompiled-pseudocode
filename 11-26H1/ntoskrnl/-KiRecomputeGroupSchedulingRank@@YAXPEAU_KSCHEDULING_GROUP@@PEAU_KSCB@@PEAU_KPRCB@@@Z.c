/*
 * XREFs of ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x140337FA0
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z @ 0x1403388C0 (-KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z.c)
 */

void __fastcall KiRecomputeGroupSchedulingRank(struct _KSCHEDULING_GROUP *a1, struct _KSCB *a2, struct _KPRCB *a3)
{
  unsigned __int64 v6; // r9
  volatile signed __int32 *ShareRank; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 RankCycleTarget; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rtt
  volatile signed __int32 *v12; // rcx

  KiChargeSchedulingGroupCycleTime(a1, a2);
  v6 = KiCycleDivisorShortTerm * a1->RelativeWeight;
  ++a2->Rank;
  ShareRank = (volatile signed __int32 *)a2->ShareRank;
  v8 = v6 >> 7;
  a2->RankCycleTarget += v8;
  if ( ShareRank )
    _InterlockedIncrement(ShareRank);
  RankCycleTarget = a2->RankCycleTarget;
  if ( a2->GenerationCycles > RankCycleTarget )
  {
    v11 = v8 + a2->GenerationCycles - RankCycleTarget - 1;
    v10 = v11 / v8;
    a2->Rank += v11 / v8;
    a2->RankCycleTarget = RankCycleTarget + v8 * (unsigned int)(v11 / v8);
    v12 = (volatile signed __int32 *)a2->ShareRank;
    if ( v12 )
      _InterlockedAdd(v12, v10);
  }
  if ( (*(_BYTE *)&a2->0 & 1) != 0 )
    KiResortScbQueue(a3, a2, 1u);
}
