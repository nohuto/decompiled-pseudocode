/*
 * XREFs of ZwAllocateUserPhysicalPages @ 0x140728E60
 * Callers:
 *     DifZwAllocateUserPhysicalPagesWrapper @ 0x14069D600 (DifZwAllocateUserPhysicalPagesWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
