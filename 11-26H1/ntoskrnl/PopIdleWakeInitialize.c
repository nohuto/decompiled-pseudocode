/*
 * XREFs of PopIdleWakeInitialize @ 0x1407DD914
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1403E63A8 (PpmConvertTimeFrom.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407DD8C0 (PopIdleWakeConvertIntervalBucketsFrom.c)
 */

void PopIdleWakeInitialize()
{
  PopAdaptiveStandbyLock.KernelShadowStack = 0LL;
  PopAdaptiveStandbyLock.GlobalUpdateVpThreadPriorityListEntry.Flink = (struct _LIST_ENTRY *)PpmConvertTimeFrom(
                                                                                               50000000LL,
                                                                                               10000000LL);
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
    &PopAdaptiveStandbyLock.KcsanThread,
    1000LL);
  qword_140F0BE48 = -1LL;
  PopIdleWakeConvertIntervalBucketsFrom(
    0xBu,
    (__int64)&PopIdleWakePeriodAccountingBucketLimitsMs,
    (_KERNEL_SHADOW_STACK_LIMIT *)&PopAdaptiveStandbyLock.KernelShadowStackLimit.AllFields,
    1000LL);
  PopAdaptiveStandbyLock.Spare32 = (void *)-1LL;
}
