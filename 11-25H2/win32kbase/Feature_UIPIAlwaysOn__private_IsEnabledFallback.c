/*
 * XREFs of Feature_UIPIAlwaysOn__private_IsEnabledFallback @ 0x1401A5398
 * Callers:
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1401A5360 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UIPIAlwaysOn__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_UIPIAlwaysOn__private_descriptor);
}
