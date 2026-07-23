/*
 * XREFs of ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1403364D0
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140420700 (KeInterlockedSetProcessorAffinityEx.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14043E7DC (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KiSetClockTimerDeadlineNoWake @ 0x1404E0500 (KiSetClockTimerDeadlineNoWake.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiComputeGroupSchedulingRank(
        struct _KSCHEDULING_GROUP *a1,
        struct _KPRCB *a2,
        union _KISOLATION_UNIT_LOCK_HANDLE *a3,
        struct _KSCB *a4)
{
  bool v5; // r9
  unsigned __int16 PrcbLockFlags; // ax
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  unsigned __int64 *p_MinQuotaCycleTarget; // r8
  char v12; // cl
  unsigned __int16 v13; // ax
  __int64 RelativeWeight; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  volatile signed __int32 *ShareRank; // rax
  __int64 v19; // rdx
  bool v20; // zf
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v22; // rcx

  v5 = 0;
  PrcbLockFlags = a4->PrcbLockFlags;
  if ( (PrcbLockFlags & 0x12) == 0 )
  {
    v9 = a4->LastReportedCycles - a4->GenerationCycles;
    a4->LastReportedCycles = a4->GenerationCycles;
    v10 = v9 + _InterlockedExchangeAdd64(&a1->MaxQuotaTracker.CyclesRemaining, v9);
    if ( a1->NotificationCycles > 0 && (__int64)(v9 + _InterlockedExchangeAdd64(&a1->NotificationCycles, v9)) <= 0 )
    {
      v22 = _InterlockedExchange64((volatile __int64 *)&a1->NotificationDpc, 0LL);
      if ( v22 )
        KiInsertQueueDpc(v22, 0LL, 0LL, 0LL, 0);
    }
    PrcbLockFlags = a4->PrcbLockFlags;
    v5 = v10 <= 0;
    if ( (PrcbLockFlags & 0x80u) != 0 && a4->GenerationCycles > a4->MaxQuotaCycleTarget )
    {
      v5 = 1;
      goto LABEL_5;
    }
    if ( v10 <= 0 )
    {
LABEL_5:
      PrcbLockFlags |= 2u;
      a4->PrcbLockFlags = PrcbLockFlags;
    }
  }
  p_MinQuotaCycleTarget = &a4->MinQuotaCycleTarget;
  if ( (PrcbLockFlags & 0x24) != 0 || a4->GenerationCycles < *p_MinQuotaCycleTarget )
  {
    v12 = 0;
  }
  else
  {
    PrcbLockFlags |= 4u;
    v12 = 1;
    a4->PrcbLockFlags = PrcbLockFlags;
  }
  if ( (PrcbLockFlags & 0x20) != 0 || !v12 )
  {
    if ( (PrcbLockFlags & 0x10) != 0 || !v5 )
      goto LABEL_10;
    p_MinQuotaCycleTarget = &a4->MinQuotaCycleTarget;
  }
  a4->PrcbLockFlags = PrcbLockFlags | 4;
  RelativeWeight = a1->RelativeWeight;
  v15 = (unsigned __int64)(KiCycleDivisorLongTerm * RelativeWeight) >> 7;
  v16 = a4->LongTermCycles % v15;
  v17 = a4->LongTermCycles / v15 + 1;
  ShareRank = (volatile signed __int32 *)a4->ShareRank;
  a4->Rank = v17;
  if ( ShareRank )
    _InterlockedAdd(ShareRank, v17);
  a4->RankCycleTarget = *p_MinQuotaCycleTarget + ((unsigned __int64)(KiCycleDivisorShortTerm * RelativeWeight) >> 7);
  KiCheckForEffectivePriorityChange(a2, (union _KISOLATION_UNIT_LOCK_HANDLE *)v16, a4);
LABEL_10:
  v13 = a4->PrcbLockFlags;
  if ( (v13 & 1) != 0 )
  {
    if ( (v13 & 2) != 0 )
      KiRemoveSchedulingGroupQueue(a2, a4, 1u);
    else
      KiResortScbQueue(a2, a4, 1u);
  }
  if ( (*(_BYTE *)&a4->0 & 4) != 0 && !a2->GroupSchedulingOverQuota )
  {
    KeInterlockedSetProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, a2->Number, p_MinQuotaCycleTarget);
    v20 = KiClockTimerPerCpuTickScheduling == 0;
    a2->GroupSchedulingOverQuota = 1;
    if ( !v20 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 15 )
        __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v19) = 15;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v19);
      }
      KiSetClockTimerDeadlineNoWake(a2);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
}
