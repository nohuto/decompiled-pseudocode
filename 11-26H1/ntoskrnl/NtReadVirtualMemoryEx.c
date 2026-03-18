/*
 * XREFs of NtReadVirtualMemoryEx @ 0x1404B2E30
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x140A21D00 (MiReadWriteVirtualMemory.c)
 */

__int64 __fastcall NtReadVirtualMemoryEx(int a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v7; // [rsp+28h] [rbp-20h]

  v7 = 16;
  return MiReadWriteVirtualMemory(a1, a2, a3, a4, a5, v7, a6);
}
