/*
 * XREFs of RtlLengthRequiredSid @ 0x1800CE750
 * Callers:
 *     WerpAllocateAndInitializeSid @ 0x1800CE0D8 (WerpAllocateAndInitializeSid.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800CE610 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x1800CE854 (RtlpValidateSidBuffer.c)
 *     WerpFreeSid @ 0x180122620 (WerpFreeSid.c)
 *     RtlAllocateAndInitializeSidEx @ 0x18013CBE0 (RtlAllocateAndInitializeSidEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x18013D120 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthRequiredSid(unsigned int a1)
{
  if ( a1 > 0x3FFFFFF7 )
    return 0xFFFFFFFFLL;
  else
    return 4 * a1 + 8;
}
