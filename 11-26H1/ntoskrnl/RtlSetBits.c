/*
 * XREFs of RtlSetBits @ 0x14035AAB0
 * Callers:
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     MiSetPageFileAllocationBits @ 0x1403FDBF4 (MiSetPageFileAllocationBits.c)
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 *     MiStoreEvictPageFile @ 0x140404A30 (MiStoreEvictPageFile.c)
 *     MiStoreContractVirtualPagefileApc @ 0x1404B5E00 (MiStoreContractVirtualPagefileApc.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404FD950 (HsaUpdateRemappingTableEntry.c)
 *     HalpIommuProcessDeviceEntries @ 0x1405AA884 (HalpIommuProcessDeviceEntries.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140786E68 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140787148 (HalpIrtAllocateIndex.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BF1B4 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpEnlistFreeCell @ 0x1408E2D90 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1408E2F60 (HvpRemoveFreeCellHint.c)
 *     SepGetLowBoxNumberEntry @ 0x140A3E414 (SepGetLowBoxNumberEntry.c)
 *     HvCheckBin @ 0x140A5D8F0 (HvCheckBin.c)
 *     MiLockdownSections @ 0x140AA58F8 (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x140AA5AD0 (RtlMarkExceptionHandlingPages.c)
 *     SepAddLuidToIndexEntry @ 0x140AB7B44 (SepAddLuidToIndexEntry.c)
 *     MiReserveDriverPtes @ 0x140B0C074 (MiReserveDriverPtes.c)
 *     MiReserveExistingDriverPtes @ 0x140B0C144 (MiReserveExistingDriverPtes.c)
 *     HvpUpdateRecoveryVector @ 0x140B47574 (HvpUpdateRecoveryVector.c)
 *     PnprMirrorMarkedPages @ 0x140BF7F18 (PnprMirrorMarkedPages.c)
 *     PopSetBootPhaseRange @ 0x140C0279C (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x140C0BDA8 (PopDiscardRange.c)
 *     PopCloneRange @ 0x140C0E3F0 (PopCloneRange.c)
 *     ViAllocateContiguousMemory @ 0x140C2BDB4 (ViAllocateContiguousMemory.c)
 *     MiReserveBootDriverPtes @ 0x140CFAD14 (MiReserveBootDriverPtes.c)
 *     MiAssignSystemVa @ 0x140CFF388 (MiAssignSystemVa.c)
 *     MiInitializeTopLevelBitmap @ 0x140D10FA8 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 */

void __stdcall RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // r8d

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    v7 = v4 + NumberToSet;
    if ( v7 > 8 )
    {
      if ( (_DWORD)v4 )
      {
        v6 = v7 - 8;
        *v5++ |= byte_140018470[v4];
      }
      if ( (unsigned int)v6 > 8 )
      {
        RtlSetVolatileMemory(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
        v5 += (unsigned __int64)(unsigned int)v6 >> 3;
        v6 &= 7u;
      }
      if ( (_DWORD)v6 )
        *v5 |= byte_1400327C0[v6];
    }
    else
    {
      *v5 |= byte_1400327C0[v6] << v4;
    }
  }
}
