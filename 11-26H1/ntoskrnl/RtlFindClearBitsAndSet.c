/*
 * XREFs of RtlFindClearBitsAndSet @ 0x14035A440
 * Callers:
 *     BgpFwReserveAllocate @ 0x14035867C (BgpFwReserveAllocate.c)
 *     MiJoinHugeContext @ 0x140358884 (MiJoinHugeContext.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140359080 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x140359340 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x140511D00 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140511E84 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3 @ 0x14057ADCC (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x14057AF9C (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpIommuGetDomainId @ 0x14058E69C (HalpIommuGetDomainId.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x14058ECC4 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x14058ED50 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     MiReserveFaultPte @ 0x1406FC440 (MiReserveFaultPte.c)
 *     MiCreateSlabIdentity @ 0x14070AD4C (MiCreateSlabIdentity.c)
 *     RtlHotPatchSynchronizationRequired @ 0x140725820 (RtlHotPatchSynchronizationRequired.c)
 *     HalpIrtAllocateIndex @ 0x140787148 (HalpIrtAllocateIndex.c)
 *     TtmiCreateTerminal @ 0x1407F15A8 (TtmiCreateTerminal.c)
 *     PspGetNewSessionId @ 0x140804CB4 (PspGetNewSessionId.c)
 *     PspStorageAllocSlot @ 0x140805414 (PspStorageAllocSlot.c)
 *     MiAllocatePartitionId @ 0x14086EF20 (MiAllocatePartitionId.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x14094CB6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     SepGetLowBoxNumberEntry @ 0x140A3E414 (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x140AB7B44 (SepAddLuidToIndexEntry.c)
 *     RtlApplyHotPatch @ 0x140C0827C (RtlApplyHotPatch.c)
 *     ViAllocateFromContiguousMemory @ 0x140C2BEEC (ViAllocateFromContiguousMemory.c)
 *     MiAssignHalEntropy @ 0x140CFF258 (MiAssignHalEntropy.c)
 * Callees:
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
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
      *v7++ |= byte_140018470[v6];
    }
    if ( (unsigned int)v3 > 8 )
    {
      RtlSetVolatileMemory(v7, 255, (unsigned __int64)(unsigned int)v3 >> 3);
      v7 += (unsigned __int64)(unsigned int)v3 >> 3;
      v3 &= 7u;
    }
    result = ClearBits;
    if ( (_DWORD)v3 )
      *v7 |= byte_1400327C0[v3];
  }
  else
  {
    *v7 |= byte_1400327C0[v3] << v6;
    return ClearBits;
  }
  return result;
}
