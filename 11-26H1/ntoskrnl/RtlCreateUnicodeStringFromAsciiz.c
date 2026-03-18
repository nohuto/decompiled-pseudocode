/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x140801910
 * Callers:
 *     CmpSetSystemRegistryString @ 0x1406E21A0 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140794CC0 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140D02F00 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1404ED1B0 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
