/*
 * XREFs of Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline @ 0x140578920
 * Callers:
 *     ExInitializeProcessor @ 0x1406CF4B0 (ExInitializeProcessor.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     ExpInitSystemPhase0 @ 0x140CEA460 (ExpInitSystemPhase0.c)
 * Callees:
 *     Feature_LookasideDepthManager__private_IsEnabledFallback @ 0x14057895C (Feature_LookasideDepthManager__private_IsEnabledFallback.c)
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
