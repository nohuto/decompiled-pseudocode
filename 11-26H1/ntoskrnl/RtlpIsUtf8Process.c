/*
 * XREFs of RtlpIsUtf8Process @ 0x14097D580
 * Callers:
 *     CompareNamesCaseSensitive @ 0x1408083AC (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x140808560 (ComputeNameLength.c)
 *     RtlUnicodeToOemN @ 0x14097B010 (RtlUnicodeToOemN.c)
 *     RtlGenerate8dot3Name @ 0x14097B570 (RtlGenerate8dot3Name.c)
 *     RtlMultiByteToUnicodeSize @ 0x14097BFE0 (RtlMultiByteToUnicodeSize.c)
 *     RtlUpcaseUnicodeToOemN @ 0x14097C090 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x14097C150 (RtlpDidUnicodeToOemWork.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x14097C630 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14097C810 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeToMultiByteSize @ 0x14097CA40 (RtlUnicodeToMultiByteSize.c)
 *     RtlxUnicodeStringToOemSize @ 0x14097CB20 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 *     RtlMultiByteToUnicodeN @ 0x14097CF30 (RtlMultiByteToUnicodeN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14097D0C0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpperChar @ 0x14097D180 (RtlUpperChar.c)
 *     RtlUpperString @ 0x14097D1C0 (RtlUpperString.c)
 *     RtlUnicodeToMultiByteN @ 0x14097D240 (RtlUnicodeToMultiByteN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x14097D3A0 (RtlAnsiCharToUnicodeChar.c)
 *     RtlOemToUnicodeN @ 0x14097E070 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x14097E350 (RtlIsValidOemCharacter.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 */

char RtlpIsUtf8Process()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v1; // r8
  bool v2; // dl
  struct _LIST_ENTRY *Blink; // rcx
  signed __int32 v5[8]; // [rsp+0h] [rbp-38h] BYREF
  bool v6; // [rsp+20h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  _InterlockedOr(v5, 0);
  if ( LOWORD(CurrentServerSiloGlobals[64].Blink) == 0xFDE9 || LOWORD(CurrentServerSiloGlobals[68].Blink) == 0xFDE9 )
    return 1;
  v2 = 0;
  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  if ( Blink )
  {
    if ( v1 )
      v2 = (unsigned __int16)RtlReadUShortFromUser((unsigned __int16 *)&Blink[52].Blink + 3) == 0xFDE9;
    else
      v2 = (unsigned __int16)RtlReadUShortFromUser((unsigned __int16 *)&Blink[52].Blink + 2) == 0xFDE9;
    v6 = v2;
  }
  return v2;
}
