/*
 * XREFs of AslpFileStringTokenize @ 0x1404D96C8
 * Callers:
 *     AslpFileVerQueryBlock @ 0x1409D7CBC (AslpFileVerQueryBlock.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall AslpFileStringTokenize(_WORD *a1, __int64 a2, _WORD **a3)
{
  const WCHAR *v4; // r8
  _WORD *v5; // rdx
  _WORD *v6; // rbx
  const WCHAR *v7; // r9
  WCHAR v8; // r8
  WCHAR v10; // r9

  if ( !a3 )
    return 0LL;
  if ( !a1 )
  {
    a1 = *a3;
    if ( !*a3 )
      return 0LL;
  }
  while ( *a1 )
  {
    v4 = L"\\";
    if ( asc_1400214D4[0] )
    {
      v10 = asc_1400214D4[0];
      do
      {
        if ( v10 == *a1 )
          break;
        v10 = *++v4;
      }
      while ( *v4 );
    }
    if ( !*v4 )
      break;
    ++a1;
  }
  v5 = a1;
  v6 = a1;
  while ( *a1 )
  {
    v7 = L"\\";
    if ( asc_1400214D4[0] )
    {
      v8 = asc_1400214D4[0];
      do
      {
        if ( v8 == *a1 )
          break;
        v8 = *++v7;
      }
      while ( *v7 );
    }
    if ( *v7 )
    {
      *a1++ = 0;
      break;
    }
    ++a1;
  }
  *a3 = a1;
  if ( a1 == v6 )
    return 0LL;
  return v5;
}
