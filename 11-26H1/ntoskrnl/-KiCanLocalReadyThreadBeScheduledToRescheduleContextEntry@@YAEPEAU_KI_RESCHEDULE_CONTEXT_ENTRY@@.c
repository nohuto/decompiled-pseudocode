/*
 * XREFs of ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140231210
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 * Callees:
 *     KiIsThreadExemptFromForcePark @ 0x14023137C (KiIsThreadExemptFromForcePark.c)
 *     KiShouldPreemptionBeDeferred @ 0x140231EA0 (KiShouldPreemptionBeDeferred.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 */

bool __fastcall KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KTHREAD *a2,
        struct _KPRCB *a3,
        struct _KSHARED_READY_QUEUE *a4)
{
  _KPRCB *Prcb; // rsi
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v6; // r9
  struct _KSHARED_READY_QUEUE *SharedReadyQueue; // rax
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rbx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int CurrentRunTime; // edx
  unsigned __int64 AvailableMask; // rcx
  unsigned __int64 NonParkedSet; // rdx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char *v19; // rcx

  Prcb = a1->Prcb;
  v6 = a1;
  if ( KiForceParkingConfiguration
    && (Prcb->IdleState & 0x20) != 0
    && !(unsigned __int8)KiIsThreadExemptFromForcePark(a2) )
  {
    return 0;
  }
  if ( !a4 && Prcb == a3 )
    return 1;
  SharedReadyQueue = v6->SharedReadyQueue;
  if ( !SharedReadyQueue || SharedReadyQueue != a4 )
    return 0;
  SchedulerSubNode = Prcb->SchedulerSubNode;
  v11 = KiComputeThreadQos(a2);
  CurrentRunTime = a2->CurrentRunTime;
  if ( CurrentRunTime <= a2->ExpectedRunTime )
    CurrentRunTime = a2->ExpectedRunTime;
  AvailableMask = SchedulerSubNode->HeteroSets[a2->HardwareFeedbackClass
                                             + SchedulerSubNode->WorkloadClasses
                                             * ((unsigned int)(CurrentRunTime >= KiDynamicHeteroCpuPolicyExpectedCycles)
                                              + 2 * v11)].AvailableMask;
  NonParkedSet = SchedulerSubNode->NonParkedSet;
  if ( (AvailableMask & Prcb->GroupSetMember) == 0 && (AvailableMask & a4->Affinity & NonParkedSet) != 0 )
    return 0;
  if ( Prcb == a3 )
    return 1;
  SchedulingGroup = a2->SchedulingGroup;
  if ( !SchedulingGroup )
    return 1;
  v19 = (char *)SchedulingGroup + Prcb->ScbOffset;
  if ( !v19 || a2->Priority >= 16 || (*((_DWORD *)&a2->0 + 1) & 0x200) != 0 )
    return 1;
  while ( (v19[128] & 2) == 0 )
  {
    v19 = (char *)*((_QWORD *)v19 + 55);
    if ( !v19 )
      return 1;
  }
  return (unsigned __int8)KiShouldPreemptionBeDeferred(a2, NonParkedSet, v12, v13) != 0;
}
