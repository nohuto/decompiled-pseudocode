/*
 * XREFs of sub_140741C40 @ 0x140741C40
 * Callers:
 *     sub_140741C00 @ 0x140741C00 (sub_140741C00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140741C40(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140741C00(v2);
  return result;
}
