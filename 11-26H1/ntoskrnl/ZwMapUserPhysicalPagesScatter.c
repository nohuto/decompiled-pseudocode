/*
 * XREFs of ZwMapUserPhysicalPagesScatter @ 0x140728020
 * Callers:
 *     DifZwMapUserPhysicalPagesScatterWrapper @ 0x1406ADA70 (DifZwMapUserPhysicalPagesScatterWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VirtualAddresses);
}
