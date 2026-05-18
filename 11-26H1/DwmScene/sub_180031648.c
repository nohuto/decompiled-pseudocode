/*
 * XREFs of sub_180031648 @ 0x180031648
 * Callers:
 *     sub_18003167C @ 0x18003167C (sub_18003167C.c)
 *     sub_1800323E0 @ 0x1800323E0 (sub_1800323E0.c)
 * Callees:
 *     sub_180037F40 @ 0x180037F40 (sub_180037F40.c)
 */

__int64 __fastcall sub_180031648(_QWORD *a1)
{
  *a1 = &std::wstringbuf::`vftable';
  sub_180037F40();
  return std::wstreambuf::~wstreambuf<wchar_t,std::char_traits<wchar_t>>(a1);
}
