/*
 * XREFs of ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x140062D00
 * Callers:
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1400427F0 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x140042B44 (-GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x140042BB8 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x140043738 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x140043C90 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x1400A02A0 (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION.c)
 * Callees:
 *     <none>
 */

void __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        union _EDID_V1_BLOCK *a2)
{
  int v2; // r9d
  unsigned int v3; // r11d
  unsigned int i; // r8d
  unsigned int v5; // r8d

  v2 = 0;
  *(_QWORD *)this = a2;
  v3 = *((unsigned __int8 *)a2 + 2);
  for ( i = 4; !(_BYTE)v3 || i < v3; i = v5 + 1 )
  {
    if ( i >= 0x7F )
      break;
    v5 = (*((_BYTE *)a2 + i) & 0x1F) + i;
    if ( v5 >= 0x7F )
      break;
    ++v2;
  }
  *((_DWORD *)this + 2) = v2;
}
