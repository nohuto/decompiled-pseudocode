/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline @ 0x1406C5FB8
 * Callers:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404B1670 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x1405016BC (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline()
{
  if ( (Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 0x20) != 0 )
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState & 1;
  else
    return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_AutoBoostEtwEventingFixes__private_featureState,
             4LL);
}
