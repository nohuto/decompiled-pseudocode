/*
 * XREFs of ZwMapUserPhysicalPages @ 0x14072A380
 * Callers:
 *     DifZwMapUserPhysicalPagesWrapper @ 0x1406ADBF0 (DifZwMapUserPhysicalPagesWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapUserPhysicalPages(PVOID VirtualAddress, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VirtualAddress);
}
