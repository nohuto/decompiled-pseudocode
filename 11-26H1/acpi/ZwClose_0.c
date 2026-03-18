/*
 * XREFs of ZwClose_0 @ 0x140055D67
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x1400BED44 (ArbAddInaccessibleAllocationRange.c)
 *     ArbRegReadMmConfigRanges @ 0x1400BF928 (ArbRegReadMmConfigRanges.c)
 *     ArbBuildAssignmentOrdering @ 0x1400D17D0 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwClose_0(HANDLE Handle)
{
  return ZwClose(Handle);
}
