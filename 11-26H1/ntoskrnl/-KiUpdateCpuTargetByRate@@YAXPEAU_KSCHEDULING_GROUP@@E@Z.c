/*
 * XREFs of ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E3E4
 * Callers:
 *     KeInsertSchedulingGroup @ 0x14043D6E0 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14043DDE8 (KeSetSchedulingGroupCpuRates.c)
 *     ?KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z @ 0x1405FBB50 (-KiUpdateChildrenCpuTarget@@YAXPEAU_LIST_ENTRY@@E@Z.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1405FBBA4 (KeUpdateGroupSchedulingConstants.c)
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

void __fastcall KiUpdateCpuTargetByRate(struct _KSCHEDULING_GROUP *a1, unsigned __int8 a2)
{
  bool v2; // zf
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  bool v7; // r8
  __int64 v8; // rbx
  __int16 v9; // r13
  __int64 v10; // rsi
  struct _KPRCB *v11; // r15
  struct _KSCB *v12; // r8
  __int16 v13; // ax
  unsigned __int16 v14; // cx
  struct _LIST_ENTRY *p_ChildList; // rcx
  union _KISOLATION_UNIT_LOCK_HANDLE *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  volatile _KSCHEDULING_GROUP_MAX_QUOTA_TRACKER v20; // rt0
  unsigned __int8 v21; // tt
  _KSCB *Parent; // rbx
  char v23; // [rsp+20h] [rbp-68h]
  char v24; // [rsp+24h] [rbp-64h]
  __int64 v25; // [rsp+28h] [rbp-60h] BYREF
  volatile _KSCHEDULING_GROUP_MAX_QUOTA_TRACKER MaxQuotaTracker; // [rsp+30h] [rbp-58h]

  v2 = a1->Parent == 0LL;
  v25 = 0LL;
  if ( v2 )
  {
    v5 = KiCyclesPerGeneration * (unsigned __int64)a1->Policy.Weight / 0x2710;
    v6 = KiCyclesPerGeneration * (unsigned __int64)a1->Policy.MaxRate / 0x2710;
  }
  else
  {
    KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[0], 0, (unsigned __int64 *)&v25);
    Parent = a1->PerProcessor[0].Parent;
    v5 = Parent->MinQuotaCycleTarget * a1->Policy.Weight / 0x2710;
    v6 = Parent->MaxQuotaCycleTarget * a1->Policy.MaxRate / 0x2710;
    KiReleasePrcbLocksForIsolationUnit(&v25);
  }
  v7 = v6 == KiCyclesPerGeneration;
  if ( v5 == KiCyclesPerGeneration )
    v24 = 32;
  else
    v24 = 0;
  if ( v6 != KiCyclesPerGeneration )
  {
    v18 = v6 * (unsigned int)KeNumberProcessors_0;
    a1->MaxQuotaLimitCycles = v18;
    Flink = KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Flink;
    _m_prefetchw((const void *)&a1->MaxQuotaTracker);
    do
    {
      MaxQuotaTracker = a1->MaxQuotaTracker;
      v20 = MaxQuotaTracker;
      v21 = _InterlockedCompareExchange128(
              &a1->MaxQuotaTracker.CyclesRemaining,
              (signed __int64)Flink,
              v18,
              &v20.CyclesRemaining);
      MaxQuotaTracker = v20;
    }
    while ( !v21 );
  }
  v8 = 0LL;
  if ( KeMaximumProcessors )
  {
    v9 = 16 * v7;
    do
    {
      v10 = (unsigned int)v8;
      v23 = 0;
      v11 = (struct _KPRCB *)KiProcessorBlock[v8];
      v12 = &a1->PerProcessor[v10];
      if ( v11 )
      {
        KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[v8], 0, (unsigned __int64 *)&v25);
        v12 = &a1->PerProcessor[v10];
      }
      v13 = a1->PerProcessor[v10].PrcbLockFlags & 0xFFEF;
      a1->PerProcessor[v10].MinQuotaCycleTarget = v5;
      a1->PerProcessor[v10].MaxQuotaCycleTarget = v6;
      v14 = (v9 | v13) ^ ((unsigned __int8)v24 ^ (unsigned __int8)(v9 | v13)) & 0x20;
      a1->PerProcessor[v10].PrcbLockFlags = v14;
      a1->PerProcessor[v10].PrcbLockFlags = v14 & 0xFF7F | (16 * (a1->Policy.AllFlags & 8));
      if ( v11 )
      {
        if ( a2 )
        {
          a1->PerProcessor[v10].LongTermCycles = 0LL;
          a1->PerProcessor[v10].OverQuotaHistory = 0LL;
          if ( (a1->Policy.AllFlags & 2) != 0 )
          {
            KiResetScb(v12, v11);
            v23 = 1;
            KiCheckForEffectivePriorityChange(v11, v16, &a1->PerProcessor[v10]);
          }
        }
        KiReleasePrcbLocksForIsolationUnit(&v25);
        if ( v23 && (WORD2(xmmword_140FC0C10) & 0x4000) != 0 )
        {
          LOBYTE(v17) = (*(_BYTE *)&a1->PerProcessor[v10].0 & 2) != 0;
          EtwTraceScbRankChange(a1, (unsigned int)v8, a1->PerProcessor[v10].Rank, v17);
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < KeMaximumProcessors );
  }
  if ( a2 )
    a1->QueryHistoryTimeStamp = KeQueryPerformanceCounter(0LL).QuadPart;
  p_ChildList = &a1->ChildList;
  if ( p_ChildList->Flink != p_ChildList )
    KiUpdateChildrenCpuTarget(p_ChildList, a2);
}
