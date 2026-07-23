/*
 * XREFs of RtlpIsUtf8Process @ 0x18007A650
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180021500 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeToOemN @ 0x180021780 (RtlUnicodeToOemN.c)
 *     RtlUpperChar @ 0x18007A160 (RtlUpperChar.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     RtlOemToUnicodeN @ 0x18009EDD0 (RtlOemToUnicodeN.c)
 *     RtlDnsHostNameToComputerName @ 0x18009EE40 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18009F1E0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x18009F254 (RtlpDidUnicodeToOemWork.c)
 *     RtlGenerate8dot3Name @ 0x180100A40 (RtlGenerate8dot3Name.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x18013C250 (RtlConsoleMultiByteToUnicodeN.c)
 *     CompareNamesCaseSensitive @ 0x18013C548 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x18013C6E8 (ComputeNameLength.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x180147440 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlIsValidOemCharacter @ 0x180147618 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsUtf8Process()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9;
}
