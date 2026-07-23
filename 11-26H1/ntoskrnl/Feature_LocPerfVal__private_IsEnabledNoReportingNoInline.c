/*
 * XREFs of Feature_LocPerfVal__private_IsEnabledNoReportingNoInline @ 0x1406E7838
 * Callers:
 *     CmFcpComputeLatestMarker @ 0x1406E7300 (CmFcpComputeLatestMarker.c)
 * Callees:
 *     Feature_LocPerfVal__private_IsEnabledFallback @ 0x1406E7818 (Feature_LocPerfVal__private_IsEnabledFallback.c)
 */

__int64 Feature_LocPerfVal__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_LocPerfVal__private_featureState & 2) != 0 )
    return Feature_LocPerfVal__private_featureState & 1;
  else
    return Feature_LocPerfVal__private_IsEnabledFallback((unsigned int)Feature_LocPerfVal__private_featureState, 0);
}
