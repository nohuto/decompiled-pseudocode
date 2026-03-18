/*
 * XREFs of ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x140043738
 * Callers:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x140042EC4 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 * Callees:
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x140043C90 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEAAPEAPEAT_EDID_V1_BLOCK@@I@Z @ 0x140043F24 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEAAPEAPEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x140043FA0 (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1400445E4 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x140044660 (--$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1400447B4 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x140062D00 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1400640C0 (-ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PE.c)
 *     ?ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z @ 0x1400650A4 (-ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x14009FE80 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x14009FEC8 (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1400A035C (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

signed int __fastcall MonDescParser::EDID_MODES::ObtainSupportedModes(
        MonDescParser::EDID_MODES *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct _VideoModeDescriptor *a4)
{
  struct _VideoModeDescriptor *v4; // r12
  signed int result; // eax
  unsigned __int16 v8; // di
  int v9; // r13d
  int v10; // r14d
  unsigned __int16 v11; // r15
  __int64 v12; // rbx
  bool v13; // r9
  __int64 v14; // r11
  unsigned __int16 v15; // si
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // di
  bool DetTimParser; // al
  __int64 v19; // rax
  _WORD *v20; // r10
  int v21; // r15d
  unsigned __int16 v22; // di
  unsigned int v23; // r14d
  MonDescParser::EDID_MODES *v24; // r11
  __int64 v25; // rdx
  unsigned __int8 *v26; // rcx
  unsigned __int16 *v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  MonDescParser::EDID_MODES *v30; // r15
  unsigned __int16 v31; // r14
  int v32; // ecx
  __int64 *v33; // rax
  unsigned int v34; // eax
  unsigned int v35; // r10d
  MonDescParser::EDID_PARSER *v36; // r11
  union _EDID_V1_BLOCK **IterAtElement; // rax
  struct _EDID_V1_CEA_861_DATA_HEADER *v38; // r11
  unsigned __int16 i; // di
  unsigned int j; // edi
  bool DataBlock; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v42; // r15
  const struct _EDID_V1_CEA_861_SHORT_VIDEO_DESC *v43; // r13
  unsigned int k; // r14d
  bool v45; // cf
  unsigned __int8 v46; // [rsp+48h] [rbp-29h]
  unsigned __int16 v47; // [rsp+4Ch] [rbp-25h] BYREF
  unsigned __int16 v48[2]; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int16 v49; // [rsp+54h] [rbp-1Dh] BYREF
  unsigned __int16 v50; // [rsp+58h] [rbp-19h] BYREF
  struct _EDID_V1_CEA_861_DATA_HEADER *v51; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int16 v52[8]; // [rsp+68h] [rbp-9h] BYREF
  _OWORD v53[5]; // [rsp+78h] [rbp+7h] BYREF

  v4 = a4;
  if ( !a2 || (!a4 || !a3) && *a2 )
    return -1073741811;
  v51 = 0LL;
  v49 = 0;
  v50 = 0;
  v52[0] = 0;
  v48[0] = 0;
  v47 = 0;
  v46 = 0;
  result = MonDescParser::EDID_MODES::GetModeCounts(this, &v49, &v50, v52, &v51, v48, &v47);
  if ( result < 0 )
    return result;
  v8 = v49;
  if ( v49 > 0x11u )
    return -1071841278;
  v9 = v50;
  if ( v50 > 8u )
    return -1071841278;
  v10 = v52[0];
  if ( v52[0] > 6u )
    return -1071841278;
  v11 = v48[0];
  if ( v48[0] > 4u )
    return -1071841278;
  v12 = *a2;
  if ( !(_WORD)v12 )
  {
    *a2 = v49 + v50 + v52[0] + v48[0] + v47;
    return -1073741789;
  }
  memset(v4, 0, 56 * v12);
  v14 = 0LL;
  *a3 = -1;
  v15 = 0;
  if ( (unsigned __int16)v12 < v8 )
  {
    v46 = 1;
    v8 = v12;
  }
  if ( v8 )
  {
    result = MonDescParser::EDID_MODES::ModesFromEstablishedTimings(this, v8, a4);
    v14 = 0LL;
    if ( result < 0 )
      return result;
    LOWORD(v12) = v12 - v8;
    v4 = &a4[v8];
    v15 = v8;
  }
  if ( (unsigned __int16)v12 < v11 )
  {
    v46 = 1;
    v11 = v12;
  }
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    v48[0] = v16;
    if ( v17 >= v11 || v16 >= 4u )
      break;
    *(_QWORD *)v52 = v14;
    DetTimParser = MonDescParser::EDID_PARSER::GetDetTimParser(
                     *(MonDescParser::EDID_PARSER **)this,
                     v16,
                     (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v52,
                     v13);
    v14 = 0LL;
    if ( DetTimParser )
    {
      result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                 this,
                 (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v52,
                 v4);
      v14 = 0LL;
      if ( result != -1071841271 )
      {
        if ( result < 0 )
          return result;
        if ( !v17 )
          *a3 = v15;
        if ( !v15
          || (v19 = MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v15], v4), v19 == -1) )
        {
          LOWORD(v12) = v12 - 1;
          ++v17;
          ++v15;
          ++v4;
        }
        else if ( (_WORD)v14 == v17 )
        {
          *v20 = v19;
        }
      }
    }
    v16 = v48[0] + 1;
  }
  if ( (unsigned __int16)v12 >= (unsigned __int16)v9 )
  {
    if ( (unsigned __int16)v12 >= (unsigned int)(v10 + v9) )
      goto LABEL_37;
    LOWORD(v10) = v12 - v9;
  }
  else
  {
    LOWORD(v9) = v12;
    LOWORD(v10) = v14;
  }
  v46 = 1;
LABEL_37:
  v21 = (unsigned __int16)v9;
  v22 = v14;
  v23 = (unsigned __int16)v9 + (unsigned __int16)v10;
  while ( v22 < v23 )
  {
    v24 = this;
    v25 = **(_QWORD **)this;
    v26 = (unsigned __int8 *)(v25 + 18);
    if ( v22 < (unsigned __int16)v9 )
    {
      *(_QWORD *)&v53[0] = v25 + 38 + 2LL * v22;
      DWORD2(v53[0]) = *v26;
      HIDWORD(v53[0]) = *(unsigned __int8 *)(v25 + 19);
    }
    else
    {
      v27 = &v52[4];
      v28 = 2LL;
      *(_QWORD *)v52 = (char *)v51 + 2 * (v22 - (__int64)v21);
      do
      {
        v29 = *v26++;
        *(_DWORD *)v27 = v29;
        v27 += 2;
        --v28;
      }
      while ( v28 );
      v24 = this;
      v53[0] = *(_OWORD *)v52;
      v21 = (unsigned __int16)v9;
    }
    result = MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
               v24,
               (struct MonDescParser::EDID_PARSER_STANDARD_TIMING *)v53,
               v22 >= (unsigned __int16)v9,
               v4);
    v14 = 0LL;
    if ( result != -1071841276 )
    {
      if ( result < 0 )
        return result;
      if ( !v15 || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v15], v4) == -1 )
      {
        LOWORD(v12) = v12 - 1;
        ++v15;
        ++v4;
      }
    }
    ++v22;
  }
  v30 = this;
  v31 = v14;
  v32 = v46;
  if ( (unsigned __int16)v12 < v47 )
    v32 = 1;
  *(_QWORD *)&v53[0] = v14;
  v33 = *(__int64 **)this;
  *(_DWORD *)v48 = v32;
  DWORD2(v53[0]) = v14;
  v34 = *((_DWORD *)v33 + 20);
  *(_DWORD *)v52 = v34;
  while ( 1 )
  {
    v47 = v31;
    if ( v31 >= v34 )
      break;
    if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(*(_QWORD *)v30, v31) == 2 )
    {
      IterAtElement = MonDescParser::EDID_PARSER::GetIterAtElement(v36, v35);
      MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
        (MonDescParser::EDID_PARSER_CEA_861_EXT *)v53,
        *IterAtElement);
      v38 = 0LL;
      v51 = 0LL;
      for ( i = 0;
            (_WORD)v12
         && MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
              (MonDescParser::EDID_PARSER_CEA_861_EXT *)v53,
              i,
              (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v51);
            ++i )
      {
        result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                   v30,
                   (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v51,
                   v4);
        v38 = 0LL;
        if ( result != -1071841271 )
        {
          if ( result < 0 )
            return result;
          if ( !v15 || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v15], v4) == -1 )
          {
            ++v15;
            LOWORD(v12) = v12 - 1;
            ++v4;
          }
        }
      }
      for ( j = (unsigned int)v38; (_WORD)v12 && j < DWORD2(v53[0]); ++j )
      {
        v51 = v38;
        DataBlock = MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                      (MonDescParser::EDID_PARSER_CEA_861_EXT *)v53,
                      j,
                      &v51);
        v38 = 0LL;
        if ( DataBlock )
        {
          v42 = v51;
          if ( (*(_BYTE *)v51 & 0xE0) == 0x40 )
          {
            v43 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v51 + 1);
            for ( k = 0; (_WORD)v12 && k < (*(_BYTE *)v42 & 0x1Fu); ++k )
            {
              result = MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(this, v43, v4);
              v38 = 0LL;
              if ( result != -1071841278 )
              {
                if ( result < 0 )
                  return result;
                ++v15;
                LOWORD(v12) = v12 - 1;
                ++v4;
              }
              v43 = (const struct _EDID_V1_CEA_861_SHORT_VIDEO_DESC *)((char *)v43 + 1);
            }
          }
        }
      }
      v30 = this;
      v31 = v47;
    }
    v34 = *(_DWORD *)v52;
    ++v31;
  }
  *a2 = v15;
  v45 = LOBYTE(v48[0]) != 0;
  LOBYTE(v48[0]) = -LOBYTE(v48[0]);
  return v45 ? 0xC0000023 : 0;
}
