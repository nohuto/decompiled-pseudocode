/*
 * XREFs of Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4
 * Callers:
 *     UserGetDesktopDC @ 0x140098B10 (UserGetDesktopDC.c)
 *     UserGlobalAtomTableCallout @ 0x14009CF40 (UserGlobalAtomTableCallout.c)
 *     IsHandleEntrySecure @ 0x1400A2040 (IsHandleEntrySecure.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 *     NtUserActivateKeyboardLayout @ 0x14016E970 (NtUserActivateKeyboardLayout.c)
 *     NtUserChangeDisplaySettings @ 0x14016EAB0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserGetDC @ 0x14016FF60 (NtUserGetDC.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 *     NtUserSetSysColors @ 0x140174FA0 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x140175320 (NtUserSystemParametersInfo.c)
 * Callees:
 *     Feature_UserJobImprovement__private_IsEnabledFallback @ 0x1401A53EC (Feature_UserJobImprovement__private_IsEnabledFallback.c)
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
