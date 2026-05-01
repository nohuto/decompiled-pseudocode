/*
 * XREFs of AslpFileStringTokenize @ 0x18009E37C
 * Callers:
 *     AslpFileVerQueryBlock @ 0x18009E4B4 (AslpFileVerQueryBlock.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall AslpFileStringTokenize(_WORD *a1, __int64 a2, _WORD **a3)
{
  const WCHAR *v4; // r8
  WCHAR v5; // r9
  _WORD *v6; // rdx
  _WORD *v7; // r11
  const WCHAR *v8; // r9
  WCHAR v9; // r8

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
    if ( asc_1800BD5E8[0] )
    {
      v5 = asc_1800BD5E8[0];
      do
      {
        if ( v5 == *a1 )
          break;
        v5 = *++v4;
      }
      while ( *v4 );
    }
    if ( !*v4 )
      break;
    ++a1;
  }
  v6 = a1;
  v7 = a1;
  while ( *a1 )
  {
    v8 = L"\\";
    if ( asc_1800BD5E8[0] )
    {
      v9 = asc_1800BD5E8[0];
      do
      {
        if ( v9 == *a1 )
          break;
        v9 = *++v8;
      }
      while ( *v8 );
    }
    if ( *v8 )
    {
      *a1++ = 0;
      break;
    }
    ++a1;
  }
  *a3 = a1;
  if ( a1 == v7 )
    return 0LL;
  return v6;
}
