/*
 * XREFs of RtlClearBits @ 0x14035AF40
 * Callers:
 *     MiFreeSlabEntries @ 0x1402A6AEC (MiFreeSlabEntries.c)
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpDmaReturnToContiguousPool @ 0x14035B35C (HalpDmaReturnToContiguousPool.c)
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 *     HvpGrowDirtyVectors @ 0x14048CC48 (HvpGrowDirtyVectors.c)
 *     RtlFindSetBitsAndClear @ 0x1404EBB90 (RtlFindSetBitsAndClear.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404FD950 (HsaUpdateRemappingTableEntry.c)
 *     MiFinishPageFileExtension @ 0x140508B3C (MiFinishPageFileExtension.c)
 *     ExtEnvClearBits @ 0x14053553C (ExtEnvClearBits.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x14057AF9C (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14058B724 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x14058ED50 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     HalpIommuProcessIvhdEntry @ 0x1405AAB6C (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405AB470 (HsaAllocateRemappingTableEntry.c)
 *     PopWriteSecurePagesCallback @ 0x14060A100 (PopWriteSecurePagesCallback.c)
 *     RtlShiftLeftBitMap @ 0x14061BDC0 (RtlShiftLeftBitMap.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407854E0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x140787148 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x1407875AC (HalpIrtFreeIndex.c)
 *     MiCreatePagefile @ 0x1408714A0 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x140879F10 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x14087A074 (MiProcessHotPatchUndoTable.c)
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     HvIsCellAllocated @ 0x1408DF710 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1408DFC60 (CmpCheckValueList.c)
 *     HvpRemoveFreeCellHint @ 0x1408E2F60 (HvpRemoveFreeCellHint.c)
 *     CmpCheckKey @ 0x140A1E430 (CmpCheckKey.c)
 *     SepGetLowBoxNumberEntry @ 0x140A3E414 (SepGetLowBoxNumberEntry.c)
 *     PspQueryRateControlHistory @ 0x140A856AC (PspQueryRateControlHistory.c)
 *     MiReleaseDriverPtes @ 0x140A85EA8 (MiReleaseDriverPtes.c)
 *     HvpAdjustBitmap @ 0x140A885EC (HvpAdjustBitmap.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     PnprMarkOrMirrorPages @ 0x140BF7DB4 (PnprMarkOrMirrorPages.c)
 *     PopMirrorPhysicalMemory @ 0x140C097F0 (PopMirrorPhysicalMemory.c)
 *     PopCloneRange @ 0x140C0E3F0 (PopCloneRange.c)
 *     ViFreeToContiguousMemory @ 0x140C2CEE0 (ViFreeToContiguousMemory.c)
 *     HalpPowerInitDiscard @ 0x140CB4440 (HalpPowerInitDiscard.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
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
        *v5++ &= byte_1400327C0[v4];
      }
      if ( (unsigned int)v6 > 8 )
      {
        RtlSetVolatileMemory(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
        v5 += (unsigned __int64)(unsigned int)v6 >> 3;
        v6 &= 7u;
      }
      if ( (_DWORD)v6 )
        *v5 &= byte_140018470[v6];
    }
    else
    {
      *v5 &= ~(byte_1400327C0[NumberToClear] << v4);
    }
  }
}
