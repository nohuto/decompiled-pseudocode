/*
 * XREFs of ??1?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x180612448
 * Callers:
 *     ??_D?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAAXXZ @ 0x180612BA8 (--_D-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAAXXZ.c)
 * Callees:
 *     ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x1806123C8 (--1-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::fstream::~fstream<char,std::char_traits<char>>(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 184) + 4LL) + a1 - 184) = &std::fstream::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 184) + 4LL);
  *(_DWORD *)(v2 + a1 - 188) = v2 - 184;
  std::filebuf::~filebuf<char,std::char_traits<char>>(a1 - 160);
  return std::iostream::~basic_iostream<char,std::char_traits<char>>(a1 - 152);
}
