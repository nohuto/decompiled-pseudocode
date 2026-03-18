/*
 * XREFs of KeLeaveGuardedRegion @ 0x14027DB10
 * Callers:
 *     EtwTracePageFault @ 0x140215FC0 (EtwTracePageFault.c)
 *     RtlpHpVsContextAllocate @ 0x140249DB0 (RtlpHpVsContextAllocate.c)
 *     ExpCleanupAutoExpandPushLock @ 0x14027E2C0 (ExpCleanupAutoExpandPushLock.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x14034F848 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x1403512D8 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140351604 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapUnlock @ 0x140351A4C (RtlpCSparseBitmapUnlock.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x1403523D0 (RtlCSparseBitmapLeaveLockingRegion.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x14038F290 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140390230 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1403955D8 (PopFxDeviceCriticalRegionLeave.c)
 *     PopFxProcessWorkPool @ 0x140396268 (PopFxProcessWorkPool.c)
 *     MmWaitForCacheManagerPrefetch @ 0x14039F6A8 (MmWaitForCacheManagerPrefetch.c)
 *     KiReleaseDpcCorralLock @ 0x1403C25D0 (KiReleaseDpcCorralLock.c)
 *     RtlStackDbStackAdd @ 0x140443078 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x140443D78 (RtlpStackDbSegmentFindOrCreate.c)
 *     ExSaFree @ 0x1404638EC (ExSaFree.c)
 *     ExSaAllocate @ 0x1404993B0 (ExSaAllocate.c)
 *     MiProcessWsInSwapRanges @ 0x1404ACA44 (MiProcessWsInSwapRanges.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x1404DF360 (RtlpHpAcquireReleaseLockExclusive.c)
 *     KiExecuteDpc @ 0x1405FAE40 (KiExecuteDpc.c)
 *     RtlStackDbStackRemove @ 0x1406233C0 (RtlStackDbStackRemove.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x1406236B0 (RtlpStackDbSegmentRemoveRef.c)
 *     DifKeLeaveGuardedRegionWrapper @ 0x1406620C0 (DifKeLeaveGuardedRegionWrapper.c)
 *     ObpPushRefDerefInfo @ 0x1407701CC (ObpPushRefDerefInfo.c)
 *     ObpRegisterObject @ 0x140778F98 (ObpRegisterObject.c)
 *     ObpDeregisterObject @ 0x140779D4C (ObpDeregisterObject.c)
 *     KeInsertCallbackRegistrationEntry @ 0x1407B8C88 (KeInsertCallbackRegistrationEntry.c)
 *     KeRemoveCallbackRegistrationEntry @ 0x1407B9030 (KeRemoveCallbackRegistrationEntry.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407C3610 (ObIsDosDeviceLocallyMapped.c)
 *     ObDisableEtwReferenceTrace @ 0x1407C40E4 (ObDisableEtwReferenceTrace.c)
 *     ObEnableEtwReferenceTrace @ 0x1407C4198 (ObEnableEtwReferenceTrace.c)
 *     ObQueryRefTraceInformationEx @ 0x1407C424C (ObQueryRefTraceInformationEx.c)
 *     ObpPushStackInfoQueue @ 0x1407C5020 (ObpPushStackInfoQueue.c)
 *     ObpStartRuntimeStackTraceEx @ 0x1407C53D4 (ObpStartRuntimeStackTraceEx.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C5588 (ObpStopRuntimeStackTrace.c)
 *     PsTlsFree @ 0x1407FD0B0 (PsTlsFree.c)
 *     PspTlsAlloc @ 0x1407FD0E8 (PspTlsAlloc.c)
 *     sub_14088063C @ 0x14088063C (sub_14088063C.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x1409007F4 (ObDereferenceDeviceMap.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     ObCheckRefTraceProcess @ 0x140984928 (ObCheckRefTraceProcess.c)
 *     ObpCreateSymbolicLinkName @ 0x1409E185C (ObpCreateSymbolicLinkName.c)
 *     sub_1409EBC70 @ 0x1409EBC70 (sub_1409EBC70.c)
 *     sub_1409EBEA0 @ 0x1409EBEA0 (sub_1409EBEA0.c)
 *     sub_1409ECE3C @ 0x1409ECE3C (sub_1409ECE3C.c)
 *     sub_1409ED24C @ 0x1409ED24C (sub_1409ED24C.c)
 *     sub_1409ED3B8 @ 0x1409ED3B8 (sub_1409ED3B8.c)
 *     sub_1409ED5D0 @ 0x1409ED5D0 (sub_1409ED5D0.c)
 *     WbSetWowTrapFrame @ 0x1409EE100 (WbSetWowTrapFrame.c)
 *     sub_1409EE860 @ 0x1409EE860 (sub_1409EE860.c)
 *     sub_1409EEBF4 @ 0x1409EEBF4 (sub_1409EEBF4.c)
 *     sub_1409EEDBC @ 0x1409EEDBC (sub_1409EEDBC.c)
 *     sub_1409EEEFC @ 0x1409EEEFC (sub_1409EEEFC.c)
 *     sub_1409EF090 @ 0x1409EF090 (sub_1409EF090.c)
 *     sub_1409EF5F0 @ 0x1409EF5F0 (sub_1409EF5F0.c)
 *     sub_1409EF76C @ 0x1409EF76C (sub_1409EF76C.c)
 *     sub_1409EFC8C @ 0x1409EFC8C (sub_1409EFC8C.c)
 *     sub_1409EFD84 @ 0x1409EFD84 (sub_1409EFD84.c)
 *     sub_1409EFF2C @ 0x1409EFF2C (sub_1409EFF2C.c)
 *     sub_1409F02EC @ 0x1409F02EC (sub_1409F02EC.c)
 *     ObQueryDeviceMapInformation @ 0x140A181D0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A18420 (ObpReferenceCurrentDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x140A189CC (ObpSetCurrentProcessDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x140A18BC0 (ObpReferenceDeviceMapFastRef.c)
 *     ObpSetDeviceMap @ 0x140A18D3C (ObpSetDeviceMap.c)
 *     PsTlsSetValue @ 0x140A9B9D0 (PsTlsSetValue.c)
 *     KeCheckCallbackRegistrationsOnDriverUnload @ 0x140AC7C30 (KeCheckCallbackRegistrationsOnDriverUnload.c)
 *     ObClearProcessDeviceMap @ 0x140ADD8B8 (ObClearProcessDeviceMap.c)
 *     WbHeapExecutionUnloadModule @ 0x140AEDAC4 (WbHeapExecutionUnloadModule.c)
 *     ObpDeleteSymbolicLinkName @ 0x140B008CC (ObpDeleteSymbolicLinkName.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140B12C8C (WbInPlaceEncryptionUnloadModule.c)
 *     PsPicoWalkUserStack @ 0x140B4A448 (PsPicoWalkUserStack.c)
 *     ObQueryRefTraceInformation @ 0x140B5E750 (ObQueryRefTraceInformation.c)
 *     CreateMiniNtBootKey @ 0x140CA9D20 (CreateMiniNtBootKey.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 */

void KeLeaveGuardedRegion(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v1, v0, v2, v3);
  }
}
