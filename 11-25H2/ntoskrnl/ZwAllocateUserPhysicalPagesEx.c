/*
 * XREFs of ZwAllocateUserPhysicalPagesEx @ 0x14069C000
 * Callers:
 *     <none>
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
