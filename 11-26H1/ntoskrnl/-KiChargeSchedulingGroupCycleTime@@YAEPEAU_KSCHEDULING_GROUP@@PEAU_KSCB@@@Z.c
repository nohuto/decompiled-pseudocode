/*
 * XREFs of ?KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z @ 0x1403388C0
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x140337FA0 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

_BOOL8 __fastcall KiChargeSchedulingGroupCycleTime(struct _KSCHEDULING_GROUP *a1, struct _KSCB *a2)
{
  unsigned __int64 v2; // r8
  bool v3; // bl
  ULONG_PTR v5; // rax

  v2 = a2->LastReportedCycles - a2->GenerationCycles;
  a2->LastReportedCycles = a2->GenerationCycles;
  v3 = (__int64)(v2 + _InterlockedExchangeAdd64(&a1->MaxQuotaTracker.CyclesRemaining, v2)) <= 0;
  if ( a1->NotificationCycles > 0 && (__int64)(v2 + _InterlockedExchangeAdd64(&a1->NotificationCycles, v2)) <= 0 )
  {
    v5 = _InterlockedExchange64((volatile __int64 *)&a1->NotificationDpc, 0LL);
    if ( v5 )
      KiInsertQueueDpc(v5, 0LL, 0LL, 0LL, 0);
  }
  return v3;
}
