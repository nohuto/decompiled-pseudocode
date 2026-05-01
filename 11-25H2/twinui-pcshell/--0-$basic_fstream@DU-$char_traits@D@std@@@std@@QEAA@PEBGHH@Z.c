/*
 * XREFs of ??0?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@PEBGHH@Z @ 0x1805ED1E8
 * Callers:
 *     ??$?0Vpath@filesystem@std@@$0A@@?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@AEBVpath@filesystem@1@HH@Z @ 0x1805EB800 (--$-0Vpath@filesystem@std@@$0A@@-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@AEBVpath@files.c)
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x180215F94 (--1locale@std@@QEAA@XZ.c)
 *     ?_Initcvt@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXAEBV?$codecvt@DDU_Mbstatet@@@2@@Z @ 0x18023B2AC (-_Initcvt@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXAEBV-$codecvt@DDU_Mbstatet@@@2@@Z.c)
 *     ??$use_facet@V?$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x1805ECF4C (--$use_facet@V-$codecvt@DDU_Mbstatet@@@std@@@std@@YAAEBV-$codecvt@DDU_Mbstatet@@@0@AEBVlocale@0@.c)
 *     ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x1805F2AF8 (-_Init@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::fstream::fstream(_QWORD *a1, const unsigned __int16 *a2)
{
  struct _iobuf *v4; // rax
  std::locale *v5; // rax
  struct std::_Facet_base *v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &std::fstream::`vbtable'{for `std::istream'};
  a1[2] = &std::fstream::`vbtable'{for `std::ostream'};
  std::ios::ios(a1 + 23);
  std::iostream::basic_iostream<char>(a1, a1 + 3, 0LL);
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::fstream::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 184;
  v8[0] = a1 + 3;
  std::streambuf::streambuf(a1 + 3);
  a1[3] = &std::filebuf::`vftable';
  std::filebuf::_Init(a1 + 3, 0LL, 0LL);
  if ( a1[19] || (v4 = std::_Fiopen(a2, 3, 64)) == 0LL )
  {
    std::ios::setstate((char *)a1 + *(int *)(*a1 + 4LL), 2LL);
  }
  else
  {
    std::filebuf::_Init(a1 + 3, v4, 1LL);
    v5 = (std::locale *)std::streambuf::getloc(a1 + 3, v8);
    v6 = std::use_facet<std::codecvt<char,char,_Mbstatet>>(v5);
    std::filebuf::_Initcvt((__int64)(a1 + 3), v6);
    std::locale::~locale((std::locale *)v8);
  }
  return a1;
}
