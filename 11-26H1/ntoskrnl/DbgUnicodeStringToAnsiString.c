/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x1404D8D14
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x1404D8C44 (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404D8C9C (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x140B560FC (MiLoadUserSymbols.c)
 * Callees:
 *     RtlxUnicodeStringToOemSize @ 0x14097CB20 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgUnicodeStringToAnsiString(PANSI_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v4; // eax
  char *Pool2; // rax

  v4 = RtlxUnicodeStringToOemSize(SourceString);
  if ( v4 > 0xFFFF )
    return 0LL;
  DestinationString->MaximumLength = v4;
  DestinationString->Length = v4 - 1;
  Pool2 = (char *)ExAllocatePool2(0x40uLL);
  DestinationString->Buffer = Pool2;
  if ( !Pool2 )
    return 0LL;
  if ( RtlUnicodeStringToAnsiString(DestinationString, SourceString, 0) < 0 )
  {
    ExFreePoolWithTag(DestinationString->Buffer, 0);
    return 0LL;
  }
  return 1LL;
}
