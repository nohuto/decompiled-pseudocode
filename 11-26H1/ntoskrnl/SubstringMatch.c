/*
 * XREFs of SubstringMatch @ 0x140AA4E68
 * Callers:
 *     PropertyEval @ 0x140969840 (PropertyEval.c)
 *     StringListElementSubstringMatch @ 0x140B6FFB0 (StringListElementSubstringMatch.c)
 * Callees:
 *     wcsstr @ 0x14053A900 (wcsstr.c)
 *     _wcsistr @ 0x140AA4ED0 (_wcsistr.c)
 */

__int64 __fastcall SubstringMatch(const wchar_t *a1, const wchar_t *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  wchar_t *v8; // rax
  wchar_t *v9; // r8
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rcx

  v4 = 0;
  if ( a3 )
    v8 = (wchar_t *)wcsistr();
  else
    v8 = wcsstr(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    if ( a4 == 9 )
    {
      v11 = v8 == a1;
    }
    else if ( a4 == 10 )
    {
      v12 = -1LL;
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
      do
        ++v12;
      while ( v9[v12] );
      v11 = v12 == v13;
    }
    else
    {
      v11 = a4 == 11;
    }
    if ( v11 )
      return 1;
  }
  return v4;
}
