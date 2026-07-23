/*
 * XREFs of MiWorkingSetIsContended @ 0x14031A300
 * Callers:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiQueryAddressSpan @ 0x1402E6FF0 (MiQueryAddressSpan.c)
 *     MiSharePagesYield @ 0x1402E9160 (MiSharePagesYield.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 *     MiProtectGoodCitizen @ 0x140313438 (MiProtectGoodCitizen.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiInsertViewOfPhysicalSection @ 0x140317984 (MiInsertViewOfPhysicalSection.c)
 *     MiWalkPtesForWriteWatchState @ 0x140319928 (MiWalkPtesForWriteWatchState.c)
 *     MiGetPageChainYield @ 0x14031A290 (MiGetPageChainYield.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x1403431A8 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     MiCommitEnclavePages @ 0x140343308 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiFillPoolCommitPageTable @ 0x140367040 (MiFillPoolCommitPageTable.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403684CC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E06A4 (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1404EE0D0 (MiVadRangeIsIoSpace.c)
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 *     MiQueryVaPhysicalContiguity @ 0x1407051A4 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1407101BC (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
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
    v3 = &qword_140E37980;
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
