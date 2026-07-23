/*
 * XREFs of RtlpValidateSidBuffer @ 0x1800CBFC4
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1800CBEE0 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x1800CBEC0 (RtlLengthRequiredSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(unsigned __int8 *Sid, ULONG a2)
{
  if ( a2 < 8 || a2 < RtlLengthRequiredSid(Sid[1]) )
    return 0;
  else
    return RtlValidSid(Sid);
}
