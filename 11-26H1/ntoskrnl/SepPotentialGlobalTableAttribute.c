/*
 * XREFs of SepPotentialGlobalTableAttribute @ 0x1403CD380
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     SepShouldSetDelinkFlags @ 0x140ACEF00 (SepShouldSetDelinkFlags.c)
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     RtlPrefixUnicodeString @ 0x140A29BF0 (RtlPrefixUnicodeString.c)
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
