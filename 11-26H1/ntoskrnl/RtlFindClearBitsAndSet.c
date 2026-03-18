/*
 * XREFs of RtlFindClearBitsAndSet @ 0x1403586A0
 * Callers:
 *     BgpFwReserveAllocate @ 0x1403568DC (BgpFwReserveAllocate.c)
 *     MiJoinHugeContext @ 0x140356AE4 (MiJoinHugeContext.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x1403572E0 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1403575A0 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x140518290 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140518414 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3 @ 0x14057889C (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x140578A6C (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpIommuGetDomainId @ 0x14058BF1C (HalpIommuGetDomainId.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x14058C544 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x14058C5D0 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     MiReserveFaultPte @ 0x1406F77D0 (MiReserveFaultPte.c)
 *     MiCreateSlabIdentity @ 0x14070607C (MiCreateSlabIdentity.c)
 *     RtlHotPatchSynchronizationRequired @ 0x140720C00 (RtlHotPatchSynchronizationRequired.c)
 *     HalpIrtAllocateIndex @ 0x140784614 (HalpIrtAllocateIndex.c)
 *     TtmiCreateTerminal @ 0x1407EBA48 (TtmiCreateTerminal.c)
 *     PspGetNewSessionId @ 0x1407FF284 (PspGetNewSessionId.c)
 *     PspStorageAllocSlot @ 0x1407FF9E4 (PspStorageAllocSlot.c)
 *     MiAllocatePartitionId @ 0x140868B40 (MiAllocatePartitionId.c)
 *     SepAddLuidToIndexEntry @ 0x140A2B9A4 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A2C7B8 (SepGetLowBoxNumberEntry.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x140A83A6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     RtlApplyHotPatch @ 0x140C0206C (RtlApplyHotPatch.c)
 *     ViAllocateFromContiguousMemory @ 0x140C25EDC (ViAllocateFromContiguousMemory.c)
 *     MiAssignHalEntropy @ 0x140CF8ED8 (MiAssignHalEntropy.c)
 * Callees:
 *     RtlFindClearBits @ 0x140358780 (RtlFindClearBits.c)
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
 */

ULONG __stdcall RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  __int64 v3; // rbx
  ULONG ClearBits; // ebp
  __int64 v6; // rcx
  _BYTE *v7; // rsi
  ULONG result; // eax

  v3 = NumberToFind;
  ClearBits = RtlFindClearBits(BitMapHeader, NumberToFind, HintIndex);
  if ( ClearBits == -1 || !(_DWORD)v3 )
    return ClearBits;
  v6 = ClearBits & 7;
  v7 = (char *)BitMapHeader->Buffer + ((unsigned __int64)ClearBits >> 3);
  if ( (unsigned int)(v6 + v3) > 8 )
  {
    if ( (ClearBits & 7) != 0 )
    {
      v3 = (unsigned int)(v6 + v3 - 8);
      *v7++ |= byte_140017F38[v6];
    }
    if ( (unsigned int)v3 > 8 )
    {
      RtlSetVolatileMemory(v7, 255, (unsigned __int64)(unsigned int)v3 >> 3);
      v7 += (unsigned __int64)(unsigned int)v3 >> 3;
      v3 &= 7u;
    }
    result = ClearBits;
    if ( (_DWORD)v3 )
      *v7 |= byte_140032340[v3];
  }
  else
  {
    *v7 |= byte_140032340[v3] << v6;
    return ClearBits;
  }
  return result;
}
