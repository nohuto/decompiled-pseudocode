/*
 * XREFs of MiWorkingSetIsContended @ 0x1403182D0
 * Callers:
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiGetWorkingSetInfoList @ 0x1402D28A0 (MiGetWorkingSetInfoList.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiQueryAddressSpan @ 0x140304F70 (MiQueryAddressSpan.c)
 *     MiSharePagesYield @ 0x1403070E0 (MiSharePagesYield.c)
 *     MiMapUserLargePages @ 0x14030FD60 (MiMapUserLargePages.c)
 *     MiCommitVadFillPageTables @ 0x140310ED0 (MiCommitVadFillPageTables.c)
 *     MiProtectGoodCitizen @ 0x140311404 (MiProtectGoodCitizen.c)
 *     MiComputePageCommitment @ 0x140311CE0 (MiComputePageCommitment.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140312684 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiInsertViewOfPhysicalSection @ 0x140315954 (MiInsertViewOfPhysicalSection.c)
 *     MiWalkPtesForWriteWatchState @ 0x1403178F8 (MiWalkPtesForWriteWatchState.c)
 *     MiGetPageChainYield @ 0x140318260 (MiGetPageChainYield.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x140341128 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     MiCommitEnclavePages @ 0x140341288 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403414DC (MiAddPagesToEnclave.c)
 *     MiFillPoolCommitPageTable @ 0x1403652A0 (MiFillPoolCommitPageTable.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14036672C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDispatchFault @ 0x1403A3E60 (MiDispatchFault.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E72E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1404F4AF0 (MiVadRangeIsIoSpace.c)
 *     MiProtectEnclavePages @ 0x140519CE0 (MiProtectEnclavePages.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407004D4 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14070B50C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiWorkingSetIsContended(__int64 a1, int a2)
{
  unsigned __int8 v2; // al
  __int64 *v3; // rax
  __int64 v4; // r8
  _DWORD *MmInternal; // rdx
  unsigned int i; // edx

  v2 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( v2 != 5 && v2 > 4u )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v3 = &qword_140E37800;
  else
    v3 = (__int64 *)(a1 + 192);
  v4 = *v3;
  if ( a2 )
  {
    for ( i = 0; i < 4; ++i )
    {
      if ( (*(_DWORD *)(((unsigned __int64)i << 6) + v4) & 0x40000000) != 0 )
        return 1LL;
    }
    return 0LL;
  }
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
    LODWORD(MmInternal) = MmInternal[81];
  return (*(_DWORD *)(((unsigned __int64)(unsigned int)MmInternal << 6) + v4) & 0x40000000) != 0;
}
