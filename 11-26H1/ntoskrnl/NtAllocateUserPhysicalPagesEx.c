/*
 * XREFs of NtAllocateUserPhysicalPagesEx @ 0x14087F7A0
 * Callers:
 *     DifNtAllocateUserPhysicalPagesExWrapper @ 0x14066EF90 (DifNtAllocateUserPhysicalPagesExWrapper.c)
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x14087DC48 (MiAllocateUserPhysicalPages.c)
 */

NTSTATUS __cdecl NtAllocateUserPhysicalPagesEx(
        HANDLE ProcessHandle,
        PULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  return MiAllocateUserPhysicalPages(
           ProcessHandle,
           (__int64)NumberOfPages,
           (__int64)UserPfnArray,
           (__int64)ExtendedParameters,
           ExtendedParameterCount);
}
