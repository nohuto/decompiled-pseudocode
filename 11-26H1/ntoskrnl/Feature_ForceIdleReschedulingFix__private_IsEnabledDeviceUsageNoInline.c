/*
 * XREFs of Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline @ 0x1404BEEC8
 * Callers:
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404BE7C0 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 * Callees:
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledFallback @ 0x140535274 (Feature_ForceIdleReschedulingFix__private_IsEnabledFallback.c)
 */

__int64 Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ForceIdleReschedulingFix__private_featureState & 0x10) != 0 )
    return Feature_ForceIdleReschedulingFix__private_featureState & 1;
  else
    return Feature_ForceIdleReschedulingFix__private_IsEnabledFallback(
             (unsigned int)Feature_ForceIdleReschedulingFix__private_featureState,
             3LL);
}
