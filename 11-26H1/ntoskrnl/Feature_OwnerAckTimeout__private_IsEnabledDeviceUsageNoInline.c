/*
 * XREFs of Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline @ 0x140529158
 * Callers:
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077E784 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlInitializeOplockPerf @ 0x140CBF134 (FsRtlInitializeOplockPerf.c)
 * Callees:
 *     Feature_OwnerAckTimeout__private_IsEnabledFallback @ 0x140529194 (Feature_OwnerAckTimeout__private_IsEnabledFallback.c)
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
