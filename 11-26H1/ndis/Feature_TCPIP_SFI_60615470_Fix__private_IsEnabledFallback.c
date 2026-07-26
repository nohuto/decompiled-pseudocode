/*
 * XREFs of Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback @ 0x1400CDC0C
 * Callers:
 *     Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1400CDBD0 (Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14008D920 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &wil_details_featureDescriptors_a);
}
