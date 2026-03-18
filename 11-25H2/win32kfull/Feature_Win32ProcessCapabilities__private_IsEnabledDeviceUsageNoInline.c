/*
 * XREFs of Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140270A34
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400872EC (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     MagGetLensContextInformation @ 0x140231FF0 (MagGetLensContextInformation.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x140237B0C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxPrintWindow @ 0x140241E1C (xxxPrintWindow.c)
 *     EditionIsRIMInjectionBlocked @ 0x140243D30 (EditionIsRIMInjectionBlocked.c)
 *     NtUserPrintWindow @ 0x14024BC20 (NtUserPrintWindow.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x1402759AC (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 *     NtUserRegisterCoreMessagingEndPoint @ 0x14029C830 (NtUserRegisterCoreMessagingEndPoint.c)
 *     NtUserSetProcessWin32Capabilities @ 0x14029FB10 (NtUserSetProcessWin32Capabilities.c)
 * Callees:
 *     Feature_Win32ProcessCapabilities__private_IsEnabledFallback @ 0x140270A6C (Feature_Win32ProcessCapabilities__private_IsEnabledFallback.c)
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
