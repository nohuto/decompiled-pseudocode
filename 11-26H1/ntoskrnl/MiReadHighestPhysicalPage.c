/*
 * XREFs of MiReadHighestPhysicalPage @ 0x1404D023C
 * Callers:
 *     MiAllocateUserPhysicalPagesPrepare @ 0x14087E398 (MiAllocateUserPhysicalPagesPrepare.c)
 *     MiCreateAweInfoBitMap @ 0x14087EC68 (MiCreateAweInfoBitMap.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadHighestPhysicalPage(__int64 a1)
{
  return *(_QWORD *)(a1 + 22280);
}
