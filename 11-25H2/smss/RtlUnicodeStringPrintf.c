/*
 * XREFs of RtlUnicodeStringPrintf @ 0x140011950
 * Callers:
 *     SmpSaveOldPageFile @ 0x140012C9C (SmpSaveOldPageFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  USHORT MaximumLength; // ax
  NTSTATUS v4; // ebx
  size_t v5; // rsi
  int v6; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( DestinationString->Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  v4 = 0;
  if ( !DestinationString->Buffer && (DestinationString->Length || MaximumLength) )
    return -1073741811;
  v5 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  v6 = _vsnwprintf(DestinationString->Buffer, v5, pszFormat, Args);
  if ( v6 < 0 || v6 > v5 )
  {
    LOWORD(v6) = v5;
    v4 = -2147483643;
  }
  DestinationString->Length = 2 * v6;
  return v4;
}
