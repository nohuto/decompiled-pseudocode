/*
 * XREFs of ?EDID_V1_GetDolbyVisionCapsUpdated@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x14009E228
 * Callers:
 *     ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x140280D40 (-GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x140043580 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x1400A02A0 (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAUEDID_V1_CEA_861_DOLBY_VISION.c)
 */

__int64 __fastcall EDID_V1_GetDolbyVisionCapsUpdated(
        unsigned int a1,
        unsigned __int8 *a2,
        struct DISPLAY_DVLL_CAPS *a3)
{
  char v3; // di
  __int64 result; // rax
  char v6; // r9
  double v7; // xmm2_8
  double v8; // xmm1_8
  double v9; // xmm3_8
  double v10; // xmm4_8
  double v11; // xmm5_8
  double v12; // xmm6_8
  double v13; // xmm7_8
  double v14; // xmm8_8
  double v15; // xmm9_8
  double v16; // xmm10_8
  unsigned int v17; // r9d
  __int16 v18; // kr00_2
  unsigned __int64 v19; // rax
  float v20; // xmm0_4
  unsigned __int64 v21; // rax
  char v22; // r9
  float v23; // xmm0_4
  unsigned __int8 v24; // r9
  unsigned __int8 v25; // r8
  unsigned __int8 v26; // cl
  char v27; // dl
  int v28; // eax
  float v29; // xmm0_4
  int v30; // eax
  __int128 v31; // [rsp+28h] [rbp-69h] BYREF
  _BYTE v32[80]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v33; // [rsp+88h] [rbp-9h]

  v3 = 0;
  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v33 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v32, a2, a1);
  if ( (int)result < 0 )
    return result;
  v31 = 0LL;
  if ( !MonDescParser::EDID_PARSER::GetDolbyVisionVendorDataBlock(
          (MonDescParser::EDID_PARSER *)v32,
          (struct EDID_V1_CEA_861_DOLBY_VISION_DATABLOCK *)&v31) )
    return 3221226021LL;
  if ( (unsigned __int8)v31 == 1 )
  {
    v24 = BYTE4(v31);
    if ( (BYTE4(v31) & 3) != 1 )
    {
      *(_BYTE *)a3 = 0;
      return 3221225659LL;
    }
    v25 = BYTE6(v31);
    v26 = BYTE5(v31);
    v27 = BYTE7(v31);
    *(_BYTE *)a3 = 1;
    v28 = 50 * (BYTE2(v31) >> 1);
    *((double *)a3 + 1) = (float)((float)((float)(BYTE3(v31) >> 1) / 127.0) * (float)((float)(BYTE3(v31) >> 1) / 127.0));
    v29 = (float)v28;
    v30 = (BYTE7(v31) >> 3) | 0xA0;
    *((double *)a3 + 2) = (float)(v29 + 100.0);
    *((double *)a3 + 3) = (float)((float)v30 * 0.00390625);
    *((double *)a3 + 4) = (float)((float)(v26 & 1 | 0x40 | (2 * (v25 & 1 | (2 * (v27 & 7))))) * 0.00390625);
    *((double *)a3 + 5) = (float)((float)(v26 >> 1) * 0.00390625);
    *((double *)a3 + 6) = (float)((float)((v25 >> 1) | 0x80u) * 0.00390625);
    *((double *)a3 + 7) = (float)((float)((v24 >> 5) | 0x20u) * 0.00390625);
    *((double *)a3 + 8) = (float)((float)((unsigned __int8)(v24 & 0x1C | 0x20) >> 2) * 0.00390625);
LABEL_43:
    *((_BYTE *)a3 + 72) = v3;
    return 0LL;
  }
  if ( (unsigned __int8)v31 == 2 )
  {
    v17 = BYTE3(v31);
    v18 = WORD3(v31);
    v19 = (unsigned __int64)BYTE2(v31) >> 3;
    *(_BYTE *)a3 = 1;
    v20 = dword_14013B270[v19];
    v21 = (unsigned __int64)v17 >> 3;
    v22 = v17 & 3;
    *((double *)a3 + 1) = v20;
    *((double *)a3 + 2) = dword_14013B2F0[v21];
    *((double *)a3 + 3) = (float)((float)(((unsigned __int8)v18 >> 3) | 0xA0u) * 0.00390625);
    LODWORD(v21) = BYTE4(v31) >> 1;
    *((double *)a3 + 4) = (float)((float)((HIBYTE(v18) >> 3) | 0x40u) * 0.00390625);
    v23 = (float)(int)v21;
    LODWORD(v21) = (BYTE5(v31) >> 1) | 0x80;
    *((double *)a3 + 5) = (float)(v23 * 0.00390625);
    *((double *)a3 + 6) = (float)((float)(int)v21 * 0.00390625);
    *((double *)a3 + 7) = (float)((float)(v18 & 7 | 0x20u) * 0.00390625);
    *((double *)a3 + 8) = (float)((float)(HIBYTE(v18) & 7 | 8u) * 0.00390625);
    if ( v22 == 3 || v22 == 1 )
      v3 = 1;
    goto LABEL_43;
  }
  if ( (unsigned __int8)v31 != 4 )
    return 3221225659LL;
  v6 = BYTE1(v31);
  if ( (BYTE1(v31) & 3) == 1 )
  {
    v7 = dword_14013B370[((unsigned __int64)BYTE3(v31) >> 4) | (unsigned __int16)(16 * BYTE4(v31))];
    v8 = dword_14013B370[BYTE3(v31) & 0xF | (unsigned __int64)(unsigned __int16)(16 * BYTE5(v31))];
    v9 = (double)(BYTE8(v31) | (unsigned __int16)(BYTE6(v31) >> 6 << 8)) / 1023.0;
    v10 = (double)(BYTE9(v31) | (unsigned __int16)(((BYTE6(v31) >> 4) & 3) << 8)) / 1023.0;
    v11 = (double)(BYTE10(v31) | (unsigned __int16)(((BYTE6(v31) >> 2) & 3) << 8)) / 1023.0;
    v12 = (double)(BYTE11(v31) | (unsigned __int16)((BYTE6(v31) & 3) << 8)) / 1023.0;
    v13 = (double)(BYTE12(v31) | (unsigned __int16)(BYTE7(v31) >> 6 << 8)) / 1023.0;
    v14 = (double)(BYTE13(v31) | (unsigned __int16)(((BYTE7(v31) >> 4) & 3) << 8)) / 1023.0;
    v15 = (double)(BYTE14(v31) | (unsigned __int16)(((BYTE7(v31) >> 2) & 3) << 8)) / 1023.0;
    v16 = (double)(HIBYTE(v31) | (unsigned __int16)((BYTE7(v31) & 3) << 8)) / 1023.0;
    if ( (BYTE1(v31) & 8) != 0 )
    {
      if ( v8 == 0.0 || v7 > v8 )
        return 3221225485LL;
    }
    else
    {
      if ( v7 != 0.0 || v8 != 0.0 || (BYTE1(v31) & 4) != 0 )
        return 3221225485LL;
      v8 = 0.0;
      v7 = 0.0;
    }
    *((double *)a3 + 1) = v7;
    *((double *)a3 + 2) = v8;
    if ( (v6 & 4) != 0 )
    {
      if ( v9 == 0.0 || v10 == 0.0 || v11 == 0.0 || v12 == 0.0 || v13 == 0.0 || v14 == 0.0 || v15 == 0.0 || v16 == 0.0 )
        return 3221225485LL;
      *((double *)a3 + 3) = v9;
      *((double *)a3 + 4) = v10;
      *((double *)a3 + 5) = v11;
      *((double *)a3 + 6) = v12;
      *((double *)a3 + 7) = v13;
      *((double *)a3 + 8) = v14;
      *((double *)a3 + 10) = v15;
      *((double *)a3 + 11) = v16;
    }
    else
    {
      *((_QWORD *)a3 + 3) = 0LL;
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 6) = 0LL;
      *((_QWORD *)a3 + 7) = 0LL;
      *((_QWORD *)a3 + 8) = 0LL;
      *((_QWORD *)a3 + 10) = 0LL;
      *((_QWORD *)a3 + 11) = 0LL;
      if ( v9 != 0.0 || v10 != 0.0 || v11 != 0.0 || v12 != 0.0 || v13 != 0.0 || v14 != 0.0 || v15 != 0.0 || v16 != 0.0 )
        return 3221225485LL;
    }
    *(_BYTE *)a3 = 1;
    *((_BYTE *)a3 + 72) = 1;
    return 0LL;
  }
  return 3221225485LL;
}
