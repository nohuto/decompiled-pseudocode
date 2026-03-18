/*
 * XREFs of DispBrokerGetCurrentMode @ 0x14007D610
 * Callers:
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x14002E5DC (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x14003D0E4 (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x14003D2F0 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14007CD30 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x14007D414 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x14007D4F8 (DrvQueryDisplayConfigInternal.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5CB0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401F53EC (-DrvIsModeChangeHandledByDispBroker@@YA_NXZ.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401F81D4 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DispBrokerGetCurrentMode(int a1, int a2, int a3)
{
  unsigned int *v3; // rcx

  v3 = *(unsigned int **)(W32GetUserSessionState(a1, a2, a3) + 57008);
  if ( *((_BYTE *)v3 + 8) )
    return v3[1];
  else
    return *v3;
}
