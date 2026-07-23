/*
 * XREFs of PopIdleWakeInitialize @ 0x1407E1F44
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1402F3288 (PpmConvertTimeFrom.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407E1EF0 (PopIdleWakeConvertIntervalBucketsFrom.c)
 */

void PopIdleWakeInitialize()
{
  PopIdleWakeContextLock = 0LL;
  PopIdleWakeSourceSpuriousThresholdQpc = PpmConvertTimeFrom(50000000LL, 10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    6u,
    (__int64)PopIdleSpuriousWakeBucketLimitsQpc,
    PopIdleSpuriousWakeBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5u,
    (__int64)PopIdleWakeSourceActiveBucketLimitsQpc,
    PopIdleWakeSourceActiveBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5u,
    (__int64)PopIdleWakeSourceActivatorBucketLimitsQpc,
    PopIdleWakeSourceActivatorBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    5u,
    (__int64)PopIdleWakeSourceDeviceBucketLimitsQpc,
    PopIdleWakeSourceDeviceBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    3u,
    (__int64)PopIdleWakeSourceExcessBucketLimitsQpc,
    PopIdleWakeSourceExcessBucketLimitsQpc,
    10000000LL);
  PopIdleWakeConvertIntervalBucketsFrom(
    9u,
    (__int64)&PopIdleWakeIdleAccountingBucketLimitsMs,
    PopIdleWakeIdleAccountingBucketLimitsQpc,
    1000LL);
  qword_140F0C168 = -1LL;
  PopIdleWakeConvertIntervalBucketsFrom(
    0xBu,
    (__int64)&PopIdleWakePeriodAccountingBucketLimitsMs,
    PopIdleWakePeriodAccountingBucketLimitsQpc,
    1000LL);
  qword_140F0C1D8 = -1LL;
}
