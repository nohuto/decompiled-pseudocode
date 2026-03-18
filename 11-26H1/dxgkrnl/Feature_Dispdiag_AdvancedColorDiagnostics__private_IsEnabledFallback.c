/*
 * XREFs of Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledFallback @ 0x1400989E4
 * Callers:
 *     Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400989A8 (Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Dispdiag_AdvancedColorDiagnostics__private_descriptor);
}
