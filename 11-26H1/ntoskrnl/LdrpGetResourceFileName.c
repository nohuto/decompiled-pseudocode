/*
 * XREFs of LdrpGetResourceFileName @ 0x14061B338
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DFDC0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlFindCharInUnicodeString @ 0x140805FDC (RtlFindCharInUnicodeString.c)
 */

int __fastcall LdrpGetResourceFileName(
        __int64 a1,
        char a2,
        UNICODE_STRING *a3,
        const WCHAR *a4,
        UNICODE_STRING *Destination)
{
  unsigned __int16 v9; // ax
  int result; // eax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  USHORT *i; // rcx
  WCHAR *v15; // rdx
  USHORT NonInclusivePrefixLength[8]; // [rsp+20h] [rbp-268h] BYREF
  WCHAR Source[264]; // [rsp+30h] [rbp-258h] BYREF

  NonInclusivePrefixLength[0] = 0;
  if ( !a1
    || !Destination
    || !a4
    || RtlFindCharInUnicodeString(a1, (PUNICODE_STRING)(a1 + 72), a3, NonInclusivePrefixLength) < 0 )
  {
    return -1073741811;
  }
  v9 = NonInclusivePrefixLength[0] + 2;
  if ( (unsigned __int16)(NonInclusivePrefixLength[0] + 2) >= 0x208u )
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
          return RtlAppendUnicodeToString(Destination, &a3->Length);
      }
    }
    return result;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( Source[v13] );
  for ( i = &NonInclusivePrefixLength[(unsigned int)v13 + 6]; ; --i )
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
