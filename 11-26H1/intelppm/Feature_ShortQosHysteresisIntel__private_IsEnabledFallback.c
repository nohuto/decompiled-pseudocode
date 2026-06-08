/*
 * XREFs of Feature_ShortQosHysteresisIntel__private_IsEnabledFallback @ 0x140006B54
 * Callers:
 *     Feature_ShortQosHysteresisIntel__private_IsEnabledDeviceUsageNoInline @ 0x140006B18 (Feature_ShortQosHysteresisIntel__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400057B8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ShortQosHysteresisIntel__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ShortQosHysteresisIntel__private_descriptor);
}
