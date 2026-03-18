/*
 * XREFs of Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline @ 0x140576470
 * Callers:
 *     ExInitializeProcessor @ 0x1406CB480 (ExInitializeProcessor.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     ExpInitSystemPhase0 @ 0x140CE40C0 (ExpInitSystemPhase0.c)
 * Callees:
 *     Feature_LookasideDepthManager__private_IsEnabledFallback @ 0x1405764AC (Feature_LookasideDepthManager__private_IsEnabledFallback.c)
 */

__int64 Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_LookasideDepthManager__private_featureState & 0x10) != 0 )
    return Feature_LookasideDepthManager__private_featureState & 1;
  else
    return Feature_LookasideDepthManager__private_IsEnabledFallback(
             (unsigned int)Feature_LookasideDepthManager__private_featureState,
             3LL);
}
