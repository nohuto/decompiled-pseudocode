/*
 * XREFs of ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1402D733C
 * Callers:
 *     DxgkConvertDisplayConfigToDevMode @ 0x1402D6D90 (DxgkConvertDisplayConfigToDevMode.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1402D747C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ConvertDMMRotationToGdiRotation @ 0x1402D7294 (ConvertDMMRotationToGdiRotation.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1402D9384 (ConvertDMMScalingToGdiScaling.c)
 */

__int64 __fastcall VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
        DWORD a1,
        DWORD a2,
        DWORD a3,
        DWORD a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a6,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a7,
        struct _devicemodeW *const a8)
{
  int v12; // eax
  DWORD v13; // eax
  __int64 result; // rax

  if ( !a8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1179;
  }
  *(_QWORD *)a8->dmDeviceName = 0x4400440043LL;
  *(_DWORD *)&a8->dmSpecVersion = 67175425;
  *(_DWORD *)&a8->dmSize = 1573084;
  a8->dmBitsPerPel = a1;
  v12 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a6);
  if ( v12 == 1 || v12 == 3 )
  {
    v13 = a2;
    a2 = a3;
  }
  else
  {
    v13 = a3;
  }
  a8->dmPelsHeight = a2;
  a8->dmPelsWidth = v13;
  a8->dmDisplayOrientation = ConvertDMMRotationToGdiRotation(a6);
  ConvertDMMScalingToGdiScaling((unsigned int)a7, &a8->dmDisplayFixedOutput);
  a8->dmDisplayFrequency = a4;
  if ( a5 == D3DDDI_VSSLO_PROGRESSIVE )
  {
    a8->dmDisplayFlags = 0;
LABEL_7:
    a8->dmFields = 544997504;
    return 0LL;
  }
  if ( (unsigned int)(a5 - 2) < 2 )
  {
    a8->dmDisplayFlags |= 2u;
    goto LABEL_7;
  }
  WdLogSingleEntry1(2LL);
  result = 3223192402LL;
  WdLogGlobalForLineNumber = 1235;
  return result;
}
