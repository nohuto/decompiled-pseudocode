/*
 * XREFs of AuthzBasepFindTokenAttribute @ 0x1404F781C
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1402FB610 (AuthzBasepQueryTokenAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 */

__int64 **__fastcall AuthzBasepFindTokenAttribute(const UNICODE_STRING *a1)
{
  __int64 v1; // rbx
  unsigned int i; // edi

  v1 = 0LL;
  for ( i = 0; i < 4; ++i )
  {
    if ( AuthzBasepEqualUnicodeString(a1, (const UNICODE_STRING *)(&TokenAttributeLookupTable)[2 * i]) )
      return &(&TokenAttributeLookupTable)[2 * i];
  }
  return (__int64 **)v1;
}
