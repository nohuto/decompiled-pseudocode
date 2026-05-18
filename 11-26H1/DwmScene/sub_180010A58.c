/*
 * XREFs of sub_180010A58 @ 0x180010A58
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_18000FC90 @ 0x18000FC90 (sub_18000FC90.c)
 *     sub_1800108BC @ 0x1800108BC (sub_1800108BC.c)
 *     sub_1800108F8 @ 0x1800108F8 (sub_1800108F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010A58(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 2147942487LL;
  return result;
}
