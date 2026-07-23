/*
 * XREFs of Feature_FixTruncationNonTerminatedStrings__private_IsEnabledFallback @ 0x180125110
 * Callers:
 *     Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline @ 0x180113F8C (Feature_FixTruncationNonTerminatedStrings__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_FixTruncationNonTerminatedStrings__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FixTruncationNonTerminatedStrings__private_descriptor);
}
