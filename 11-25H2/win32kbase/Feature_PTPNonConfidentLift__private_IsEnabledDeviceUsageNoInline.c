/*
 * XREFs of Feature_PTPNonConfidentLift__private_IsEnabledDeviceUsageNoInline @ 0x1401EF418
 * Callers:
 *     rimFinalizePointerFlags @ 0x140184A6C (rimFinalizePointerFlags.c)
 * Callees:
 *     Feature_PTPNonConfidentLift__private_IsEnabledFallback @ 0x1401EF450 (Feature_PTPNonConfidentLift__private_IsEnabledFallback.c)
 */

__int64 Feature_PTPNonConfidentLift__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PTPNonConfidentLift__private_featureState & 0x10) != 0 )
    return Feature_PTPNonConfidentLift__private_featureState & 1;
  else
    return Feature_PTPNonConfidentLift__private_IsEnabledFallback(
             (unsigned int)Feature_PTPNonConfidentLift__private_featureState,
             3LL);
}
