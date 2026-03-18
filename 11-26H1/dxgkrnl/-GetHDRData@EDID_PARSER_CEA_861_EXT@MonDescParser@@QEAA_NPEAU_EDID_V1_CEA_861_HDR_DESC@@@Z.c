/*
 * XREFs of ?GetHDRData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x1400A0070
 * Callers:
 *     ?GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x140042B44 (-GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x14009FE80 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetHDRData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_HDR_DESC *a2)
{
  unsigned int v2; // esi
  unsigned int i; // edi
  struct _EDID_V1_CEA_861_DATA_HEADER *v5; // rdx
  unsigned __int8 v6; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  for ( i = 0; ; ++i )
  {
    if ( i >= v2 )
      return 0;
    v8 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, i, &v8) )
    {
      v5 = v8;
      if ( (*(_BYTE *)v8 & 0xE0) == 0xE0 && *((_BYTE *)v8 + 1) == 6 )
      {
        v6 = *(_BYTE *)v8 & 0x1F;
        if ( v6 >= 3u )
          break;
      }
    }
  }
  *(_BYTE *)a2 = *((_BYTE *)v8 + 2);
  *((_BYTE *)a2 + 1) = *((_BYTE *)v5 + 3);
  if ( v6 >= 4u )
    *((_BYTE *)a2 + 2) = *((_BYTE *)v5 + 4);
  if ( v6 >= 5u )
    *((_BYTE *)a2 + 3) = *((_BYTE *)v5 + 5);
  if ( v6 >= 6u )
    *((_BYTE *)a2 + 4) = *((_BYTE *)v5 + 6);
  return 1;
}
