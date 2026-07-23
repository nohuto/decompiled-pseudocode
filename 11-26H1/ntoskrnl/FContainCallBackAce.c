/*
 * XREFs of FContainCallBackAce @ 0x140900EB0
 * Callers:
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     LocalGetAceCount @ 0x140A7C8D0 (LocalGetAceCount.c)
 * Callees:
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 */

__int64 __fastcall FContainCallBackAce(wchar_t *Str1)
{
  wchar_t *i; // rbx
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v6; // rcx

  for ( i = Str1; *i && i[1]; ++i )
  {
    if ( !wcsnicmp(i, L"XA", 2uLL)
      || !wcsnicmp(i, L"XD", 2uLL)
      || !wcsnicmp(i, L"RA", 2uLL)
      || !wcsnicmp(i, L"SP", 2uLL)
      || !wcsnicmp(i, L"XU", 2uLL)
      || !wcsnicmp(i, L"ZA", 2uLL)
      || !wcsnicmp(i, L"FL", 2uLL) )
    {
      v3 = 1;
      if ( i - 1 >= Str1 )
      {
        v6 = 1LL;
        do
        {
          if ( i[-v6] != 32 )
            break;
          v6 = ++v3;
        }
        while ( &i[-v3] >= Str1 );
      }
      if ( i[-v3] == 40 )
      {
        LODWORD(v4) = 2;
        if ( i[2] == 32 )
        {
          do
            v4 = (unsigned int)(v4 + 1);
          while ( i[v4] == 32 );
        }
        if ( i[(unsigned int)v4] == 59 )
          return 1LL;
      }
    }
  }
  return 0LL;
}
