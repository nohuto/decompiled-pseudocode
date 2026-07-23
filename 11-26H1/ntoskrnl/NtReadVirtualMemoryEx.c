/*
 * XREFs of NtReadVirtualMemoryEx @ 0x1404AC4B0
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x140A2B320 (MiReadWriteVirtualMemory.c)
 */

NTSTATUS __cdecl NtReadVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead,
        ULONG Flags)
{
  int v7; // [rsp+28h] [rbp-20h]

  v7 = 16;
  return MiReadWriteVirtualMemory(
           (_DWORD)ProcessHandle,
           (_DWORD)BaseAddress,
           (_DWORD)Buffer,
           BufferSize,
           (__int64)NumberOfBytesRead,
           v7,
           Flags);
}
