/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x140A3C424
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140A3C358 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_1400040A0, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
