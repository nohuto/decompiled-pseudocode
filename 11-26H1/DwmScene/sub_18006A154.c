/*
 * XREFs of sub_18006A154 @ 0x18006A154
 * Callers:
 *     sub_18005FFB4 @ 0x18005FFB4 (sub_18005FFB4.c)
 * Callees:
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 */

__int64 __fastcall sub_18006A154(__int64 a1)
{
  __int64 result; // rax

  result = 0x492492492492492LL;
  if ( *(_QWORD *)(a1 + 8) == 0x492492492492492LL )
    sub_18001DF68();
  return result;
}
