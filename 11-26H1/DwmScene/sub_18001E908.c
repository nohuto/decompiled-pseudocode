/*
 * XREFs of sub_18001E908 @ 0x18001E908
 * Callers:
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_18002D270 @ 0x18002D270 (sub_18002D270.c)
 *     sub_180050B20 @ 0x180050B20 (sub_180050B20.c)
 *     sub_1800B95E8 @ 0x1800B95E8 (sub_1800B95E8.c)
 *     sub_1800BABD4 @ 0x1800BABD4 (sub_1800BABD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E908(__int64 a1)
{
  __int64 result; // rax

  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(a1 + 2 * result) );
  return result;
}
