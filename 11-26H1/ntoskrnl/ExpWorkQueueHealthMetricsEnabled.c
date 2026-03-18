/*
 * XREFs of ExpWorkQueueHealthMetricsEnabled @ 0x14051FCC8
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     ExpWorkerThread @ 0x1403F5680 (ExpWorkerThread.c)
 *     ExpPartitionCreatePoolInternal @ 0x140B6C40C (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline @ 0x140382244 (Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline.c)
 */

char __fastcall ExpWorkQueueHealthMetricsEnabled(PVOID *a1, int a2)
{
  char result; // al

  if ( !(unsigned int)Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline() )
    return 0;
  if ( *a1 != PspSystemPartition )
    return 0;
  result = 1;
  if ( a2 != 1 )
    return 0;
  return result;
}
