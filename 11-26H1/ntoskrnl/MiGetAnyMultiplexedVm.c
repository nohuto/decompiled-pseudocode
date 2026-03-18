/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x140457870
 * Callers:
 *     MiSystemVaTypeToVm @ 0x140285CBC (MiSystemVaTypeToVm.c)
 *     MiDecommitSystemPageTables @ 0x1402A46B8 (MiDecommitSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A515C (MiMakeZeroedPageTablesEx.c)
 *     MiCountSharedPages @ 0x1402D0E10 (MiCountSharedPages.c)
 *     MiQueryAddressState @ 0x140305180 (MiQueryAddressState.c)
 *     MiGetNextPageTable @ 0x140318050 (MiGetNextPageTable.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     MiTrimAllSystemPagableMemory @ 0x140457728 (MiTrimAllSystemPagableMemory.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiMapMdlWithLargePages @ 0x140502900 (MiMapMdlWithLargePages.c)
 *     MiCapturePfnVm @ 0x1405136D0 (MiCapturePfnVm.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiDeleteBootRange @ 0x1406E35D0 (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x1406E3A98 (MiPageBootRegistry.c)
 *     MmProtectDriverSection @ 0x1406E6130 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 *     MiInitializeDynamicBitmap @ 0x1406F50F4 (MiInitializeDynamicBitmap.c)
 *     MiAddRangeToCrashDump @ 0x1406F61BC (MiAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406F6C48 (MmRemoveSystemCacheFromDump.c)
 *     MiLockPatchIatForDV @ 0x1406FAF50 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x1406FCF64 (MmWriteSystemImageTracepoint.c)
 *     MiCalibrateTbFlush @ 0x14070DF04 (MiCalibrateTbFlush.c)
 *     MiUnloadSystemImageSoftWsles @ 0x14070FD78 (MiUnloadSystemImageSoftWsles.c)
 *     MiProtectLargeKernelHalRange @ 0x1408644C0 (MiProtectLargeKernelHalRange.c)
 *     MmMapLockedRestartPages @ 0x140864770 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x140864830 (MmUnmapLockedRestartPages.c)
 *     MiLockAndMapEntireDriver @ 0x14086D784 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 *     MmLogSystemShareablePfnInfo @ 0x140877454 (MmLogSystemShareablePfnInfo.c)
 *     HvTrimHive @ 0x1408B8958 (HvTrimHive.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409C9790 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiGetCcAccessLog @ 0x140A52AF4 (MiGetCcAccessLog.c)
 *     MiMapSystemImage @ 0x140B20834 (MiMapSystemImage.c)
 *     MiConvertHiberPhasePages @ 0x140C00AE4 (MiConvertHiberPhasePages.c)
 *     MiMarkKernelPageTablePages @ 0x140C00C48 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140C00CD0 (MiMarkNonPagedHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140C01120 (MmMarkHiberPhase.c)
 *     MiAddLoaderHalIoMappings @ 0x140CF1474 (MiAddLoaderHalIoMappings.c)
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 *     MiMapDummyPages @ 0x140CF38D0 (MiMapDummyPages.c)
 *     MiMarkLargePageMappings @ 0x140CF3A74 (MiMarkLargePageMappings.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 *     MiCreateInitialSystemWsles @ 0x140CF893C (MiCreateInitialSystemWsles.c)
 *     MiBuildPagedPool @ 0x140CF9A9C (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140CF9BA8 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140CF9F28 (MiBuildSystemDataViews.c)
 *     MmReapplyBootPatchImports @ 0x140CFBA34 (MmReapplyBootPatchImports.c)
 *     MiInitializeSystemPtes @ 0x140CFF020 (MiInitializeSystemPtes.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetAnyMultiplexedVm(int a1)
{
  __int64 v1; // rax
  char *v2; // rcx

  if ( a1 >= 1 )
  {
    v1 = 320LL * a1;
    v2 = (char *)&unk_140E36CC0;
  }
  else
  {
    v1 = (__int64)a1 << 9;
    v2 = (char *)&unk_140E3D500;
  }
  return &v2[v1];
}
