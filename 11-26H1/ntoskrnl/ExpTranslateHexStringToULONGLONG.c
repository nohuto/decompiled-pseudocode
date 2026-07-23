/*
 * XREFs of ExpTranslateHexStringToULONGLONG @ 0x140843228
 * Callers:
 *     ExpParseSignatureName @ 0x140841DE0 (ExpParseSignatureName.c)
 * Callees:
 *     towlower @ 0x14053A250 (towlower.c)
 */

__int64 __fastcall ExpTranslateHexStringToULONGLONG(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  unsigned int i; // edi
  wint_t v7; // ax
  __int64 v8; // rbx

  v2 = -1LL;
  v4 = 0LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  if ( (unsigned int)v2 > 0x10 )
    return 3221225485LL;
  for ( i = 0; i < (unsigned int)v2; ++i )
  {
    v7 = towlower(*(_WORD *)(a1 + 2LL * i));
    if ( (unsigned __int16)(v7 - 48) > 9u )
    {
      if ( (unsigned __int16)(v7 - 97) > 5u )
        return 3221225485LL;
      v8 = 16 * v4 - 87;
    }
    else
    {
      v8 = 16 * v4 - 48;
    }
    v4 = v7 + v8;
  }
  *a2 = v4;
  return 0LL;
}
