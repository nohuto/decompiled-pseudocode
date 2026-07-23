/*
 * XREFs of RtlLengthRequiredSid @ 0x1800CBEC0
 * Callers:
 *     WerpAllocateAndInitializeSid @ 0x1800CB848 (WerpAllocateAndInitializeSid.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800CBD80 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x1800CBFC4 (RtlpValidateSidBuffer.c)
 *     WerpFreeSid @ 0x1801223C0 (WerpFreeSid.c)
 *     RtlAllocateAndInitializeSidEx @ 0x18013CA90 (RtlAllocateAndInitializeSidEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x18013CFD0 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
