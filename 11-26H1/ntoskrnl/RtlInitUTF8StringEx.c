/*
 * XREFs of RtlInitUTF8StringEx @ 0x14061AEA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1404E6790 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitUTF8StringEx(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
