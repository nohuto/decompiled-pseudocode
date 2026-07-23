/*
 * XREFs of ZwFreeUserPhysicalPages @ 0x140729E80
 * Callers:
 *     DifZwFreeUserPhysicalPagesWrapper @ 0x1406AA710 (DifZwFreeUserPhysicalPagesWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
