/*
 * XREFs of ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x140042BB8
 * Callers:
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x140280B30 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x140043580 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1400447B4 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x1400447E0 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x140062D00 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetHdmiForum20VendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_2_0_VENDOR_SPECIFIC_DESC@@@Z @ 0x1400A0118 (-GetHdmiForum20VendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI.c)
 *     ?GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC@@@Z @ 0x1400A01A0 (-GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC.c)
 */

__int64 __fastcall EDID_V1_GetColorDepths(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_COLOR_DEPTHS *a3)
{
  __int64 result; // rax
  unsigned int v5; // edi
  union _EDID_V1_BLOCK **IterAtElement; // rax
  unsigned __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  unsigned int i; // edi
  union _EDID_V1_BLOCK **v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // r9d
  unsigned __int64 v16; // [rsp+20h] [rbp-29h] BYREF
  int v17; // [rsp+28h] [rbp-21h]
  _BYTE v18[16]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v19[10]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v20; // [rsp+90h] [rbp+47h]
  unsigned __int64 v21; // [rsp+B8h] [rbp+6Fh] BYREF

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v20 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v19, a2, a1);
  if ( (int)result < 0 )
    return result;
  *(_OWORD *)a3 = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  v5 = 0;
  v16 = 0LL;
  v17 = 0;
  while ( v5 < (unsigned int)v20 )
  {
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(v19, v5) == 2 )
    {
      IterAtElement = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(
                                                 (MonDescParser::EDID_PARSER *)v19,
                                                 v5);
      MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        (MonDescParser::EDID_PARSER_CEA_861_EXT *)v18,
        *IterAtElement);
      if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetHdmiLLCVendorData(
             (MonDescParser::EDID_PARSER_CEA_861_EXT *)v18,
             (struct _EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC *)&v16) )
      {
        v7 = v16;
        v8 = (v16 >> 42) & 0xC | (v16 >> 41) & 0x20 | 2;
        *(_DWORD *)a3 = v8;
        if ( (v7 & 0x80000000000LL) != 0 )
        {
          v9 = v19[0];
          *((_DWORD *)a3 + 1) = v8;
          *((_DWORD *)a3 + 2) = (*(_BYTE *)(v9 + 24) & 0x10) != 0 ? v8 : 0;
        }
        v21 = 0LL;
        for ( i = 0; i < (unsigned int)v20; ++i )
        {
          if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(v19, i) == 2 )
          {
            v11 = (union _EDID_V1_BLOCK **)MonDescParser::EDID_PARSER::GetIterAtElement(
                                             (MonDescParser::EDID_PARSER *)v19,
                                             i);
            MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock((MonDescParser::EDID_PARSER_CEA_861_EXT *)v18, *v11);
            if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetHdmiForum20VendorData(
                   (MonDescParser::EDID_PARSER_CEA_861_EXT *)v18,
                   (struct _EDID_V1_CEA_861_HDMI_FORUM_2_0_VENDOR_SPECIFIC_DESC *)&v21) )
            {
              *((_DWORD *)a3 + 3) |= (v21 >> 46) & 0xC | (v21 >> 45) & 0x20;
              return 0LL;
            }
          }
        }
        return 0LL;
      }
    }
    ++v5;
  }
  v12 = v19[0];
  v13 = *(unsigned __int8 *)(v19[0] + 20LL);
  if ( (v13 & 0x80u) == 0 )
    return 3221226021LL;
  if ( ((v13 >> 4) & 7) == 0 )
  {
LABEL_35:
    *(_DWORD *)a3 = 2;
    goto LABEL_36;
  }
  if ( ((v13 >> 4) & 7) != 1 )
  {
    if ( ((v13 >> 4) & 7) != 2 )
    {
      switch ( (v13 >> 4) & 7 )
      {
        case 3u:
          *(_DWORD *)a3 = 6;
          break;
        case 4u:
          *(_DWORD *)a3 = 14;
          break;
        case 5u:
          *(_DWORD *)a3 = 30;
          break;
        case 6u:
          *(_DWORD *)a3 = 62;
          break;
        case 7u:
          return 3221225485LL;
      }
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  *(_DWORD *)a3 = 1;
LABEL_36:
  if ( ((*(unsigned __int8 *)(v12 + 24) >> 3) & 3) != 0 )
  {
    if ( ((*(unsigned __int8 *)(v12 + 24) >> 3) & 3) == 1 )
    {
      *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
    }
    else
    {
      if ( ((*(unsigned __int8 *)(v12 + 24) >> 3) & 3) == 2 )
      {
        v14 = *(_DWORD *)a3;
      }
      else
      {
        if ( ((*(unsigned __int8 *)(v12 + 24) >> 3) & 3) != 3 )
          return 0LL;
        v14 = *(_DWORD *)a3;
        *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
      }
      *((_DWORD *)a3 + 2) = v14;
    }
  }
  else
  {
    v15 = *(unsigned __int16 *)(v12 + 33);
    v16 = *(_QWORD *)(v12 + 25);
    if ( !(((unsigned __int8)v16 >> 6) | (4 * BYTE2(v16)))
      && !(((unsigned __int8)v16 >> 4) & 3 | (4 * BYTE3(v16)))
      && !(((unsigned __int8)v16 >> 2) & 3 | (4 * BYTE4(v16)))
      && !(v16 & 3 | (4 * (unsigned int)BYTE5(v16)))
      && !((BYTE1(v16) >> 6) | (4 * BYTE6(v16)))
      && !((BYTE1(v16) >> 4) & 3 | (4 * HIBYTE(v16)))
      && (BYTE1(v16) >> 2) & 3 | (4 * (unsigned __int8)v15)
      && BYTE1(v16) & 3 | (4 * (v15 >> 8)) )
    {
      *((_DWORD *)a3 + 4) = *(_DWORD *)a3;
      *(_DWORD *)a3 = 0;
    }
  }
  return 0LL;
}
