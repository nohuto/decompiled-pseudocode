/*
 * XREFs of RtlCreateUnicodeString @ 0x18003DC10
 * Callers:
 *     RtlGetParentLocaleName @ 0x1800036A0 (RtlGetParentLocaleName.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180006140 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x18003CD70 (RtlConvertSidToUnicodeString.c)
 *     LdrSetDllDirectory @ 0x18003DCA0 (LdrSetDllDirectory.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x180077550 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180077C48 (EtwpAddInstanceIdToLogFileName.c)
 *     LdrpLogEtwDllSearchResults @ 0x180099320 (LdrpLogEtwDllSearchResults.c)
 *     LdrpLogDllStateEx2 @ 0x18009BA10 (LdrpLogDllStateEx2.c)
 *     RtlCanonicalizeDomainName @ 0x1800AC4D0 (RtlCanonicalizeDomainName.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1801206CC (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

char __fastcall RtlCreateUnicodeString(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  void *Atom; // rax

  v4 = 2 * wcslen(a2) + 2;
  if ( v4 > 0xFFFE )
    return 0;
  if ( !v4 )
    return 0;
  Atom = (void *)RtlpAllocateAtom(v4);
  *(_QWORD *)(a1 + 8) = Atom;
  if ( !Atom )
    return 0;
  *(_WORD *)(a1 + 2) = v4;
  memmove(Atom, a2, v4);
  *(_WORD *)a1 = v4 - 2;
  return 1;
}
