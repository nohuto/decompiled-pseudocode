/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1405CA598
 * Callers:
 *     IopCreateArcName @ 0x140B1C9D8 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140CBD890 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
