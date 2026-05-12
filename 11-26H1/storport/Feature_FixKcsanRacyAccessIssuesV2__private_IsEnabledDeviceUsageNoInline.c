/*
 * XREFs of Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledDeviceUsageNoInline @ 0x1400AE178
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledFallback @ 0x1400AE1B4 (Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledFallback.c)
 */

__int64 Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixKcsanRacyAccessIssuesV2__private_featureState & 0x10) != 0 )
    return Feature_FixKcsanRacyAccessIssuesV2__private_featureState & 1;
  else
    return Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledFallback(
             (unsigned int)Feature_FixKcsanRacyAccessIssuesV2__private_featureState,
             3LL);
}
