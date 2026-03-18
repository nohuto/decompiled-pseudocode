/*
 * XREFs of RtlSetBits @ 0x140358D10
 * Callers:
 *     MiAllocateLargeProcessPagesFromCache @ 0x14031070C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiInsertVad @ 0x140316000 (MiInsertVad.c)
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     MiSetPageFileAllocationBits @ 0x140404AF4 (MiSetPageFileAllocationBits.c)
 *     MiFindFreePageFileSpace @ 0x140405E3C (MiFindFreePageFileSpace.c)
 *     MiStoreEvictPageFile @ 0x14040B5E0 (MiStoreEvictPageFile.c)
 *     MiStoreContractVirtualPagefileApc @ 0x1404BC6C0 (MiStoreContractVirtualPagefileApc.c)
 *     HsaUpdateRemappingTableEntry @ 0x140504080 (HsaUpdateRemappingTableEntry.c)
 *     HalpIommuProcessDeviceEntries @ 0x1405A8074 (HalpIommuProcessDeviceEntries.c)
 *     MiTargetedPageFileReductionApc @ 0x14070D818 (MiTargetedPageFileReductionApc.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140784334 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140784614 (HalpIrtAllocateIndex.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BC154 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvpEnlistFreeCell @ 0x1408DC7D0 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1408DC9A0 (HvpRemoveFreeCellHint.c)
 *     SepAddLuidToIndexEntry @ 0x140A2B9A4 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A2C7B8 (SepGetLowBoxNumberEntry.c)
 *     HvCheckBin @ 0x140A54600 (HvCheckBin.c)
 *     MiLockdownSections @ 0x140AA94F0 (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x140AA96C8 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x140B0A2B4 (MiReserveDriverPtes.c)
 *     MiReserveExistingDriverPtes @ 0x140B0A384 (MiReserveExistingDriverPtes.c)
 *     HvpUpdateRecoveryVector @ 0x140B45538 (HvpUpdateRecoveryVector.c)
 *     PnprMirrorMarkedPages @ 0x140BF1F18 (PnprMirrorMarkedPages.c)
 *     PopSetBootPhaseRange @ 0x140BFC79C (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x140C05B98 (PopDiscardRange.c)
 *     PopCloneRange @ 0x140C081E0 (PopCloneRange.c)
 *     ViAllocateContiguousMemory @ 0x140C25DA4 (ViAllocateContiguousMemory.c)
 *     MiReserveBootDriverPtes @ 0x140CF4994 (MiReserveBootDriverPtes.c)
 *     MiAssignSystemVa @ 0x140CF9008 (MiAssignSystemVa.c)
 *     MiInitializeTopLevelBitmap @ 0x140D0ACD8 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
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
        *v5++ |= byte_140017F38[v4];
      }
      if ( (unsigned int)v6 > 8 )
      {
        RtlSetVolatileMemory(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
        v5 += (unsigned __int64)(unsigned int)v6 >> 3;
        v6 &= 7u;
      }
      if ( (_DWORD)v6 )
        *v5 |= byte_140032340[v6];
    }
    else
    {
      *v5 |= byte_140032340[v6] << v4;
    }
  }
}
