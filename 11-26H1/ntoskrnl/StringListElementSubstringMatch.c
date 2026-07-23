/*
 * XREFs of StringListElementSubstringMatch @ 0x140B6FFB0
 * Callers:
 *     PropertyEval @ 0x140969840 (PropertyEval.c)
 * Callees:
 *     SubstringMatch @ 0x140AA4E68 (SubstringMatch.c)
 */

__int64 __fastcall StringListElementSubstringMatch(const wchar_t *a1, int a2, const wchar_t *a3, int a4, int a5)
{
  const wchar_t *v6; // rdi
  unsigned int v9; // ebp
  int v10; // esi
  const wchar_t *i; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx

  v6 = a3;
  v9 = 0;
  v10 = 0;
  switch ( a5 )
  {
    case 0x2000:
      v10 = 9;
      break;
    case 0x3000:
      v10 = 10;
      break;
    case 0x4000:
      v10 = 11;
      break;
  }
  if ( *a3 )
  {
    do
    {
      for ( i = a1; *i; i += v12 + 1 )
      {
        if ( (unsigned int)SubstringMatch(i, v6, a4, v10) )
        {
          v9 = 1;
          break;
        }
        v12 = -1LL;
        do
          ++v12;
        while ( i[v12] );
      }
      if ( a2 == 18 || a2 == 8210 && v9 )
        break;
      v13 = -1LL;
      do
        ++v13;
      while ( v6[v13] );
      v6 += v13 + 1;
    }
    while ( *v6 );
  }
  return v9;
}
