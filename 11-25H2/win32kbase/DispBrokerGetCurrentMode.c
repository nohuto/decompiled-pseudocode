/*
 * XREFs of DispBrokerGetCurrentMode @ 0x14002C1E0
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14002B900 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x14002BF94 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x14002C0C8 (DrvQueryDisplayConfigInternal.c)
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140047A1C (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140047BB4 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x140112C34 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B099C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401CB9C0 (-DrvIsModeChangeHandledByDispBroker@@YA_NXZ.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401CE890 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DispBrokerGetCurrentMode(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rcx

  v2 = *(unsigned int **)(W32GetUserSessionState(a1, a2) + 57016);
  if ( *((_BYTE *)v2 + 8) )
    return v2[1];
  else
    return *v2;
}
