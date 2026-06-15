/*
 * XREFs of sub_14004F4AC @ 0x14004F4AC
 * Callers:
 *     sub_14001E180 @ 0x14001E180 (sub_14001E180.c)
 *     sub_14004E274 @ 0x14004E274 (sub_14004E274.c)
 * Callees:
 *     sub_140031D84 @ 0x140031D84 (sub_140031D84.c)
 */

__int64 __fastcall sub_14004F4AC(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return sub_140031D84((__int64)a1, a2, a3, a3, a4);
  result = 2147942487LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
