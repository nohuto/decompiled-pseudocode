/*
 * XREFs of NtReadVirtualMemory @ 0x140A21CD0
 * Callers:
 *     DifNtReadVirtualMemoryWrapper @ 0x140688030 (DifNtReadVirtualMemoryWrapper.c)
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x140A21D00 (MiReadWriteVirtualMemory.c)
 */

__int64 __fastcall NtReadVirtualMemory(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v7 = 0;
  v6 = 16;
  return MiReadWriteVirtualMemory(a1, a2, a3, a4, a5, v6, v7);
}
