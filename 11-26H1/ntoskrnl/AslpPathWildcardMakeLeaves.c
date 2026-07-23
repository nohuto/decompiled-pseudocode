/*
 * XREFs of AslpPathWildcardMakeLeaves @ 0x140891148
 * Callers:
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 *     AslStringHasWildcard @ 0x14088E3E4 (AslStringHasWildcard.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpPathWildcardMakeLeaves(WCHAR *SourceString)
{
  WCHAR *v1; // rbx
  wchar_t *Buffer; // rdi
  unsigned __int16 v3; // ax
  int v4; // r8d
  int v5; // eax
  WCHAR v6; // cx
  WCHAR *v7; // rax
  WCHAR v8; // r10
  __int64 result; // rax
  UNICODE_STRING v10; // [rsp+30h] [rbp-18h] BYREF

  v1 = SourceString;
  if ( !SourceString || !*SourceString )
    return 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&v10, SourceString);
  if ( v10.Length < 2u || (Buffer = v10.Buffer, !*v10.Buffer) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpPathWildcardMakeLeaves",
      3038,
      (unsigned int)"AslpPathGetFormatInfo failed [%x]");
    return 0LL;
  }
  v3 = v10.Length >> 1;
  if ( (unsigned __int16)(v10.Length >> 1) < 8u )
  {
    if ( v3 < 4u )
    {
      if ( v3 <= 2u )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_9:
    if ( !wcsncmp(Buffer, L"\\??\\", 4uLL) )
    {
      v4 = -2;
      goto LABEL_17;
    }
    if ( !wcsncmp(Buffer, L"\\\\?\\", 4uLL) || !wcsncmp(Buffer, L"\\\\.\\", 4uLL) )
    {
      v4 = -3;
      goto LABEL_17;
    }
LABEL_15:
    v5 = wcsncmp(Buffer, L"\\\\", 2uLL);
    v4 = -3;
    if ( !v5 )
      goto LABEL_17;
LABEL_16:
    v4 = 0;
    goto LABEL_17;
  }
  if ( wcsnicmp(v10.Buffer, L"\\??\\UNC\\", 8uLL) )
    goto LABEL_9;
  v4 = -4;
LABEL_17:
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
      if ( !v1[1] || (unsigned int)AslStringHasWildcard((__int16 *)v1 + 1) )
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
