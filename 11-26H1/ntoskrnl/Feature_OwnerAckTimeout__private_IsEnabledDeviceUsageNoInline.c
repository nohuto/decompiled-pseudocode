/*
 * XREFs of Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline @ 0x140526AE8
 * Callers:
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077BB44 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE6EA0 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlInitializeOplockPerf @ 0x140CB90F0 (FsRtlInitializeOplockPerf.c)
 * Callees:
 *     Feature_OwnerAckTimeout__private_IsEnabledFallback @ 0x140526B24 (Feature_OwnerAckTimeout__private_IsEnabledFallback.c)
 */

__int64 Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_OwnerAckTimeout__private_featureState & 0x10) != 0 )
    return Feature_OwnerAckTimeout__private_featureState & 1;
  else
    return Feature_OwnerAckTimeout__private_IsEnabledFallback(
             (unsigned int)Feature_OwnerAckTimeout__private_featureState,
             3LL);
}
