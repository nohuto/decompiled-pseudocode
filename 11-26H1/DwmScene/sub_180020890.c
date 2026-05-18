/*
 * XREFs of sub_180020890 @ 0x180020890
 * Callers:
 *     sub_1800208F4 @ 0x1800208F4 (sub_1800208F4.c)
 * Callees:
 *     sub_18002085C @ 0x18002085C (sub_18002085C.c)
 */

__int64 __fastcall sub_180020890(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 152) + 4LL) + a1 - 152) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 152) + 4LL);
  *(_DWORD *)(v2 + a1 - 156) = v2 - 152;
  sub_18002085C((_QWORD *)(a1 - 128));
  return std::iostream::~basic_iostream<char,std::char_traits<char>>(a1 - 120);
}
