/*
 * XREFs of ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x1806123C8
 * Callers:
 *     ??1?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x180612448 (--1-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 *     ??_E?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAAPEAXI@Z @ 0x180612CA0 (--_E-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAAPEAXI@Z.c)
 *     _std::basic_fstream_char_std::char_traits_char___::basic_fstream_char_std::char_traits_char____::_1_::dtor$2 @ 0x180700FC4 (_std--basic_fstream_char_std--char_traits_char___--basic_fstream_char_std--char_tra_ea_180700FC4.c)
 * Callees:
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1802C2E5C (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?_Endwrite@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAA_NXZ @ 0x180616B58 (-_Endwrite@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAA_NXZ.c)
 *     ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x1806171FC (-_Init@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 */

__int64 __fastcall std::filebuf::~filebuf<char,std::char_traits<char>>(__int64 a1)
{
  *(_QWORD *)a1 = &std::filebuf::`vftable';
  if ( *(_QWORD *)(a1 + 128) )
    std::filebuf::_Reset_back(a1);
  if ( *(_BYTE *)(a1 + 124) )
  {
    if ( *(_QWORD *)(a1 + 128) )
    {
      std::filebuf::_Reset_back(a1);
      std::filebuf::_Endwrite(a1);
      fclose(*(FILE **)(a1 + 128));
    }
    std::filebuf::_Init(a1, 0LL, 2LL);
  }
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
