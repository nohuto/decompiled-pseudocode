/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x14013B610
 * Callers:
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     DrvDisableMDEV @ 0x1400C6E50 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     ?DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z @ 0x14013B3D4 (-DrvEnableDisplay@@YAHAEAVPDEVOBJ@@@Z.c)
 *     GreResumeDirectDraw @ 0x14013B5F0 (GreResumeDirectDraw.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 *     DxgkEngNotifyDisplayChange @ 0x1401C5CE0 (DxgkEngNotifyDisplayChange.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1401EA874 (UserNotifyUniversalScaleFactorChanged.c)
 *     ApplyPathsModality @ 0x1401F498C (ApplyPathsModality.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F55B0 (-DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401F6B40 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIncrementDisplaySettingsUniqueness(__int64 a1)
{
  char v1; // di
  __int64 v2; // rbx
  __int64 result; // rax

  v1 = a1;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  result = *(_QWORD *)(v2 + 1856);
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)(result + 1573008));
    result = DisplayScenarioJournalDisplayUniquenessIncremented();
    if ( v1 )
    {
      result = *(_QWORD *)(v2 + 1856);
      _InterlockedIncrement((volatile signed __int32 *)(result + 1573520));
    }
  }
  return result;
}
