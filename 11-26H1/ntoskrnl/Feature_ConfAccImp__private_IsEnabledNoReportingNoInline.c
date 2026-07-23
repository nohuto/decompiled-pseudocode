/*
 * XREFs of Feature_ConfAccImp__private_IsEnabledNoReportingNoInline @ 0x1406E7788
 * Callers:
 *     CmFcpComputeLatestMarker @ 0x1406E7300 (CmFcpComputeLatestMarker.c)
 * Callees:
 *     Feature_ConfAccImp__private_IsEnabledFallback @ 0x1406E7768 (Feature_ConfAccImp__private_IsEnabledFallback.c)
 */

__int64 Feature_ConfAccImp__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_ConfAccImp__private_featureState & 2) != 0 )
    return Feature_ConfAccImp__private_featureState & 1;
  else
    return Feature_ConfAccImp__private_IsEnabledFallback((unsigned int)Feature_ConfAccImp__private_featureState, 0);
}
