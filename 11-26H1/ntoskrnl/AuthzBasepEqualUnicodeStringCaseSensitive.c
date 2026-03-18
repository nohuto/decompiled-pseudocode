/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403CD668
 * Callers:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402B2540 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403CBD00 (AuthzBasepEqualUnicodeString.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403CC900 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403CCDF0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403CD4D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1403CD5A0 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403CF40C (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
