/*
 * XREFs of ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DED8C
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     BmlGetNextBestSourceMode @ 0x1402DE3F8 (BmlGetNextBestSourceMode.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402DEB90 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1402DFC14 (BmlGetRecommendedContentSizeForPath.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1403419E8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1403F58AC (-IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 * Callees:
 *     Feature_HDRSourcePixFormatFix__private_IsEnabledDeviceUsageNoInline @ 0x1400982B0 (Feature_HDRSourcePixFormatFix__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall BmlPixelFormatMatchHdrPixelFormat(int a1, int a2, char a3)
{
  char v3; // di
  char result; // al

  v3 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( (unsigned int)Feature_HDRSourcePixFormatFix__private_IsEnabledDeviceUsageNoInline() )
        return ((a1 - 31) & 0xFFFFFFFB) == 0;
      else
        return a1 == 31;
    }
    else
    {
      if ( (unsigned int)(a2 - 2) >= 2 )
      {
        WdLogSingleEntry1(1LL);
        result = 0;
        WdLogGlobalForLineNumber = 1501;
        return result;
      }
      return a1 == 113;
    }
  }
  else
  {
    if ( (unsigned int)(a1 - 21) <= 1 || a1 == 32 || a3 && a1 == 31 )
      return 1;
    return v3;
  }
}
