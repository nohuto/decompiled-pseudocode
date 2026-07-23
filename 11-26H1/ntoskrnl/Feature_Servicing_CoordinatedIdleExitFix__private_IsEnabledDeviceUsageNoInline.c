/*
 * XREFs of Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline @ 0x140603E34
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1402F93B8 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledFallback @ 0x140603E70 (Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_CoordinatedIdleExitFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CoordinatedIdleExitFix__private_featureState & 1;
  else
    return Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CoordinatedIdleExitFix__private_featureState,
             3LL);
}
