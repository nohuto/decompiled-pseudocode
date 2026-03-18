/*
 * XREFs of Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledFallback @ 0x14023B768
 * Callers:
 *     Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline @ 0x14023B730 (Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Capture_MinUpdateIntervalDefaultValue__private_descriptor);
}
