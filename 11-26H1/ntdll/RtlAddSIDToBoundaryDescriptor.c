/*
 * XREFs of RtlAddSIDToBoundaryDescriptor @ 0x1800CBD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddSIDToBoundaryDescriptor(POBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptor, PSID RequiredSid)
{
  return RtlAddSIDToBoundaryDescriptorEx(BoundaryDescriptor, RequiredSid, 0LL);
}
