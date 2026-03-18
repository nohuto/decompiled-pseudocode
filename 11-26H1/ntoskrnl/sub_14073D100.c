/*
 * XREFs of sub_14073D100 @ 0x14073D100
 * Callers:
 *     sub_14073D0C0 @ 0x14073D0C0 (sub_14073D0C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14073D100(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_14073D0C0(v2);
  return result;
}
