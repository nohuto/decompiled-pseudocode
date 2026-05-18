/*
 * XREFs of sub_1800208F4 @ 0x1800208F4
 * Callers:
 *     sub_18002098C @ 0x18002098C (sub_18002098C.c)
 *     sub_1800C4F18 @ 0x1800C4F18 (sub_1800C4F18.c)
 *     sub_1800C4FE4 @ 0x1800C4FE4 (sub_1800C4FE4.c)
 *     sub_1800E4D1F @ 0x1800E4D1F (sub_1800E4D1F.c)
 * Callees:
 *     sub_180020890 @ 0x180020890 (sub_180020890.c)
 */

__int64 __fastcall sub_1800208F4(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  sub_180020890(a1 + 152);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
