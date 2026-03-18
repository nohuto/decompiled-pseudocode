/*
 * XREFs of RtlClearBits @ 0x1403591A0
 * Callers:
 *     MiFreeSlabEntries @ 0x1402A76DC (MiFreeSlabEntries.c)
 *     BgpFwFreeMemory @ 0x140355E00 (BgpFwFreeMemory.c)
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     HalpDmaReturnToContiguousPool @ 0x1403595BC (HalpDmaReturnToContiguousPool.c)
 *     MiStoreWriteModifiedPages @ 0x140408D88 (MiStoreWriteModifiedPages.c)
 *     HvpGrowDirtyVectors @ 0x140492E10 (HvpGrowDirtyVectors.c)
 *     RtlFindSetBitsAndClear @ 0x1404F25B0 (RtlFindSetBitsAndClear.c)
 *     HsaUpdateRemappingTableEntry @ 0x140504080 (HsaUpdateRemappingTableEntry.c)
 *     MiFinishPageFileExtension @ 0x14050F0CC (MiFinishPageFileExtension.c)
 *     ExtEnvClearBits @ 0x1405330BC (ExtEnvClearBits.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x140578A6C (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x140589054 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x14058C5D0 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     HalpIommuProcessIvhdEntry @ 0x1405A835C (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405A8C60 (HsaAllocateRemappingTableEntry.c)
 *     PopWriteSecurePagesCallback @ 0x1406075A4 (PopWriteSecurePagesCallback.c)
 *     RtlShiftLeftBitMap @ 0x140618D70 (RtlShiftLeftBitMap.c)
 *     MiTargetedPageFileReductionApc @ 0x14070D818 (MiTargetedPageFileReductionApc.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407829AC (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x140784614 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x140784A78 (HalpIrtFreeIndex.c)
 *     MiCreatePagefile @ 0x14086B0C0 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x140873BB0 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x140873D14 (MiProcessHotPatchUndoTable.c)
 *     HvFreeHivePartial @ 0x1408B7A44 (HvFreeHivePartial.c)
 *     HvIsCellAllocated @ 0x1408D9150 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1408D96A0 (CmpCheckValueList.c)
 *     HvpRemoveFreeCellHint @ 0x1408DC9A0 (HvpRemoveFreeCellHint.c)
 *     CmpCheckKey @ 0x140A08360 (CmpCheckKey.c)
 *     SepGetLowBoxNumberEntry @ 0x140A2C7B8 (SepGetLowBoxNumberEntry.c)
 *     PspQueryRateControlHistory @ 0x140A7F83C (PspQueryRateControlHistory.c)
 *     MiReleaseDriverPtes @ 0x140A80038 (MiReleaseDriverPtes.c)
 *     HvpAdjustBitmap @ 0x140A8277C (HvpAdjustBitmap.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     PnprMarkOrMirrorPages @ 0x140BF1DB4 (PnprMarkOrMirrorPages.c)
 *     PopMirrorPhysicalMemory @ 0x140C035E0 (PopMirrorPhysicalMemory.c)
 *     PopCloneRange @ 0x140C081E0 (PopCloneRange.c)
 *     ViFreeToContiguousMemory @ 0x140C26ED0 (ViFreeToContiguousMemory.c)
 *     HalpPowerInitDiscard @ 0x140CAE400 (HalpPowerInitDiscard.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
 */

void __stdcall RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear > 8 )
    {
      if ( (_DWORD)v4 )
      {
        v6 = (unsigned int)v4 + NumberToClear - 8;
        *v5++ &= byte_140032340[v4];
      }
      if ( (unsigned int)v6 > 8 )
      {
        RtlSetVolatileMemory(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
        v5 += (unsigned __int64)(unsigned int)v6 >> 3;
        v6 &= 7u;
      }
      if ( (_DWORD)v6 )
        *v5 &= byte_140017F38[v6];
    }
    else
    {
      *v5 &= ~(byte_140032340[NumberToClear] << v4);
    }
  }
}
