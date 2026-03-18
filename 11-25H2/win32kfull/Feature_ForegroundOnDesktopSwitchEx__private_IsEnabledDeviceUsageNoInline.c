/*
 * XREFs of Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline @ 0x140288658
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserClearForeground @ 0x140294CC0 (NtUserClearForeground.c)
 * Callees:
 *     Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledFallback @ 0x140288690 (Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledFallback.c)
 */

__int64 Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ForegroundOnDesktopSwitchEx__private_featureState & 0x10) != 0 )
    return Feature_ForegroundOnDesktopSwitchEx__private_featureState & 1;
  else
    return Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledFallback(
             (unsigned int)Feature_ForegroundOnDesktopSwitchEx__private_featureState,
             3LL);
}
