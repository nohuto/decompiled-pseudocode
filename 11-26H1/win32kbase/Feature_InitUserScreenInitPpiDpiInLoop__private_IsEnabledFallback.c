/*
 * XREFs of Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledFallback @ 0x1401D1DD8
 * Callers:
 *     Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledDeviceUsageNoInline @ 0x1401D1D9C (Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_InitUserScreenInitPpiDpiInLoop__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_InitUserScreenInitPpiDpiInLoop__private_descriptor);
}
