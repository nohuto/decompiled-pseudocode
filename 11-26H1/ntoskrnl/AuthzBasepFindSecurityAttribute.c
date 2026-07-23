/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x1403B1DF0
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x1403B0444 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1403B050C (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140A3C358 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x140B51F84 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B1F88 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  const UNICODE_STRING *v2; // rbx
  const UNICODE_STRING *v3; // rdi
  __int64 v4; // rsi
  const UNICODE_STRING *v6; // rbp
  char v7; // r15
  const UNICODE_STRING *v9; // rcx
  BOOLEAN v10; // al
  __int64 *i; // rdi

  v2 = *(const UNICODE_STRING **)(a1 + 8);
  v3 = (const UNICODE_STRING *)(a1 + 8);
  v4 = 0LL;
  v6 = 0LL;
  v7 = 0;
  while ( v2 != v3 )
  {
    v6 = v2;
    v9 = v2 + 2;
    if ( KeGetCurrentIrql() >= 2u )
      v10 = AuthzBasepEqualUnicodeStringCaseSensitive(v9, a2);
    else
      v10 = RtlEqualUnicodeString(v9, a2, 1u);
    if ( v10 )
    {
LABEL_12:
      v7 = 1;
      goto LABEL_9;
    }
    v2 = *(const UNICODE_STRING **)&v2->Length;
  }
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    v6 = (const UNICODE_STRING *)(i - 2);
    if ( (i[5] & 1) == 0 && AuthzBasepEqualUnicodeString(v6 + 2, a2) )
      goto LABEL_12;
  }
LABEL_9:
  if ( v7 )
    return v6;
  return (const UNICODE_STRING *)v4;
}
