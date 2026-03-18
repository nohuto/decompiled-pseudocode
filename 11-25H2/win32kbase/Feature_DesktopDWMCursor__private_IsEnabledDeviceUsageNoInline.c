/*
 * XREFs of Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x1401D0744
 * Callers:
 *     NtHWCursorUpdatePointer @ 0x14017D140 (NtHWCursorUpdatePointer.c)
 *     ?SetFloatProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140198FE0 (-SetFloatProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140239360 (-SetFloatProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x1401D077C (Feature_DesktopDWMCursor__private_IsEnabledFallback.c)
 */

__int64 Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DesktopDWMCursor__private_featureState & 0x10) != 0 )
    return Feature_DesktopDWMCursor__private_featureState & 1;
  else
    return Feature_DesktopDWMCursor__private_IsEnabledFallback(
             (unsigned int)Feature_DesktopDWMCursor__private_featureState,
             3LL);
}
