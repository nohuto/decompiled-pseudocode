/*
 * XREFs of MiInitializeQuotaTracker @ 0x1409C4B54
 * Callers:
 *     MiWaitForVadDeletion @ 0x140531014 (MiWaitForVadDeletion.c)
 *     MiReserveUserMemoryPrepare @ 0x14095B7EC (MiReserveUserMemoryPrepare.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateVad @ 0x14095D5C0 (MiAllocateVad.c)
 *     MiAllocateChildVads @ 0x140961AD0 (MiAllocateChildVads.c)
 *     MiAllocateDataVad @ 0x1409C49A0 (MiAllocateDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateImageVad @ 0x1409CD948 (MiAllocateImageVad.c)
 *     MiAllocateSplitVads @ 0x140AC04EC (MiAllocateSplitVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInitializeQuotaTracker(_BYTE *a1, unsigned __int8 a2, char a3)
{
  *a1 = a3 & 0xF0 | (a2 >> 4);
}
