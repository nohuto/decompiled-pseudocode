/*
 * XREFs of WerpPathTail @ 0x18007FEC4
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x18007FCE4 (WerpGlobalFlagsForProcess.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall WerpPathTail(unsigned __int64 a1)
{
  __int64 v2; // rax
  _WORD *v3; // rcx
  _WORD *result; // rax

  if ( !a1 )
    return 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  v3 = (_WORD *)(a1 + 2 * v2);
  do
    result = v3--;
  while ( (unsigned __int64)result > a1 && *v3 != 58 && *v3 != 92 && *v3 != 47 );
  return result;
}
