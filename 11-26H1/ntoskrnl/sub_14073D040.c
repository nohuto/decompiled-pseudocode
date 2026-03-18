/*
 * XREFs of sub_14073D040 @ 0x14073D040
 * Callers:
 *     sub_14073D000 @ 0x14073D000 (sub_14073D000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14073D040(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_14073D000(v2);
  return result;
}
