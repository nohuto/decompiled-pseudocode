/*
 * XREFs of sub_18002085C @ 0x18002085C
 * Callers:
 *     sub_180020890 @ 0x180020890 (sub_180020890.c)
 *     sub_180020950 @ 0x180020950 (sub_180020950.c)
 *     sub_18004F734 @ 0x18004F734 (sub_18004F734.c)
 * Callees:
 *     sub_180020B04 @ 0x180020B04 (sub_180020B04.c)
 */

__int64 __fastcall sub_18002085C(_QWORD *a1)
{
  *a1 = &std::stringbuf::`vftable';
  sub_180020B04();
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
