/*
 * XREFs of _CmFindFilterListInflectionPoint @ 0x140B55058
 * Callers:
 *     _CmMergeFilterLists @ 0x140B54D7C (_CmMergeFilterLists.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     _PnpMultiSzFind @ 0x1408A377C (_PnpMultiSzFind.c)
 */

wchar_t *__fastcall CmFindFilterListInflectionPoint(wchar_t *Str2, wchar_t *Str1, wchar_t *a3)
{
  wchar_t *v5; // rdi
  wchar_t *v6; // rbx
  wchar_t *v7; // rsi
  int v8; // eax
  wchar_t *v9; // rcx
  __int64 v10; // rax

  v5 = Str2;
  v6 = 0LL;
  v7 = 0LL;
  if ( Str1 && *Str1 && *Str2 )
  {
    while ( 1 )
    {
      v6 = PnpMultiSzFind(Str1, v5);
      if ( v6 )
        break;
      v8 = wcsicmp(v5, a3);
      v9 = v5;
      if ( v8 )
        v9 = v7;
      v10 = -1LL;
      v7 = v9;
      do
        ++v10;
      while ( v5[v10] );
      v5 += v10 + 1;
      if ( !*v5 )
      {
        if ( v9 )
          return v9;
        return v6;
      }
    }
  }
  return v6;
}
