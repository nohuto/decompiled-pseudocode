/*
 * XREFs of Feature_TestForceVPIdleTime__private_IsEnabledDeviceUsageNoInline @ 0x140614A4C
 * Callers:
 *     PpmIdleGuestPreselect @ 0x140614AF0 (PpmIdleGuestPreselect.c)
 * Callees:
 *     Feature_TestForceVPIdleTime__private_IsEnabledFallback @ 0x140614A88 (Feature_TestForceVPIdleTime__private_IsEnabledFallback.c)
 */

__int64 Feature_TestForceVPIdleTime__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TestForceVPIdleTime__private_featureState & 0x10) != 0 )
    return Feature_TestForceVPIdleTime__private_featureState & 1;
  else
    return Feature_TestForceVPIdleTime__private_IsEnabledFallback(
             (unsigned int)Feature_TestForceVPIdleTime__private_featureState,
             3LL);
}
