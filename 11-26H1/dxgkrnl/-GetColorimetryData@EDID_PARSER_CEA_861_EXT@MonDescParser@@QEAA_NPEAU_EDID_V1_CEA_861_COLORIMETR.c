/*
 * XREFs of ?GetColorimetryData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@@@Z @ 0x14009FDFC
 * Callers:
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1400427F0 (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x14009FE80 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

bool __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetColorimetryData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_COLORIMETRY_DESC *a2)
{
  unsigned int v2; // esi
  unsigned int i; // edx
  int v6; // edx
  bool result; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  for ( i = 0; i < v2; i = v6 + 1 )
  {
    v8 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, i, &v8)
      && (*(_BYTE *)v8 & 0xE0) == 0xE0
      && *((_BYTE *)v8 + 1) == 5
      && (*(_BYTE *)v8 & 0x1Fu) >= 3 )
    {
      result = 1;
      *(_BYTE *)a2 = *((_BYTE *)v8 + 2);
      *((_BYTE *)a2 + 1) = 0;
      return result;
    }
  }
  return 0;
}
