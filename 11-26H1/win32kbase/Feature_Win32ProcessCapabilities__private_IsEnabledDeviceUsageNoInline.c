/*
 * XREFs of Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14019B32C
 * Callers:
 *     ?SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@PEAU_PS_PKG_CLAIM@@@Z @ 0x1401CA0C8 (-SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@PEAU_PS_PKG_CLAIM@@@Z.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x1401C6124 (Feature_Win32ProcessCapabilities__private_IsEnabledFallback.c)
 */

__int64 Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Win32ProcessCapabilities__private_featureState & 0x10) != 0 )
    return Feature_Win32ProcessCapabilities__private_featureState & 1;
  else
    return Feature_Win32ProcessCapabilities__private_IsEnabledFallback(
             (unsigned int)Feature_Win32ProcessCapabilities__private_featureState,
             3LL);
}
