/*
 * XREFs of RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800CDD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAddIntegrityLabelToBoundaryDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return RtlAddSIDToBoundaryDescriptorEx(a1, a2, a3);
}
