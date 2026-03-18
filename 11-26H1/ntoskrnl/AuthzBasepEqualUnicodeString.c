/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x1403CBD00
 * Callers:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402B2540 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindTokenAttribute @ 0x1403C9F14 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403CA408 (AuthzBasepFindSecurityAttributeValue.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403CC900 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403CCDF0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403CD4D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1403CD5A0 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x140A7DB88 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403CD668 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, a2);
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
