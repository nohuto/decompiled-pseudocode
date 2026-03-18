/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0
 * Callers:
 *     MmBuildMdlForNonPagedPool @ 0x14024C4E0 (MmBuildMdlForNonPagedPool.c)
 *     MiGetVirtualAddressState @ 0x14024D274 (MiGetVirtualAddressState.c)
 *     MiMappingHasIoReferences @ 0x14024DE74 (MiMappingHasIoReferences.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140282A34 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MmProtectMdlSystemAddress @ 0x14030FA10 (MmProtectMdlSystemAddress.c)
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     MiDecrementCloneBlock @ 0x14036A250 (MiDecrementCloneBlock.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiAddTriageDumpPtes @ 0x14044A7A4 (MiAddTriageDumpPtes.c)
 *     MmSetPageProtection @ 0x1405096F0 (MmSetPageProtection.c)
 *     MmProtectDriverSection @ 0x1406E6130 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 *     MiPfnRangeIsZero @ 0x1406E9BA0 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiBackSystemImageWithPagefile @ 0x140864164 (MiBackSystemImageWithPagefile.c)
 *     MiImagePagable @ 0x140864360 (MiImagePagable.c)
 *     MiPrepareDriverPatchState @ 0x140864420 (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14086E384 (MiApplyHotPatchToLoadedDriver.c)
 *     MiInitializeShadowPageTable @ 0x1408755C4 (MiInitializeShadowPageTable.c)
 *     MmAllocateIsrStack @ 0x140875DEC (MmAllocateIsrStack.c)
 *     MiProtectSystemImage @ 0x140A7935C (MiProtectSystemImage.c)
 *     MmLockPagableSectionByHandle @ 0x140A9C420 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140ABB180 (MmLockPagableDataSection.c)
 *     MiUnlockDriverCode @ 0x140AC7FD8 (MiUnlockDriverCode.c)
 *     MiHandleDriverNonPagedSections @ 0x140AC8ED0 (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x140AC90AC (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     MmResetDriverPaging @ 0x140AC9400 (MmResetDriverPaging.c)
 *     MiDisablePagingOfDriver @ 0x140AC94F8 (MiDisablePagingOfDriver.c)
 *     MmPageEntireDriver @ 0x140AC9AA0 (MmPageEntireDriver.c)
 *     MmChangeImageProtection @ 0x140AD5D10 (MmChangeImageProtection.c)
 *     MiUpdateForkMaps @ 0x140AF443C (MiUpdateForkMaps.c)
 *     MiProtectKernelCfgData @ 0x140CF2570 (MiProtectKernelCfgData.c)
 *     MiInitializeDriverPtes @ 0x140CF46C4 (MiInitializeDriverPtes.c)
 *     MiInitializeNonPagedPool @ 0x140CF9BA8 (MiInitializeNonPagedPool.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140CFA76C (MiApplyImportOptimizationToBootDriver.c)
 *     MiCheckLargePageOk @ 0x140CFAE64 (MiCheckLargePageOk.c)
 *     MiHandleBootImage @ 0x140CFFFDC (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140D002A4 (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeSystemImageRegion @ 0x140D00924 (MiInitializeSystemImageRegion.c)
 *     MiReloadBootLoadedDrivers @ 0x140D00CF0 (MiReloadBootLoadedDrivers.c)
 *     MmDiscardDriverSection @ 0x140D01280 (MmDiscardDriverSection.c)
 *     MiFreeBootDriverPages @ 0x140D0AE50 (MiFreeBootDriverPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  __int64 v4; // rax
  __int64 v6; // rcx
  _KPROCESS *Process; // r11
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-30h]
  unsigned __int64 v11; // [rsp+8h] [rbp-28h]
  unsigned __int64 v12; // [rsp+10h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-18h]
  __int64 v14; // [rsp+20h] [rbp-10h]

  v1 = 4;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v10 + v2--);
    --v1;
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v6 = *(_QWORD *)v3;
      if ( (v4 & 1) == 0 )
        return 0LL;
      if ( ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v9 = *(_QWORD *)(KernelWaitTime + 8 * ((v3 >> 3) & 0x1FF));
            if ( (v9 & 0x20) != 0 )
              LOBYTE(v6) = v4 | 0x20;
            LOBYTE(v4) = v6 | 0x42;
            if ( (v9 & 0x42) == 0 )
              LOBYTE(v4) = v6;
          }
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0LL;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( v2 == 1 )
      return 0LL;
  }
  return v1;
}
