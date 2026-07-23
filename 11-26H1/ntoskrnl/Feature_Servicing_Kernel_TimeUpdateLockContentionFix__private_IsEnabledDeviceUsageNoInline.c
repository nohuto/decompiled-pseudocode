/*
 * XREFs of Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline @ 0x1405EFA98
 * Callers:
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
 * Callees:
 *     Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledFallback @ 0x1405EFAD4 (Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_featureState & 1;
  else
    return Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Kernel_TimeUpdateLockContentionFix__private_featureState,
             3LL);
}
