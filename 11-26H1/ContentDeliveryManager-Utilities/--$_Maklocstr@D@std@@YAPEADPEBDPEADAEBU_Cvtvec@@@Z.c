/*
 * XREFs of ??$_Maklocstr@D@std@@YAPEADPEBDPEADAEBU_Cvtvec@@@Z @ 0x1800498B4
 * Callers:
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005BD20 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18000626C (--_U@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall std::_Maklocstr<char>(_BYTE *a1)
{
  _BYTE *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdi
  _BYTE *result; // rax
  __int64 v5; // rdx

  v1 = a1;
  v2 = -1LL;
  do
    ++v2;
  while ( a1[v2] );
  v3 = v2 + 1;
  result = operator new[](v2 + 1);
  if ( v3 )
  {
    v5 = result - v1;
    do
    {
      v1[v5] = *v1;
      ++v1;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
