/*
 * XREFs of RtlUnicodeStringCchCopyStringN @ 0x140615DB0
 * Callers:
 *     PopPlInitWString @ 0x1407E80A8 (PopPlInitWString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCchCopyStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  unsigned __int16 Length; // r10
  unsigned __int64 MaximumLength; // r9
  wchar_t *Buffer; // rdi
  NTSTATUS result; // eax
  __int16 v9; // cx
  unsigned __int64 v10; // rdx
  signed __int64 v11; // rdi

  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > (unsigned __int16)MaximumLength )
    return -1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  result = 0;
  if ( !Buffer && (Length || (_WORD)MaximumLength) )
    return -1073741811;
  v9 = 0;
  v10 = MaximumLength >> 1;
  if ( cchToCopy <= 0x7FFF )
  {
    if ( v10 )
    {
      v11 = (char *)Buffer - (char *)pszSrc;
      while ( cchToCopy )
      {
        if ( *pszSrc )
        {
          *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v11) = *pszSrc;
          --cchToCopy;
          ++pszSrc;
          ++v9;
          if ( --v10 )
            continue;
        }
        if ( v10 )
          break;
        goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( cchToCopy )
      {
        if ( *pszSrc )
          result = -2147483643;
      }
    }
  }
  else
  {
    result = -1073741811;
  }
  DestinationString->Length = 2 * v9;
  return result;
}
