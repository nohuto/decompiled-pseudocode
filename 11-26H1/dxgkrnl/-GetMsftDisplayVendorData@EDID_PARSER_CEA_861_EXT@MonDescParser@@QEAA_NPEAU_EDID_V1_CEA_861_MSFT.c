/*
 * XREFs of ?GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x14006C0D0
 * Callers:
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1400429CC (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 * Callees:
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x14009FE80 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 */

bool __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetMsftDisplayVendorData(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *a2)
{
  unsigned int v2; // ebp
  unsigned int i; // ebx
  struct _EDID_V1_CEA_861_DATA_HEADER *v6; // rdx
  int v7; // ecx
  bool result; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2);
  for ( i = 0; i < v2; ++i )
  {
    v9 = 0LL;
    if ( MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(this, i, &v9) )
    {
      v6 = v9;
      if ( (*(_BYTE *)v9 & 0xE0) == 0x60
        && (*(_BYTE *)v9 & 0x1F) == 0x15
        && (*(_DWORD *)((_BYTE *)v9 + 1) & 0xFFFFFF) == 0xCA125C )
      {
        v7 = *(_DWORD *)((char *)v9 + 17);
        result = 1;
        *(_OWORD *)a2 = *(_OWORD *)((char *)v9 + 1);
        *((_DWORD *)a2 + 4) = v7;
        *((_BYTE *)a2 + 20) = *((_BYTE *)v6 + 21);
        return result;
      }
    }
  }
  return 0;
}
