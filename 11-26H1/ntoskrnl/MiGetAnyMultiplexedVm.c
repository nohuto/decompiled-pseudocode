/*
 * XREFs of MiGetAnyMultiplexedVm @ 0x14044F0E0
 * Callers:
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiDecommitSystemPageTables @ 0x1402A3C08 (MiDecommitSystemPageTables.c)
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiTrimAllSystemPagableMemory @ 0x14044EF98 (MiTrimAllSystemPagableMemory.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MiCapturePfnVm @ 0x14050D140 (MiCapturePfnVm.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MmProtectDriverSection @ 0x1406EADE0 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406FB8B8 (MmRemoveSystemCacheFromDump.c)
 *     MiLockPatchIatForDV @ 0x1406FFC20 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x140701C34 (MmWriteSystemImageTracepoint.c)
 *     MiCalibrateTbFlush @ 0x140712BB4 (MiCalibrateTbFlush.c)
 *     MiUnloadSystemImageSoftWsles @ 0x140714A74 (MiUnloadSystemImageSoftWsles.c)
 *     MiProtectLargeKernelHalRange @ 0x14086A8A0 (MiProtectLargeKernelHalRange.c)
 *     MmMapLockedRestartPages @ 0x14086AB50 (MmMapLockedRestartPages.c)
 *     MmUnmapLockedRestartPages @ 0x14086AC10 (MmUnmapLockedRestartPages.c)
 *     MiLockAndMapEntireDriver @ 0x140873B54 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MmLogSystemShareablePfnInfo @ 0x14087D834 (MmLogSystemShareablePfnInfo.c)
 *     HvTrimHive @ 0x1408BEF28 (HvTrimHive.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14099A770 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiGetCcAccessLog @ 0x140A5BDE4 (MiGetCcAccessLog.c)
 *     MiMapSystemImage @ 0x140B22C34 (MiMapSystemImage.c)
 *     MiConvertHiberPhasePages @ 0x140C06CF4 (MiConvertHiberPhasePages.c)
 *     MiMarkKernelPageTablePages @ 0x140C06E58 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140C06EE0 (MiMarkNonPagedHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140C07330 (MmMarkHiberPhase.c)
 *     MiAddLoaderHalIoMappings @ 0x140CF77EC (MiAddLoaderHalIoMappings.c)
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 *     MiMapDummyPages @ 0x140CF9C50 (MiMapDummyPages.c)
 *     MiMarkLargePageMappings @ 0x140CF9DF4 (MiMarkLargePageMappings.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 *     MiCreateInitialSystemWsles @ 0x140CFECBC (MiCreateInitialSystemWsles.c)
 *     MiBuildPagedPool @ 0x140CFFE1C (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140CFFF28 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140D002A8 (MiBuildSystemDataViews.c)
 *     MmReapplyBootPatchImports @ 0x140D01DB4 (MmReapplyBootPatchImports.c)
 *     MiInitializeSystemPtes @ 0x140D053C0 (MiInitializeSystemPtes.c)
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
    v2 = (char *)&unk_140E36E40;
  }
  else
  {
    v1 = (__int64)a1 << 9;
    v2 = (char *)&unk_140E3D680;
  }
  return &v2[v1];
}
