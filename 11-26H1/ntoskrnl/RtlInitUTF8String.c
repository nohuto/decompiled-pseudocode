/*
 * XREFs of RtlInitUTF8String @ 0x14061AEC0
 * Callers:
 *     PiGetDefaultMessageString @ 0x140A39904 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 */

void __cdecl RtlInitUTF8String(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  RtlInitAnsiString(DestinationString, SourceString);
}
