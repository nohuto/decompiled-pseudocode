/*
 * XREFs of ExpWorkQueueHealthMetricsFree @ 0x1408462A8
 * Callers:
 *     ExpPartitionDestroy @ 0x140845D08 (ExpPartitionDestroy.c)
 *     ExpWorkQueueHealthMetricsAllocate @ 0x1408461B8 (ExpWorkQueueHealthMetricsAllocate.c)
 *     ExpPartitionCreatePoolInternal @ 0x140B6F508 (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWorkQueueHealthMetricsFree(void **P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *P;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = P[1];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
}
