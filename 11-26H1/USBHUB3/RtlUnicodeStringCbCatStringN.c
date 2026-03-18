/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x14001F7A0
 * Callers:
 *     HUBID_BuildContainerID @ 0x14001E9B8 (HUBID_BuildContainerID.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  unsigned __int64 Length; // r11
  unsigned __int16 MaximumLength; // r9
  NTSTATUS result; // eax
  wchar_t *Buffer; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  size_t v11; // r8
  __int16 v12; // cx
  unsigned __int64 v13; // rdx
  char *v14; // r11

  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( (unsigned __int16)Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  result = 0;
  if ( !DestinationString->Buffer && ((_WORD)Length || MaximumLength) )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  v9 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  v10 = Length >> 1;
  v11 = cbToAppend >> 1;
  if ( v11 > 0x7FFF )
    return -1073741811;
  v12 = 0;
  v13 = v9 - v10;
  if ( v13 )
  {
    v14 = (char *)Buffer + 2 * v10 - (_QWORD)pszSrc;
    while ( v11 )
    {
      if ( *pszSrc )
      {
        *(_WORD *)&v14[(_QWORD)pszSrc] = *pszSrc;
        --v11;
        ++pszSrc;
        ++v12;
        if ( --v13 )
          continue;
      }
      if ( v13 )
        break;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( v11 )
    {
      if ( *pszSrc )
        result = -2147483643;
    }
  }
  DestinationString->Length = 2 * (v10 + v12);
  return result;
}
