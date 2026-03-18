/*
 * XREFs of Feature_ForceIdleReschedulingFix__private_IsEnabledDeviceUsageNoInline @ 0x1404C5518
 * Callers:
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404C4E10 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 * Callees:
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledFallback @ 0x140532DD4 (Feature_ForceIdleReschedulingFix__private_IsEnabledFallback.c)
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
