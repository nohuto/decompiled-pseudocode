/*
 * XREFs of MiGetVadPageSize @ 0x14044F880
 * Callers:
 *     MiQueryMemoryRegionInfo @ 0x14091FF70 (MiQueryMemoryRegionInfo.c)
 *     MiCheckSecuredVad @ 0x14095DB28 (MiCheckSecuredVad.c)
 *     MmProtectVirtualMemory @ 0x14095E5D8 (MmProtectVirtualMemory.c)
 *     MiFreeVirtualMemory @ 0x14095F790 (MiFreeVirtualMemory.c)
 *     MiCommitVadPreparePacket @ 0x1409C7490 (MiCommitVadPreparePacket.c)
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(unsigned __int64 a1)
{
  return MiVadPageSizes[(a1 >> 17) & 3];
}
