/*
 * XREFs of RtlUnicodeStringValidateWorker @ 0x140439150
 * Callers:
 *     RtlUnicodeStringCatString @ 0x140438C68 (RtlUnicodeStringCatString.c)
 *     RtlStringCbCopyUnicodeString @ 0x1404390A4 (RtlStringCbCopyUnicodeString.c)
 *     CmpIsFileInSystemConfig @ 0x140A77570 (CmpIsFileInSystemConfig.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
{
  unsigned __int16 Length; // dx
  unsigned __int16 MaximumLength; // r8

  Length = SourceString->Length;
  if ( (SourceString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !SourceString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  else
  {
    return 0;
  }
}
