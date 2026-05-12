/*
 * XREFs of RtlUnicodeStringCatString @ 0x140058830
 * Callers:
 *     RaGetUnitPerfCounterIdString @ 0x140039668 (RaGetUnitPerfCounterIdString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int16 Length; // r9
  unsigned __int16 MaximumLength; // r8
  NTSTATUS result; // eax
  unsigned __int64 v6; // r8
  wchar_t *Buffer; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  __int16 v10; // cx
  unsigned __int64 v11; // r8
  char *v12; // r10

  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  result = 0;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
    return -1073741811;
  v6 = DestinationString->MaximumLength;
  Buffer = DestinationString->Buffer;
  v8 = 0x7FFFLL;
  v9 = (unsigned __int64)DestinationString->Length >> 1;
  v10 = 0;
  v11 = (v6 >> 1) - v9;
  if ( v11 )
  {
    v12 = (char *)Buffer + 2 * v9 - (_QWORD)pszSrc;
    while ( v8 )
    {
      if ( *pszSrc )
      {
        *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v12) = *pszSrc;
        --v8;
        ++pszSrc;
        ++v10;
        if ( --v11 )
          continue;
      }
      if ( v11 || !v8 )
        break;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( *pszSrc )
      result = -2147483643;
  }
  DestinationString->Length = 2 * (v9 + v10);
  return result;
}
