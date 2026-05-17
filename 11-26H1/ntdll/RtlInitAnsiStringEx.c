/*
 * XREFs of RtlInitAnsiStringEx @ 0x1800CBE40
 * Callers:
 *     LdrpEnclaveAddDelayloadModules @ 0x18010D95C (LdrpEnclaveAddDelayloadModules.c)
 *     RtlInitUTF8StringEx @ 0x180140870 (RtlInitUTF8StringEx.c)
 *     LdrpAddRedirectedFunction @ 0x18015DEAC (LdrpAddRedirectedFunction.c)
 * Callees:
 *     strlen @ 0x180164FE0 (strlen.c)
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
