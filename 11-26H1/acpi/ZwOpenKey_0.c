/*
 * XREFs of ZwOpenKey_0 @ 0x140055DE5
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x1400BED44 (ArbAddInaccessibleAllocationRange.c)
 *     ArbRegReadMmConfigRanges @ 0x1400BF928 (ArbRegReadMmConfigRanges.c)
 *     ArbBuildAssignmentOrdering @ 0x1400D17D0 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwOpenKey_0(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
