/*
 * XREFs of MiReadHighestPhysicalPage @ 0x1404D6A6C
 * Callers:
 *     MiAllocateUserPhysicalPagesPrepare @ 0x140877FB8 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateAweInfoBitMap @ 0x140878888 (MiCreateAweInfoBitMap.c)
 *     MiFindLargePageMemory @ 0x140B617F8 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadHighestPhysicalPage(__int64 a1)
{
  return *(_QWORD *)(a1 + 22280);
}
