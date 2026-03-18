/*
 * XREFs of Feature_TestForceVPIdleTime__private_IsEnabledDeviceUsageNoInline @ 0x140611C0C
 * Callers:
 *     PpmIdleGuestPreselect @ 0x140611CB0 (PpmIdleGuestPreselect.c)
 * Callees:
 *     Feature_TestForceVPIdleTime__private_IsEnabledFallback @ 0x140611C48 (Feature_TestForceVPIdleTime__private_IsEnabledFallback.c)
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
