/*
 * XREFs of RtlCreateUnicodeString @ 0x180028180
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1800272E0 (RtlConvertSidToUnicodeString.c)
 *     LdrSetDllDirectory @ 0x180028210 (LdrSetDllDirectory.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlGetParentLocaleName @ 0x18004EDD0 (RtlGetParentLocaleName.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180051870 (RtlpInitUnicodeStringUsingBuffer.c)
 *     EtwpInitLoggerContext @ 0x180065D70 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180066468 (EtwpAddInstanceIdToLogFileName.c)
 *     LdrpLogEtwDllSearchResults @ 0x180098450 (LdrpLogEtwDllSearchResults.c)
 *     LdrpLogDllStateEx2 @ 0x18009AB40 (LdrpLogDllStateEx2.c)
 *     RtlCanonicalizeDomainName @ 0x1800AB600 (RtlCanonicalizeDomainName.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x18012047C (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned int v4; // ebx
  wchar_t *Atom; // rax

  v4 = 2 * wcslen(SourceString) + 2;
  if ( v4 > 0xFFFE )
    return 0;
  if ( !v4 )
    return 0;
  Atom = (wchar_t *)RtlpAllocateAtom(v4);
  DestinationString->Buffer = Atom;
  if ( !Atom )
    return 0;
  DestinationString->MaximumLength = v4;
  memmove(Atom, SourceString, v4);
  DestinationString->Length = v4 - 2;
  return 1;
}
