/*
 * XREFs of RtlpIsUtf8Process @ 0x14096CC40
 * Callers:
 *     CompareNamesCaseSensitive @ 0x14080290C (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x140802AC0 (ComputeNameLength.c)
 *     RtlUnicodeToOemN @ 0x14096A6D0 (RtlUnicodeToOemN.c)
 *     RtlGenerate8dot3Name @ 0x14096AC30 (RtlGenerate8dot3Name.c)
 *     RtlMultiByteToUnicodeSize @ 0x14096B6A0 (RtlMultiByteToUnicodeSize.c)
 *     RtlUpcaseUnicodeToOemN @ 0x14096B750 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x14096B810 (RtlpDidUnicodeToOemWork.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x14096BCF0 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14096BED0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeToMultiByteSize @ 0x14096C100 (RtlUnicodeToMultiByteSize.c)
 *     RtlxUnicodeStringToOemSize @ 0x14096C1E0 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x14096C2C0 (RtlUnicodeStringToAnsiString.c)
 *     RtlMultiByteToUnicodeN @ 0x14096C5F0 (RtlMultiByteToUnicodeN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14096C780 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpperChar @ 0x14096C840 (RtlUpperChar.c)
 *     RtlUpperString @ 0x14096C880 (RtlUpperString.c)
 *     RtlUnicodeToMultiByteN @ 0x14096C900 (RtlUnicodeToMultiByteN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x14096CA60 (RtlAnsiCharToUnicodeChar.c)
 *     RtlOemToUnicodeN @ 0x14096E4D0 (RtlOemToUnicodeN.c)
 *     RtlIsValidOemCharacter @ 0x140A6B160 (RtlIsValidOemCharacter.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
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
