/*
 * XREFs of SepPotentialGlobalTableAttribute @ 0x1403B1CA0
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepShouldSetDelinkFlags @ 0x140AD1140 (SepShouldSetDelinkFlags.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 */

char __fastcall SepPotentialGlobalTableAttribute(PCUNICODE_STRING String2)
{
  int i; // ebx
  char v4; // al

  for ( i = 0; ; i = 1 )
  {
    if ( i )
      return 0;
    if ( KeGetCurrentIrql() < 2u )
      v4 = RtlPrefixUnicodeString((PCUNICODE_STRING)&PotentialGlobalAttributePrefixes, String2, 1u);
    else
      v4 = PotentialGlobalAttributePrefixes <= String2->Length
        && memcmp(
             *((const void **)&PotentialGlobalAttributePrefixes + 1),
             String2->Buffer,
             PotentialGlobalAttributePrefixes) == 0;
    if ( v4 )
      break;
  }
  return 1;
}
