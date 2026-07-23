/*
 * XREFs of Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline @ 0x1406E7AF8
 * Callers:
 *     CmFcpComputeLatestMarker @ 0x1406E7300 (CmFcpComputeLatestMarker.c)
 * Callees:
 *     Feature_ValUxPerf2__private_IsEnabledFallback @ 0x1406E7AD8 (Feature_ValUxPerf2__private_IsEnabledFallback.c)
 */

__int64 Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_ValUxPerf2__private_featureState & 2) != 0 )
    return Feature_ValUxPerf2__private_featureState & 1;
  else
    return Feature_ValUxPerf2__private_IsEnabledFallback((unsigned int)Feature_ValUxPerf2__private_featureState, 0);
}
