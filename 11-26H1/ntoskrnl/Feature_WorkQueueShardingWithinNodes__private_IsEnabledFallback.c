/*
 * XREFs of Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback @ 0x140535254
 * Callers:
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline @ 0x140383FF4 (Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline @ 0x1406D4F5C (Feature_WorkQueueShardingWithinNodes__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_WorkQueueShardingWithinNodes__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_WorkQueueShardingWithinNodes__private_descriptor,
           0);
}
