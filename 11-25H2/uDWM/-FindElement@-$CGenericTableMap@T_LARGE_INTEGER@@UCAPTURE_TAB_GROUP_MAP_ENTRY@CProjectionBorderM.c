/*
 * XREFs of ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180098390
 * Callers:
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180078530 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C1250 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C2C10 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateWindowCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800C2F60 (-UpdateWindowCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C3490 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresent.c)
 *     ?_GetWindowFromCaptureToken@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@PEAPEAUHWND__@@@Z @ 0x1800C41CC (-_GetWindowFromCaptureToken@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@PEAPEAUHWND__@.c)
 *     ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C4F90 (-_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 */

PVOID __fastcall CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 a2)
{
  PVOID v2; // rbx
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h] BYREF
  CBaseObject *v6; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v4 = a2;
  v5 = 0LL;
  v7 = 1;
  v2 = RtlLookupElementGenericTable(a1, &v4);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)&v5);
  return v2;
}
