/*
 * XREFs of LdrpGetResourceFileName @ 0x1406182E8
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DCBD0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     __report_rangecheckfailure @ 0x140522044 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlFindCharInUnicodeString @ 0x14080053C (RtlFindCharInUnicodeString.c)
 */

int __fastcall LdrpGetResourceFileName(
        __int64 a1,
        char a2,
        const WCHAR *a3,
        const WCHAR *a4,
        UNICODE_STRING *Destination)
{
  unsigned __int16 v9; // ax
  int result; // eax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  WCHAR *i; // rcx
  WCHAR *v15; // rdx
  _WORD v16[8]; // [rsp+20h] [rbp-268h] BYREF
  WCHAR Source[264]; // [rsp+30h] [rbp-258h] BYREF

  v16[0] = 0;
  if ( !a1 || !Destination || !a4 || (int)RtlFindCharInUnicodeString(a1, a1 + 72, a3, v16) < 0 )
    return -1073741811;
  v9 = v16[0] + 2;
  if ( (unsigned __int16)(v16[0] + 2) >= 0x208u )
    return -1073020927;
  v11 = v9;
  memmove(Source, *(const void **)(a1 + 80), v9);
  v12 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v12 >= 0x208 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v12) = 0;
  if ( !a2 )
  {
    v15 = Source;
LABEL_19:
    result = RtlAppendUnicodeToString(Destination, v15);
    if ( result >= 0 )
    {
      if ( !a2 )
      {
        RtlAppendUnicodeToString(Destination, a4);
        RtlAppendUnicodeToString(Destination, L"\\");
      }
      result = RtlAppendUnicodeToString(Destination, *(PCWSTR *)(a1 + 96));
      if ( result >= 0 )
      {
        if ( a3 )
          return RtlAppendUnicodeToString(Destination, a3);
      }
    }
    return result;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( Source[v13] );
  for ( i = &v16[(unsigned int)v13 + 6]; ; --i )
  {
    if ( i <= Source )
      return -1073741686;
    if ( *i == 92 )
      break;
  }
  i[1] = 0;
  result = RtlAppendUnicodeToString(Destination, Source);
  if ( result >= 0 )
  {
    v15 = L"SystemResources\\";
    goto LABEL_19;
  }
  return result;
}
