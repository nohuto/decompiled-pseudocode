/*
 * XREFs of ZwAllocateUserPhysicalPagesEx @ 0x140728E80
 * Callers:
 *     DifZwAllocateUserPhysicalPagesExWrapper @ 0x14069D460 (DifZwAllocateUserPhysicalPagesExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateUserPhysicalPagesEx(
        HANDLE ProcessHandle,
        PULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
