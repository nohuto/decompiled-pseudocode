/*
 * XREFs of RtlpIsUtf8Process @ 0x1800832B0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x1800363A0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeToOemN @ 0x180036620 (RtlUnicodeToOemN.c)
 *     RtlUpperChar @ 0x180082DC0 (RtlUpperChar.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     RtlOemToUnicodeN @ 0x18009FCA0 (RtlOemToUnicodeN.c)
 *     RtlDnsHostNameToComputerName @ 0x18009FD10 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800A00B0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800A0124 (RtlpDidUnicodeToOemWork.c)
 *     RtlGenerate8dot3Name @ 0x1801012F0 (RtlGenerate8dot3Name.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x18013C390 (RtlConsoleMultiByteToUnicodeN.c)
 *     CompareNamesCaseSensitive @ 0x18013C688 (CompareNamesCaseSensitive.c)
 *     ComputeNameLength @ 0x18013C828 (ComputeNameLength.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x180147590 (RtlIsNameLegalDOS8Dot3.c)
 *     RtlIsValidOemCharacter @ 0x180147768 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

bool RtlpIsUtf8Process()
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return GlobalRtlNlsState == -535 || word_1801C5FD0 == -535;
}
