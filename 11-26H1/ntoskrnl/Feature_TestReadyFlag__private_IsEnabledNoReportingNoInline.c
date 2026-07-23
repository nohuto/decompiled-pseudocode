/*
 * XREFs of Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline @ 0x1406E7998
 * Callers:
 *     CmFcDebugUpdateSystemInfo @ 0x1406E7260 (CmFcDebugUpdateSystemInfo.c)
 * Callees:
 *     Feature_TestReadyFlag__private_IsEnabledFallback @ 0x1406E7978 (Feature_TestReadyFlag__private_IsEnabledFallback.c)
 */

__int64 Feature_TestReadyFlag__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_TestReadyFlag__private_featureState & 2) != 0 )
    return Feature_TestReadyFlag__private_featureState & 1;
  else
    return Feature_TestReadyFlag__private_IsEnabledFallback(
             (unsigned int)Feature_TestReadyFlag__private_featureState,
             0);
}
