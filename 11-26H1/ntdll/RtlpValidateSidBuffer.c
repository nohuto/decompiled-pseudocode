/*
 * XREFs of RtlpValidateSidBuffer @ 0x1800CE854
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1800CE770 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x1800CE750 (RtlLengthRequiredSid.c)
 */

bool __fastcall RtlpValidateSidBuffer(_BYTE *a1, unsigned int a2)
{
  return a2 >= 8 && a2 >= (unsigned int)RtlLengthRequiredSid((unsigned __int8)a1[1]) && RtlValidSid(a1);
}
