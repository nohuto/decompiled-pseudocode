/*
 * XREFs of ZwWriteVirtualMemory @ 0x14069B880
 * Callers:
 *     SepAdtCopyToLsaSharedMemory @ 0x140785D9C (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
