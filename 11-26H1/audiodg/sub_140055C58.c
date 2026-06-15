/*
 * XREFs of sub_140055C58 @ 0x140055C58
 * Callers:
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140055C58(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF )
    return 2147942487LL;
  return result;
}
