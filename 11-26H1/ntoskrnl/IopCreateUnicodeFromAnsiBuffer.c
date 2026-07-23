/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1405CCE68
 * Callers:
 *     IopCreateArcName @ 0x140B1EBE8 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140CC3960 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
