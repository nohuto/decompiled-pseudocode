/*
 * XREFs of AuthzBasepFindTokenAttribute @ 0x1403C9F14
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1403C9DD0 (AuthzBasepQueryTokenAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1403CBD00 (AuthzBasepEqualUnicodeString.c)
 */

__int64 **__fastcall AuthzBasepFindTokenAttribute(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int i; // edi

  v1 = 0LL;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)AuthzBasepEqualUnicodeString(a1, (&TokenAttributeLookupTable)[2 * i]) )
      return &(&TokenAttributeLookupTable)[2 * i];
  }
  return (__int64 **)v1;
}
