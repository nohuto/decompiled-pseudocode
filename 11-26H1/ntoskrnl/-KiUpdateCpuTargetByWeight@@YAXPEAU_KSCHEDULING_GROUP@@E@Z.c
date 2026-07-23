/*
 * XREFs of ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128
 * Callers:
 *     KeInsertSchedulingGroup @ 0x14043D6E0 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x14043DB7C (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14043DDE8 (KeSetSchedulingGroupCpuRates.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x14043E070 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405FBB50 (-KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x14043E6EC (-KiResetScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14043E7DC (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405FBB50 (-KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z.c)
 *     EtwTraceScbRankChange @ 0x1406C897C (EtwTraceScbRankChange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall KiUpdateCpuTargetByWeight(struct _KSCHEDULING_GROUP *a1, unsigned __int8 a2)
{
  bool v2; // zf
  unsigned int Weight; // ebx
  unsigned __int16 MaxRate; // bp
  __int64 MaxQuotaCycleTarget; // rsi
  unsigned __int64 v8; // r15
  bool v9; // r8
  __int64 v10; // rbx
  __int16 v11; // r13
  __int64 v12; // rbp
  struct _KPRCB *v13; // r14
  struct _KSCB *v14; // r8
  __int16 v15; // ax
  unsigned __int16 v16; // cx
  __int64 v17; // r9
  struct _LIST_ENTRY *p_ChildList; // rcx
  union _KISOLATION_UNIT_LOCK_HANDLE *v19; // rdx
  _KSCB *Parent; // rsi
  __int64 v21; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  volatile _KSCHEDULING_GROUP_MAX_QUOTA_TRACKER v23; // rt0
  unsigned __int8 v24; // tt
  char v25; // [rsp+20h] [rbp-68h]
  char v26; // [rsp+24h] [rbp-64h]
  __int64 v27; // [rsp+28h] [rbp-60h] BYREF
  volatile _KSCHEDULING_GROUP_MAX_QUOTA_TRACKER MaxQuotaTracker; // [rsp+30h] [rbp-58h]

  v2 = a1->Parent == 0LL;
  Weight = a1->Policy.Weight;
  MaxRate = a1->Policy.MaxRate;
  v27 = 0LL;
  if ( v2 )
  {
    MaxQuotaCycleTarget = KiCyclesPerGeneration;
    v8 = KiCyclesPerGeneration * (unsigned __int64)Weight / (unsigned int)KiGroupSchedulingTotalWeight;
    if ( (_WORD)Weight == MaxRate )
      MaxQuotaCycleTarget = KiCyclesPerGeneration
                          * (unsigned __int64)Weight
                          / (unsigned int)KiGroupSchedulingTotalWeight;
  }
  else
  {
    KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[0], 0, (unsigned __int64 *)&v27);
    Parent = a1->PerProcessor[0].Parent;
    v8 = Parent->MinQuotaCycleTarget * a1->Policy.Weight / a1->Parent->ChildTotalWeight;
    if ( (_WORD)Weight == MaxRate )
      MaxQuotaCycleTarget = Parent->MinQuotaCycleTarget * a1->Policy.Weight / a1->Parent->ChildTotalWeight;
    else
      MaxQuotaCycleTarget = Parent->MaxQuotaCycleTarget;
    KiReleasePrcbLocksForIsolationUnit(&v27);
  }
  v9 = MaxQuotaCycleTarget == KiCyclesPerGeneration;
  if ( v8 == KiCyclesPerGeneration )
    v26 = 32;
  else
    v26 = 0;
  if ( MaxQuotaCycleTarget != KiCyclesPerGeneration )
  {
    v21 = MaxQuotaCycleTarget * (unsigned int)KeNumberProcessors_0;
    a1->MaxQuotaLimitCycles = v21;
    Flink = KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Flink;
    _m_prefetchw((const void *)&a1->MaxQuotaTracker);
    do
    {
      MaxQuotaTracker = a1->MaxQuotaTracker;
      v23 = MaxQuotaTracker;
      v24 = _InterlockedCompareExchange128(
              &a1->MaxQuotaTracker.CyclesRemaining,
              (signed __int64)Flink,
              v21,
              &v23.CyclesRemaining);
      MaxQuotaTracker = v23;
    }
    while ( !v24 );
  }
  v10 = 0LL;
  if ( KeMaximumProcessors )
  {
    v11 = 16 * v9;
    do
    {
      v12 = (unsigned int)v10;
      v25 = 0;
      v13 = (struct _KPRCB *)KiProcessorBlock[v10];
      v14 = &a1->PerProcessor[v12];
      if ( v13 )
      {
        KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[v10], 0, (unsigned __int64 *)&v27);
        v14 = &a1->PerProcessor[v12];
      }
      v15 = a1->PerProcessor[v12].PrcbLockFlags & 0xFFEF;
      a1->PerProcessor[v12].MinQuotaCycleTarget = v8;
      a1->PerProcessor[v12].MaxQuotaCycleTarget = MaxQuotaCycleTarget;
      v16 = (v11 | v15) ^ ((unsigned __int8)v26 ^ (unsigned __int8)(v11 | v15)) & 0x20;
      a1->PerProcessor[v12].PrcbLockFlags = v16;
      a1->PerProcessor[v12].PrcbLockFlags = v16 & 0xFF7F | (16 * (a1->Policy.AllFlags & 8));
      if ( v13 )
      {
        if ( a2 )
        {
          a1->PerProcessor[v12].LongTermCycles = 0LL;
          a1->PerProcessor[v12].OverQuotaHistory = 0LL;
          if ( (a1->Policy.AllFlags & 2) != 0 )
          {
            KiResetScb(v14, v13);
            v25 = 1;
            KiCheckForEffectivePriorityChange(v13, v19, &a1->PerProcessor[v12]);
          }
        }
        KiReleasePrcbLocksForIsolationUnit(&v27);
        if ( v25 && (WORD2(xmmword_140FC0C10) & 0x4000) != 0 )
        {
          LOBYTE(v17) = (*(_BYTE *)&a1->PerProcessor[v12].0 & 2) != 0;
          EtwTraceScbRankChange(a1, (unsigned int)v10, a1->PerProcessor[v12].Rank, v17);
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < KeMaximumProcessors );
  }
  if ( a2 )
    a1->QueryHistoryTimeStamp = KeQueryPerformanceCounter(0LL).QuadPart;
  p_ChildList = &a1->ChildList;
  if ( p_ChildList->Flink != p_ChildList )
    KiUpdateChildrenCpuTarget(p_ChildList, a2);
}
