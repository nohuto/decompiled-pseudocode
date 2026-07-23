/*
 * XREFs of RtlUnicodeStringCopyString @ 0x14047E504
 * Callers:
 *     PnpAllocateAndEnableEventWatchdog @ 0x140A19AB0 (PnpAllocateAndEnableEventWatchdog.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140B25110 (PopIdleWakeGenerateInterruptDescriptionString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int16 Length; // r9
  unsigned __int64 MaximumLength; // r8
  wchar_t *Buffer; // r11
  NTSTATUS result; // eax
  __int16 v7; // cx
  bool v8; // zf
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  signed __int64 v11; // r11

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
  v7 = 0;
  v9 = MaximumLength >> 1;
  v8 = MaximumLength >> 1 == 0;
  v10 = 0x7FFFLL;
  if ( v8 )
  {
LABEL_18:
    if ( *pszSrc )
      result = -2147483643;
  }
  else
  {
    v11 = (char *)Buffer - (char *)pszSrc;
    while ( v10 )
    {
      if ( *pszSrc )
      {
        *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v11) = *pszSrc;
        --v10;
        ++pszSrc;
        ++v7;
        if ( --v9 )
          continue;
      }
      if ( v9 || !v10 )
        break;
      goto LABEL_18;
    }
  }
  DestinationString->Length = 2 * v7;
  return result;
}
