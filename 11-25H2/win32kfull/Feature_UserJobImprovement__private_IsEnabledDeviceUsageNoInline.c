/*
 * XREFs of Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402832A8
 * Callers:
 *     PrepareForLogoff @ 0x14021612C (PrepareForLogoff.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140240288 (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EditionCreateDesktopEntryPoint @ 0x140247E50 (EditionCreateDesktopEntryPoint.c)
 *     NtUserAutoRotateScreen @ 0x140248050 (NtUserAutoRotateScreen.c)
 *     NtUserGetClipboardData @ 0x140248F00 (NtUserGetClipboardData.c)
 *     NtUserGetDCEx @ 0x1402498D0 (NtUserGetDCEx.c)
 *     NtUserSetClipboardData @ 0x14024D260 (NtUserSetClipboardData.c)
 *     NtUserSwitchDesktop @ 0x14024F070 (NtUserSwitchDesktop.c)
 *     NtUserUserHandleGrantAccess @ 0x14024F3E0 (NtUserUserHandleGrantAccess.c)
 * Callees:
 *     Feature_UserJobImprovement__private_IsEnabledFallback @ 0x1402832E0 (Feature_UserJobImprovement__private_IsEnabledFallback.c)
 */

__int64 Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UserJobImprovement__private_featureState & 0x10) != 0 )
    return Feature_UserJobImprovement__private_featureState & 1;
  else
    return Feature_UserJobImprovement__private_IsEnabledFallback(
             (unsigned int)Feature_UserJobImprovement__private_featureState,
             3LL);
}
