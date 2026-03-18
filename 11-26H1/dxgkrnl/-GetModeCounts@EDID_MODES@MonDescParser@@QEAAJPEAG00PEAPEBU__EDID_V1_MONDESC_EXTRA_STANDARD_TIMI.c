/*
 * XREFs of ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x140043C90
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x140043738 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?DenseOnesBitCount@MonDescParser@@YAEE@Z @ 0x140043F08 (-DenseOnesBitCount@MonDescParser@@YAEE@Z.c)
 *     ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEAAPEAPEAT_EDID_V1_BLOCK@@I@Z @ 0x140043F24 (-GetIterAtElement@EDID_PARSER@MonDescParser@@AEAAPEAPEAT_EDID_V1_BLOCK@@I@Z.c)
 *     ?GetCountBaseBlockDetTimBlocks@EDID_PARSER@MonDescParser@@QEBAEXZ @ 0x140043F54 (-GetCountBaseBlockDetTimBlocks@EDID_PARSER@MonDescParser@@QEBAEXZ.c)
 *     ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x1400440F4 (-IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1400447B4 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x140062D00 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x14009FE80 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetLocalNumOfDetTim@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAEXZ @ 0x1400A0234 (-GetLocalNumOfDetTim@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAEXZ.c)
 */

__int64 __fastcall MonDescParser::EDID_MODES::GetModeCounts(
        MonDescParser::EDID_PARSER **this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS **a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7)
{
  MonDescParser::EDID_PARSER *v7; // r15
  MonDescParser::EDID_PARSER **v8; // rsi
  union _EDID_V1_BLOCK **IterAtElement; // rax
  unsigned __int8 v13; // dl
  const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS **v14; // r14
  __int64 v15; // r11
  union _EDID_V1_BLOCK *v16; // r13
  MonDescParser *v17; // rcx
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // al
  unsigned __int8 v20; // r11
  __int16 v21; // r10
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned __int16 v24; // dx
  unsigned int *v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int16 v28; // dx
  unsigned __int16 i; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int16 v33; // cx
  __int16 v34; // dx
  unsigned __int16 *v35; // rbx
  unsigned __int8 CountBaseBlockDetTimBlocks; // al
  unsigned __int16 *v37; // rbx
  unsigned int v38; // edi
  MonDescParser::EDID_PARSER *v39; // r10
  MonDescParser::EDID_PARSER *v40; // r10
  union _EDID_V1_BLOCK **v41; // rax
  unsigned __int8 LocalNumOfDetTim; // al
  unsigned int v43; // r14d
  unsigned int v44; // edx
  int v45; // edx
  __int64 v47; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v48; // [rsp+28h] [rbp-8h] BYREF

  v7 = *this;
  v8 = this;
  IterAtElement = MonDescParser::EDID_PARSER::GetIterAtElement(*this, 0);
  v14 = a5;
  v15 = 0LL;
  v16 = *IterAtElement;
  if ( a5 )
    *a5 = 0LL;
  if ( a2 )
  {
    LOWORD(a5) = *(_WORD *)(*(_QWORD *)v7 + 35LL);
    MonDescParser::DenseOnesBitCount((MonDescParser *)(unsigned __int16)a5, v13);
    LOBYTE(v17) = BYTE1(a5);
    v19 = MonDescParser::DenseOnesBitCount(v17, v18);
    *a2 = (v20 >> 7) + v19 + v21;
    v15 = 0LL;
  }
  v22 = 4LL;
  if ( a3 )
  {
    v23 = *(_QWORD *)v7;
    v24 = 0;
    *a3 = 0;
    do
    {
      v25 = &v48;
      v47 = v23 + 2 * (v24 + 19LL);
      v26 = v15;
      do
      {
        v27 = *(unsigned __int8 *)(v23 + v26++ + 18);
        *v25 = v27;
        v25 = (unsigned int *)((char *)v25 + v22);
      }
      while ( v26 < 2 );
      if ( MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused((MonDescParser::EDID_PARSER_STANDARD_TIMING *)&v47) )
        break;
      ++*a3;
      v24 = v28 + 1;
    }
    while ( v24 < 8u );
  }
  if ( a4 )
    *a4 = v15;
  for ( i = v15; i < (unsigned __int16)v22; ++i )
  {
    v30 = *(_QWORD *)v7;
    v31 = i + 3LL;
    if ( *(_WORD *)(*(_QWORD *)v7 + 18 * v31) == (_WORD)v15 && *(_BYTE *)(v30 + 18 * v31 + 2) == (_BYTE)v15 )
    {
      if ( *(_BYTE *)(v30 + 18 * v31 + 4) == (_BYTE)v15 )
      {
        if ( *(_BYTE *)(v30 + 18 * v31 + 3) == 16 )
          continue;
      }
      else if ( *(_BYTE *)(v30 + 18 * v31 + 3) != 0xFD )
      {
        continue;
      }
      if ( *(_BYTE *)(v30 + 18LL * i + 57) == 0xFA )
      {
        v32 = (__int64)v16 + 18 * i + 59;
        if ( a4 )
        {
          v33 = v15;
          do
          {
            v34 = *(_WORD *)(v32 + 2LL * v33);
            if ( v34 == 257 )
              break;
            if ( !v34 )
              break;
            ++*a4;
            ++v33;
          }
          while ( v33 < 6u );
        }
        if ( v14 )
          *v14 = (const struct __EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS *)v32;
        break;
      }
    }
  }
  v35 = a6;
  if ( a6 )
  {
    CountBaseBlockDetTimBlocks = MonDescParser::EDID_PARSER::GetCountBaseBlockDetTimBlocks(v7);
    LODWORD(v15) = 0;
    *v35 = CountBaseBlockDetTimBlocks;
  }
  v37 = a7;
  if ( a7 )
  {
    v38 = v15;
    *a7 = v15;
    v39 = v7;
    if ( *((_DWORD *)v7 + 20) > (unsigned int)v15 )
    {
      do
      {
        if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(v39, v38) == 2 )
        {
          v41 = MonDescParser::EDID_PARSER::GetIterAtElement(v40, v38);
          MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock((MonDescParser::EDID_PARSER_CEA_861_EXT *)&v47, *v41);
          LocalNumOfDetTim = MonDescParser::EDID_PARSER_CEA_861_EXT::GetLocalNumOfDetTim((MonDescParser::EDID_PARSER_CEA_861_EXT *)&v47);
          v43 = v48;
          v44 = 0;
          *v37 += LocalNumOfDetTim;
          if ( v43 )
          {
            do
            {
              a5 = 0LL;
              if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                     (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v47,
                     v44,
                     (struct _EDID_V1_CEA_861_DATA_HEADER **)&a5)
                && (*(_BYTE *)a5 & 0xE0) == 0x40 )
              {
                *v37 += *(_BYTE *)a5 & 0x1F;
              }
              v44 = v45 + 1;
            }
            while ( v44 < v43 );
            v8 = this;
          }
        }
        v39 = *v8;
        ++v38;
      }
      while ( v38 < *((_DWORD *)*v8 + 20) );
    }
  }
  return 0LL;
}
