/*
 * XREFs of NtWriteVirtualMemory @ 0x140A2B280
 * Callers:
 *     DifNtWriteVirtualMemoryWrapper @ 0x140695AF0 (DifNtWriteVirtualMemoryWrapper.c)
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x140A2B320 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __cdecl NtWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v7 = 0;
  v6 = 32;
  return MiReadWriteVirtualMemory(
           (_DWORD)ProcessHandle,
           (_DWORD)BaseAddress,
           (_DWORD)Buffer,
           BufferSize,
           (__int64)NumberOfBytesWritten,
           v6,
           v7);
}
