/*
 * XREFs of ZwLockVirtualMemory @ 0x14072A2A0
 * Callers:
 *     CmSiLockViewOfSection @ 0x1404CAE58 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1406432BC (SmKmVirtualLockCtxLockMemory.c)
 *     DifZwLockVirtualMemoryWrapper @ 0x1406AD400 (DifZwLockVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
