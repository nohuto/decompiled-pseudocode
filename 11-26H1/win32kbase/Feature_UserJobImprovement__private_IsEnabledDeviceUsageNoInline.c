/*
 * XREFs of Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28
 * Callers:
 *     UserGetDesktopDC @ 0x14000F79C (UserGetDesktopDC.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14019A350 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     NtUserGetDC @ 0x1401A2020 (NtUserGetDC.c)
 *     UserGlobalAtomTableCallout @ 0x1401AAD60 (UserGlobalAtomTableCallout.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 *     IsHandleEntrySecure @ 0x1401CE84C (IsHandleEntrySecure.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 *     NtUserActivateKeyboardLayout @ 0x1401E1FF0 (NtUserActivateKeyboardLayout.c)
 *     NtUserChangeDisplaySettings @ 0x1401E21D0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 * Callees:
 *     Feature_UserJobImprovement__private_IsEnabledFallback @ 0x1401C60D0 (Feature_UserJobImprovement__private_IsEnabledFallback.c)
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
