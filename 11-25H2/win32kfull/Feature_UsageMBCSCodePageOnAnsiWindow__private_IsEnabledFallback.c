/*
 * XREFs of Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback @ 0x1402B61E4
 * Callers:
 *     Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B61AC (Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_UsageMBCSCodePageOnAnsiWindow__private_descriptor);
}
