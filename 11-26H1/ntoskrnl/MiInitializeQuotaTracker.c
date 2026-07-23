/*
 * XREFs of MiInitializeQuotaTracker @ 0x140995B34
 * Callers:
 *     MiWaitForVadDeletion @ 0x140533514 (MiWaitForVadDeletion.c)
 *     MiAllocateDataVad @ 0x140995980 (MiAllocateDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateImageVad @ 0x14099E928 (MiAllocateImageVad.c)
 *     MiReserveUserMemoryPrepare @ 0x140A010AC (MiReserveUserMemoryPrepare.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateVad @ 0x140A02E80 (MiAllocateVad.c)
 *     MiAllocateChildVads @ 0x140A077C4 (MiAllocateChildVads.c)
 *     MiAllocateSplitVads @ 0x140AC258C (MiAllocateSplitVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInitializeQuotaTracker(_BYTE *a1, unsigned __int8 a2, char a3)
{
  *a1 = a3 & 0xF0 | (a2 >> 4);
}
