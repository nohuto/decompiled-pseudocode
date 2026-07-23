/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x14024E230
 * Callers:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     MiMappingHasIoReferences @ 0x14024F7D4 (MiMappingHasIoReferences.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x140281FA4 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiAddTriageDumpPtes @ 0x1404428D4 (MiAddTriageDumpPtes.c)
 *     MmSetPageProtection @ 0x1405031A0 (MmSetPageProtection.c)
 *     MmProtectDriverSection @ 0x1406EADE0 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiBackSystemImageWithPagefile @ 0x14086A544 (MiBackSystemImageWithPagefile.c)
 *     MiImagePagable @ 0x14086A740 (MiImagePagable.c)
 *     MiPrepareDriverPatchState @ 0x14086A800 (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 *     MiInitializeShadowPageTable @ 0x14087B9A8 (MiInitializeShadowPageTable.c)
 *     MmAllocateIsrStack @ 0x14087C1D0 (MmAllocateIsrStack.c)
 *     MiProtectSystemImage @ 0x1409E4B80 (MiProtectSystemImage.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140ABC640 (MmLockPagableDataSection.c)
 *     MiUnlockDriverCode @ 0x140AC9BC8 (MiUnlockDriverCode.c)
 *     MiHandleDriverNonPagedSections @ 0x140ACAFE8 (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x140ACB1C4 (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MmResetDriverPaging @ 0x140ACB510 (MmResetDriverPaging.c)
 *     MiDisablePagingOfDriver @ 0x140ACB608 (MiDisablePagingOfDriver.c)
 *     MmPageEntireDriver @ 0x140ACBBB0 (MmPageEntireDriver.c)
 *     MmChangeImageProtection @ 0x140AD2CC0 (MmChangeImageProtection.c)
 *     MiUpdateForkMaps @ 0x140AF6AB0 (MiUpdateForkMaps.c)
 *     MiProtectKernelCfgData @ 0x140CF88F0 (MiProtectKernelCfgData.c)
 *     MiInitializeDriverPtes @ 0x140CFAA44 (MiInitializeDriverPtes.c)
 *     MiInitializeNonPagedPool @ 0x140CFFF28 (MiInitializeNonPagedPool.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140D00AEC (MiApplyImportOptimizationToBootDriver.c)
 *     MiCheckLargePageOk @ 0x140D011E4 (MiCheckLargePageOk.c)
 *     MiHandleBootImage @ 0x140D0637C (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140D06644 (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeSystemImageRegion @ 0x140D06CC4 (MiInitializeSystemImageRegion.c)
 *     MiReloadBootLoadedDrivers @ 0x140D07090 (MiReloadBootLoadedDrivers.c)
 *     MmDiscardDriverSection @ 0x140D07620 (MmDiscardDriverSection.c)
 *     MiFreeBootDriverPages @ 0x140D11120 (MiFreeBootDriverPages.c)
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
