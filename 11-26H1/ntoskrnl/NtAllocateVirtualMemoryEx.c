/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x1409F2240
 * Callers:
 *     DifNtAllocateVirtualMemoryExWrapper @ 0x14066B860 (DifNtAllocateVirtualMemoryExWrapper.c)
 * Callees:
 *     MmAllocateVirtualMemory @ 0x1409F22A0 (MmAllocateVirtualMemory.c)
 */

__int64 __fastcall NtAllocateVirtualMemoryEx(int a1, int a2, int a3, int a4, int a5, volatile void *Address, int a7)
{
  return MmAllocateVirtualMemory(a1, a2, a3, a4, a5, Address, a7, KeGetCurrentThread()->PreviousMode, 0, 0, 0LL);
}
