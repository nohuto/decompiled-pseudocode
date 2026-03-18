/*
 * XREFs of Feature_RestartDWMViaSingleDWMControl__private_IsEnabledFallback @ 0x1401B0E30
 * Callers:
 *     Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DF8 (Feature_RestartDWMViaSingleDWMControl__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_RestartDWMViaSingleDWMControl__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_RestartDWMViaSingleDWMControl__private_descriptor);
}
