/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B1F88
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402FA444 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402FD210 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B1220 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403B1710 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403B1DF0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1403B1EC0 (AuthzBasepSecurityAttributePresent.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
