/*
 * XREFs of sub_140741D00 @ 0x140741D00
 * Callers:
 *     sub_140741CC0 @ 0x140741CC0 (sub_140741CC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140741D00(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140741CC0(v2);
  return result;
}
