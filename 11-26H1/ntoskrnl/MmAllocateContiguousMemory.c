/*
 * XREFs of MmAllocateContiguousMemory @ 0x1404F7740
 * Callers:
 *     DifMmAllocateContiguousMemoryWrapper @ 0x140669360 (DifMmAllocateContiguousMemoryWrapper.c)
 * Callees:
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemory(SIZE_T NumberOfBytes, PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int64 v2; // rdx
  SIZE_T v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = NumberOfBytes;
  v2 = (unsigned __int64)HighestAcceptableAddress.QuadPart >> 12;
  if ( v2 > qword_140E2D920 )
    v2 = qword_140E2D920;
  return (PVOID)MiAllocateContiguousMemory(
                  &v4,
                  0LL,
                  v2,
                  0LL,
                  6u,
                  0x80000000,
                  (volatile signed __int64 *)&MiSystemPartition,
                  0x546E6F43u,
                  0);
}
