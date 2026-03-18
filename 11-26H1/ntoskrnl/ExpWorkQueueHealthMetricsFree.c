/*
 * XREFs of ExpWorkQueueHealthMetricsFree @ 0x140840068
 * Callers:
 *     ExpPartitionDestroy @ 0x14083FAC8 (ExpPartitionDestroy.c)
 *     ExpWorkQueueHealthMetricsAllocate @ 0x14083FF78 (ExpWorkQueueHealthMetricsAllocate.c)
 *     ExpPartitionCreatePoolInternal @ 0x140B6C40C (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
