/*
 * XREFs of MiGetVadPageSize @ 0x1404479B0
 * Callers:
 *     MiQueryMemoryRegionInfo @ 0x140923AB0 (MiQueryMemoryRegionInfo.c)
 *     MiCommitVadPreparePacket @ 0x140998470 (MiCommitVadPreparePacket.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(unsigned __int64 a1)
{
  return MiVadPageSizes[(a1 >> 17) & 3];
}
