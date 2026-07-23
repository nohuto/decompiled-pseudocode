/*
 * XREFs of Feature_SrtmAntiRollback__private_IsEnabledNoReportingNoInline @ 0x140609CEC
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x140BFFC6C (PopBuildMemoryImageHeader.c)
 * Callees:
 *     Feature_SrtmAntiRollback__private_IsEnabledFallback @ 0x140609CC8 (Feature_SrtmAntiRollback__private_IsEnabledFallback.c)
 */

__int64 Feature_SrtmAntiRollback__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_SrtmAntiRollback__private_featureState & 2) != 0 )
    return Feature_SrtmAntiRollback__private_featureState & 1;
  else
    return Feature_SrtmAntiRollback__private_IsEnabledFallback(
             (unsigned int)Feature_SrtmAntiRollback__private_featureState,
             0);
}
