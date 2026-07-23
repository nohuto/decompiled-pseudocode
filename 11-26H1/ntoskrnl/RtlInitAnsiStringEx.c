/*
 * XREFs of RtlInitAnsiStringEx @ 0x1404E6790
 * Callers:
 *     RtlInitUTF8StringEx @ 0x14061AEA0 (RtlInitUTF8StringEx.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1408073B0 (RtlCreateUnicodeStringFromAsciiz.c)
 * Callees:
 *     strlen @ 0x140742910 (strlen.c)
 */

NTSTATUS __stdcall RtlInitAnsiStringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  size_t v3; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( !SourceString )
    return 0;
  v3 = strlen(SourceString);
  if ( v3 <= 0xFFFE )
  {
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 1;
    return 0;
  }
  return -1073741562;
}
