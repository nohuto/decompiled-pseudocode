/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1400736E0
 * Callers:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140071E64 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x14007230C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     GreResumeDirectDraw @ 0x1400736C0 (GreResumeDirectDraw.c)
 *     DrvDisableMDEV @ 0x140074C10 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1400879E0 (DrvEnableMDEV.c)
 *     DxgkEngNotifyDisplayChange @ 0x1400ACA40 (DxgkEngNotifyDisplayChange.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1401C1C34 (UserNotifyUniversalScaleFactorChanged.c)
 *     ApplyPathsModality @ 0x1401C9D0C (ApplyPathsModality.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIncrementDisplaySettingsUniqueness(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1768LL);
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)(result + 1573008));
    return DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return result;
}
