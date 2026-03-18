/*
 * XREFs of DrvGetDeviceFromName @ 0x140028550
 * Callers:
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14000C7AC (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     DrvGetHDEV @ 0x140027860 (DrvGetHDEV.c)
 *     DrvEnumDisplayDevices @ 0x140046490 (DrvEnumDisplayDevices.c)
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401580D0 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x140177758 (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetPruneFlag @ 0x14018A874 (DrvSetPruneFlag.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvSetVideoParameters @ 0x1401A5280 (DrvSetVideoParameters.c)
 *     DrvPrepareModeListCacheAndLeaveUserCrit @ 0x1401F80B0 (DrvPrepareModeListCacheAndLeaveUserCrit.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401F9AE0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetDeviceFromName(PCUNICODE_STRING String1)
{
  __int64 i; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(String1) + 88) + 1184LL); ; i = *(_QWORD *)(i + 128) )
  {
    if ( !i )
      return 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(i + 64));
    if ( RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      break;
  }
  return i;
}
