/*
 * XREFs of Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledDeviceUsageNoInline @ 0x1402943FC
 * Callers:
 *     NtUserSwitchToThisWindow @ 0x14024F1F0 (NtUserSwitchToThisWindow.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DCE18 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 * Callees:
 *     Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledFallback @ 0x140294434 (Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledFallback.c)
 */

__int64 Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NextWindow_ForegroundHackRemoval__private_featureState & 0x10) != 0 )
    return Feature_NextWindow_ForegroundHackRemoval__private_featureState & 1;
  else
    return Feature_NextWindow_ForegroundHackRemoval__private_IsEnabledFallback(
             (unsigned int)Feature_NextWindow_ForegroundHackRemoval__private_featureState,
             3LL);
}
