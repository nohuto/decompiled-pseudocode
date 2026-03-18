/*
 * XREFs of Feature_Bugfix_57240160__private_IsEnabledFallback @ 0x1401B4AB0
 * Callers:
 *     Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline @ 0x1401B4A74 (Feature_Bugfix_57240160__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Bugfix_57240160__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Bugfix_57240160__private_descriptor);
}
