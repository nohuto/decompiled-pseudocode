/*
 * XREFs of AslpPathWildcardMakeLeaves @ 0x1800A0B58
 * Callers:
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslStringHasWildcard @ 0x180099A3C (AslStringHasWildcard.c)
 */

__int64 __fastcall AslpPathWildcardMakeLeaves(WCHAR *SourceString)
{
  WCHAR *v1; // rbx
  const wchar_t *Buffer; // rcx
  unsigned __int16 v3; // ax
  int v4; // edx
  int v5; // eax
  WCHAR v6; // cx
  WCHAR *v7; // rax
  WCHAR v8; // r9
  __int64 result; // rax
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-18h] BYREF

  v1 = SourceString;
  if ( !SourceString || !*SourceString )
    return 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&v10, SourceString);
  if ( v10.Length < 2u || (Buffer = v10.Buffer, !*v10.Buffer) )
  {
    AslLogCallPrintf(1LL, "AslpPathWildcardMakeLeaves", 3038LL, "AslpPathGetFormatInfo failed [%x]", -1073741582);
    return 0LL;
  }
  v3 = v10.Length >> 1;
  if ( (unsigned __int16)(v10.Length >> 1) < 8u )
  {
    if ( v3 < 4u )
    {
      if ( v3 <= 2u )
        goto LABEL_18;
      goto LABEL_17;
    }
LABEL_10:
    if ( !wcsncmp(Buffer, L"\\??\\", 4uLL) )
    {
      v4 = -2;
      goto LABEL_19;
    }
    if ( !wcsncmp(v10.Buffer, L"\\\\?\\", 4uLL) || !wcsncmp(v10.Buffer, L"\\\\.\\", 4uLL) )
    {
      v4 = -3;
      goto LABEL_19;
    }
    Buffer = v10.Buffer;
LABEL_17:
    v5 = wcsncmp(Buffer, L"\\\\", 2uLL);
    v4 = -3;
    if ( !v5 )
      goto LABEL_19;
LABEL_18:
    v4 = 0;
    goto LABEL_19;
  }
  if ( _wcsnicmp(v10.Buffer, L"\\??\\UNC\\", 8uLL) )
  {
    Buffer = v10.Buffer;
    goto LABEL_10;
  }
  v4 = -4;
LABEL_19:
  v6 = *v1;
  v7 = v1;
  while ( v6 )
  {
    if ( v6 == 92 )
    {
      if ( v4 >= 0 )
        *v7 = 0;
      ++v4;
    }
    v6 = *++v7;
  }
  v7[1] = 0;
  if ( *v1 )
  {
    while ( 1 )
    {
      do
        ++v1;
      while ( *v1 );
      if ( !v1[1] || (unsigned int)AslStringHasWildcard(v1 + 1) )
        break;
      *v1 = v8;
      --v4;
    }
  }
  result = (unsigned int)(v4 + 1);
  if ( (int)result < 0 )
    return 0LL;
  return result;
}
