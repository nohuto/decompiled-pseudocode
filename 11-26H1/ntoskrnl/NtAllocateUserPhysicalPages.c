/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x14087F780
 * Callers:
 *     DifNtAllocateUserPhysicalPagesWrapper @ 0x14066F130 (DifNtAllocateUserPhysicalPagesWrapper.c)
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x14087DC48 (MiAllocateUserPhysicalPages.c)
 */

NTSTATUS __cdecl NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  return MiAllocateUserPhysicalPages(ProcessHandle, (__int64)NumberOfPages, (__int64)UserPfnArray, 0LL, 0);
}
