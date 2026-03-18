/*
 * XREFs of FontAssocDefaultRoutine @ 0x140219C40
 * Callers:
 *     <none>
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1400B778C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B7BF0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400BDD90 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FontAssocDefaultRoutine(wchar_t *Str1, __int64 a2, char *a3)
{
  __int64 v5; // rbx
  unsigned int i; // edi
  __int64 v7; // rbp

  v5 = *(_QWORD *)(W32GetSessionState((_DWORD)Str1, a2) + 96);
  if ( _wcsicmp(Str1, L"AssocSystemFont") )
  {
    if ( _wcsicmp(Str1, L"FontPackage") )
    {
      for ( i = 0; i < 7; ++i )
      {
        v7 = 664LL * i;
        if ( !_wcsicmp(Str1, (const wchar_t *)(v7 + v5 + 14304)) )
        {
          if ( *(_WORD *)a3 && (int)StringCchCopyW((char *)(v7 + v5 + 14354), 33LL, a3) >= 0 )
            *(_DWORD *)(v5 + v7 + 14296) = 1;
          return 0LL;
        }
      }
    }
    else
    {
      cCapString((unsigned __int16 *)(v5 + 19476), (WCHAR *)a3, 32);
    }
  }
  else
  {
    bAppendSysDirectory((unsigned __int16 *)(v5 + 18956), (const unsigned __int16 *)a3);
  }
  return 0LL;
}
