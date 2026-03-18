/*
 * XREFs of Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledDeviceUsageNoInline @ 0x1401D1D9C
 * Callers:
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 * Callees:
 *     Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledFallback @ 0x1401D1DD8 (Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledFallback.c)
 */

__int64 Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_InitUserScreenInitPpiDpiInLoop__private_featureState & 0x10) != 0 )
    return Feature_InitUserScreenInitPpiDpiInLoop__private_featureState & 1;
  else
    return Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledFallback(
             (unsigned int)Feature_InitUserScreenInitPpiDpiInLoop__private_featureState,
             3LL);
}
