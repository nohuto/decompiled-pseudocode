/*
 * XREFs of IommupGetTranslationTypeFromPolicy @ 0x14058C078
 * Callers:
 *     IvtBuildDefaultDomain @ 0x1405A5C80 (IvtBuildDefaultDomain.c)
 *     HsaBuildDefaultDomain @ 0x1405A911C (HsaBuildDefaultDomain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IommupGetTranslationTypeFromPolicy(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx

  result = 0LL;
  if ( a1 )
  {
    v2 = a1 - 1;
    if ( !v2 )
      return result;
    v3 = v2 - 1;
    if ( !v3 )
      return 1LL;
    if ( v3 == 1 )
      return 2LL;
  }
  return 3LL;
}
