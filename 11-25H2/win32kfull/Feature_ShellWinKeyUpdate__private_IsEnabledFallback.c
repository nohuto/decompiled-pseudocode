/*
 * XREFs of Feature_ShellWinKeyUpdate__private_IsEnabledFallback @ 0x14027A268
 * Callers:
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14027A230 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ShellWinKeyUpdate__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ShellWinKeyUpdate__private_descriptor);
}
