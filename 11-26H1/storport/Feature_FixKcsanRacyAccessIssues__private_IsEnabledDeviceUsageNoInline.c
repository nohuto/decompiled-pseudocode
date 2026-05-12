/*
 * XREFs of Feature_FixKcsanRacyAccessIssues__private_IsEnabledDeviceUsageNoInline @ 0x1400AE1D0
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback @ 0x1400AE20C (Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback.c)
 */

__int64 Feature_FixKcsanRacyAccessIssues__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixKcsanRacyAccessIssues__private_featureState & 0x10) != 0 )
    return Feature_FixKcsanRacyAccessIssues__private_featureState & 1;
  else
    return Feature_FixKcsanRacyAccessIssues__private_IsEnabledFallback(
             (unsigned int)Feature_FixKcsanRacyAccessIssues__private_featureState,
             3LL);
}
