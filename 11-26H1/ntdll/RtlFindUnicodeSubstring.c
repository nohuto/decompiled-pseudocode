/*
 * XREFs of RtlFindUnicodeSubstring @ 0x180021DA0
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180020470 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x180021F40 (NLS_UPCASE.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  size_t Length; // rbp
  WCHAR *Buffer; // rbx
  WCHAR *v6; // rsi
  wchar_t *v7; // r14
  unsigned __int16 *v8; // rbp
  signed __int64 v9; // rdi
  wchar_t *i; // r11
  __int64 v11; // rdx
  __int64 v12; // r11
  __int16 v13; // ax
  __int16 v14; // r10

  if ( FullString->Length >= SearchString->Length )
  {
    Length = SearchString->Length;
    Buffer = FullString->Buffer;
    v6 = (WCHAR *)((char *)Buffer + FullString->Length - Length);
    if ( CaseInSensitive )
    {
      v7 = SearchString->Buffer;
      v8 = (wchar_t *)((char *)v7 + Length);
      v9 = (char *)Buffer - (char *)v7;
      while ( Buffer <= v6 )
      {
        for ( i = v7; i < v8; ++i )
        {
          v11 = *i;
          if ( *(wchar_t *)((char *)i + v9) != (_WORD)v11 )
          {
            NLS_UPCASE(qword_1801C5038, v11);
            v13 = NLS_UPCASE(qword_1801C5038, *(unsigned __int16 *)(v9 + v12));
            if ( v13 != v14 )
              break;
          }
        }
        if ( i == v8 )
          return Buffer;
        ++Buffer;
        v9 += 2LL;
      }
    }
    else
    {
      while ( Buffer <= v6 )
      {
        if ( !memcmp(Buffer, SearchString->Buffer, Length) )
          return Buffer;
        ++Buffer;
      }
    }
  }
  return 0LL;
}
