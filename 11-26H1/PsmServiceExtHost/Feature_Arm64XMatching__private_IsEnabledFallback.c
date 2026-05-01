/*
 * XREFs of Feature_Arm64XMatching__private_IsEnabledFallback @ 0x18009E96C
 * Callers:
 *     Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline @ 0x18009E938 (Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Arm64XMatching__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Arm64XMatching__private_descriptor);
}
