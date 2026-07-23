/*
 * XREFs of RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800CB490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddIntegrityLabelToBoundaryDescriptor(
        POBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptor,
        PSID IntegrityLabel)
{
  char v2; // r8

  v2 = 1;
  return RtlAddSIDToBoundaryDescriptorEx(BoundaryDescriptor, IntegrityLabel, v2);
}
