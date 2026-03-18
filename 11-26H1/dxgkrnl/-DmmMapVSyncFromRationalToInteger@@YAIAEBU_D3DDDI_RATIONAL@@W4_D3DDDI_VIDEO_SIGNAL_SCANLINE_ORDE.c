/*
 * XREFs of ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C
 * Callers:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140049E14 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x140096E84 (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x140259B08 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DxgkConvertDisplayConfigToDevMode @ 0x1402D6D90 (DxgkConvertDisplayConfigToDevMode.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1402D747C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1402D77B8 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1402D8FF0 (_PopulateDisplayModeFromPresentPath.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402DDDC0 (BmlCompareTargetModesWithConstraint.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x140340D3C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140362038 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1403DD110 (-CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PR.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1403EF088 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkCddVerifyCddDevMode @ 0x14041C1F0 (DxgkCddVerifyCddDevMode.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1404220A0 (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     DxgkUpdateCddDevmodeExtraData @ 0x140426EF0 (DxgkUpdateCddDevmodeExtraData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DmmMapVSyncFromRationalToInteger(
        const struct _D3DDDI_RATIONAL *a1,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a2,
        unsigned __int8 *a3)
{
  unsigned __int64 Denominator; // r9
  unsigned __int64 Numerator; // rtt
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 i; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // rbp
  __int64 v13; // r11
  unsigned __int64 v14; // r14

  if ( !a1->Denominator )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13288;
  }
  if ( a3 )
    *a3 = 0;
  Denominator = a1->Denominator;
  if ( a1->Denominator )
  {
    Numerator = a1->Numerator;
    v8 = Numerator / Denominator;
    v9 = Numerator / Denominator + 1;
    if ( Numerator % Denominator < (unsigned int)Denominator - Numerator % Denominator )
      LODWORD(v9) = v8;
  }
  else
  {
    LODWORD(v9) = -1;
  }
  for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
  {
    if ( (_DWORD)Denominator )
    {
      v11 = dword_1400B3388[2 * i + 1];
      if ( (_DWORD)v11 )
      {
        v12 = dword_1400B3388[2 * i];
        v13 = a1->Numerator;
        v14 = 100000 * v13 / Denominator;
        if ( v14 >= 99950 * v12 / v11 && v14 <= 100050 * v12 / v11 )
        {
          if ( (unsigned int)v13 / (unsigned int)Denominator != (_DWORD)v9 && a3 )
            *a3 = 1;
          LODWORD(v9) = (unsigned int)v13 / (unsigned int)Denominator;
          break;
        }
      }
    }
  }
  if ( (unsigned int)(a2 - 2) <= 1 )
    LODWORD(v9) = (unsigned int)v9 >> 1;
  return (unsigned int)v9;
}
