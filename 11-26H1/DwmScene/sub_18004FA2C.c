/*
 * XREFs of sub_18004FA2C @ 0x18004FA2C
 * Callers:
 *     sub_18004FAB4 @ 0x18004FAB4 (sub_18004FAB4.c)
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 *     sub_1800889A0 @ 0x1800889A0 (sub_1800889A0.c)
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 *     sub_1800DDCD0 @ 0x1800DDCD0 (sub_1800DDCD0.c)
 *     sub_1800DDCF4 @ 0x1800DDCF4 (sub_1800DDCF4.c)
 *     sub_1800DDD18 @ 0x1800DDD18 (sub_1800DDD18.c)
 * Callees:
 *     sub_18004F734 @ 0x18004F734 (sub_18004F734.c)
 */

__int64 __fastcall sub_18004FA2C(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  sub_18004F734(a1 + 144);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
