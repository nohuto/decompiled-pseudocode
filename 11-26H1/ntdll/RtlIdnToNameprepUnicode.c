/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1801480F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x1800ADDE0 (RtlpNameprepAsciiWorker.c)
 */

NTSTATUS __cdecl RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(
           Flags,
           (unsigned __int16 *)SourceString,
           SourceStringLength,
           DestinationString,
           DestinationStringLength,
           0);
}
