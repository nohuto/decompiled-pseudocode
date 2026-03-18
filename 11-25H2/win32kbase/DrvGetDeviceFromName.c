/*
 * XREFs of DrvGetDeviceFromName @ 0x14004A170
 * Callers:
 *     DrvEnumDisplayDevices @ 0x140047DF0 (DrvEnumDisplayDevices.c)
 *     DrvEnumDisplaySettings @ 0x14004AE70 (DrvEnumDisplaySettings.c)
 *     DrvGetHDEV @ 0x14004D9C0 (DrvGetHDEV.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14007F62C (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401189AC (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x14013E318 (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetPruneFlag @ 0x14014D2F0 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x140160354 (DrvSetVideoParameters.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401D0420 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetDeviceFromName(PCUNICODE_STRING String1)
{
  __int64 i; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(String1) + 88) + 1096LL); ; i = *(_QWORD *)(i + 128) )
  {
    if ( !i )
      return 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(i + 64));
    if ( RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      break;
  }
  return i;
}
