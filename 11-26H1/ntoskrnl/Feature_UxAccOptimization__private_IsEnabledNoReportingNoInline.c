/*
 * XREFs of Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline @ 0x1406E7AA0
 * Callers:
 *     CmFcDebugUpdateSystemInfo @ 0x1406E7260 (CmFcDebugUpdateSystemInfo.c)
 * Callees:
 *     Feature_UxAccOptimization__private_IsEnabledFallback @ 0x1406E7A80 (Feature_UxAccOptimization__private_IsEnabledFallback.c)
 */

__int64 Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_UxAccOptimization__private_featureState & 2) != 0 )
    return Feature_UxAccOptimization__private_featureState & 1;
  else
    return Feature_UxAccOptimization__private_IsEnabledFallback(
             (unsigned int)Feature_UxAccOptimization__private_featureState,
             0);
}
