/*
 * XREFs of Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledFallback @ 0x1401D1E30
 * Callers:
 *     Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline @ 0x1401D1DF4 (Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_LogCDSDiagBeforeBroadcast__private_descriptor);
}
