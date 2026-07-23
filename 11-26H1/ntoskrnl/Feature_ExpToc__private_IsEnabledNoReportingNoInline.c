/*
 * XREFs of Feature_ExpToc__private_IsEnabledNoReportingNoInline @ 0x1406E77E0
 * Callers:
 *     CmFcpComputeLatestMarker @ 0x1406E7300 (CmFcpComputeLatestMarker.c)
 * Callees:
 *     Feature_ExpToc__private_IsEnabledFallback @ 0x1406E77C0 (Feature_ExpToc__private_IsEnabledFallback.c)
 */

__int64 Feature_ExpToc__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_ExpToc__private_featureState & 2) != 0 )
    return Feature_ExpToc__private_featureState & 1;
  else
    return Feature_ExpToc__private_IsEnabledFallback((unsigned int)Feature_ExpToc__private_featureState, 0);
}
