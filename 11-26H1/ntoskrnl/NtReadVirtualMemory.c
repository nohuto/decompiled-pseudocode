/*
 * XREFs of NtReadVirtualMemory @ 0x140A2B2F0
 * Callers:
 *     DifNtReadVirtualMemoryWrapper @ 0x14068BC10 (DifNtReadVirtualMemoryWrapper.c)
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x140A2B320 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __cdecl NtReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v7 = 0;
  v6 = 16;
  return MiReadWriteVirtualMemory(
           (_DWORD)ProcessHandle,
           (_DWORD)BaseAddress,
           (_DWORD)Buffer,
           BufferSize,
           (__int64)NumberOfBytesRead,
           v6,
           v7);
}
