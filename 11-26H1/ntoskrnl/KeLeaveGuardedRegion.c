/*
 * XREFs of KeLeaveGuardedRegion @ 0x14027D080
 * Callers:
 *     EtwTracePageFault @ 0x1402162F0 (EtwTracePageFault.c)
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     ExpCleanupAutoExpandPushLock @ 0x14027D830 (ExpCleanupAutoExpandPushLock.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1403518C8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x140353358 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140353684 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapUnlock @ 0x140353ACC (RtlpCSparseBitmapUnlock.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x140354454 (RtlCSparseBitmapLeaveLockingRegion.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140391040 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140391FE0 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x140397358 (PopFxDeviceCriticalRegionLeave.c)
 *     PopFxProcessWorkPool @ 0x140397FE8 (PopFxProcessWorkPool.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1403A1408 (MmWaitForCacheManagerPrefetch.c)
 *     KiReleaseDpcCorralLock @ 0x1403CC4D0 (KiReleaseDpcCorralLock.c)
 *     RtlStackDbStackAdd @ 0x14043BB88 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x14043C888 (RtlpStackDbSegmentFindOrCreate.c)
 *     ExSaFree @ 0x14045C8AC (ExSaFree.c)
 *     ExSaAllocate @ 0x140492F00 (ExSaAllocate.c)
 *     MiProcessWsInSwapRanges @ 0x1404A60D4 (MiProcessWsInSwapRanges.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x1404D8A40 (RtlpHpAcquireReleaseLockExclusive.c)
 *     KiExecuteDpc @ 0x1405FD860 (KiExecuteDpc.c)
 *     RtlStackDbStackRemove @ 0x140626410 (RtlStackDbStackRemove.c)
 *     RtlpStackDbSegmentRemoveRef @ 0x140626700 (RtlpStackDbSegmentRemoveRef.c)
 *     DifKeLeaveGuardedRegionWrapper @ 0x140665CA0 (DifKeLeaveGuardedRegionWrapper.c)
 *     ObpPushRefDerefInfo @ 0x1407731CC (ObpPushRefDerefInfo.c)
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     KeInsertCallbackRegistrationEntry @ 0x1407BBCE8 (KeInsertCallbackRegistrationEntry.c)
 *     KeRemoveCallbackRegistrationEntry @ 0x1407BC090 (KeRemoveCallbackRegistrationEntry.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1407C6670 (ObIsDosDeviceLocallyMapped.c)
 *     ObDisableEtwReferenceTrace @ 0x1407C7144 (ObDisableEtwReferenceTrace.c)
 *     ObEnableEtwReferenceTrace @ 0x1407C71F8 (ObEnableEtwReferenceTrace.c)
 *     ObQueryRefTraceInformationEx @ 0x1407C72AC (ObQueryRefTraceInformationEx.c)
 *     ObpPushStackInfoQueue @ 0x1407C8080 (ObpPushStackInfoQueue.c)
 *     ObpStartRuntimeStackTraceEx @ 0x1407C8434 (ObpStartRuntimeStackTraceEx.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C85E8 (ObpStopRuntimeStackTrace.c)
 *     PsTlsFree @ 0x140802AE0 (PsTlsFree.c)
 *     PspTlsAlloc @ 0x140802B18 (PspTlsAlloc.c)
 *     sub_140886A3C @ 0x140886A3C (sub_140886A3C.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x140930784 (ObDereferenceDeviceMap.c)
 *     ObCheckRefTraceProcess @ 0x140946938 (ObCheckRefTraceProcess.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     ObpCreateSymbolicLinkName @ 0x1409DE86C (ObpCreateSymbolicLinkName.c)
 *     sub_1409E8440 @ 0x1409E8440 (sub_1409E8440.c)
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 *     sub_1409E960C @ 0x1409E960C (sub_1409E960C.c)
 *     sub_1409E9A1C @ 0x1409E9A1C (sub_1409E9A1C.c)
 *     sub_1409E9B88 @ 0x1409E9B88 (sub_1409E9B88.c)
 *     sub_1409E9DA0 @ 0x1409E9DA0 (sub_1409E9DA0.c)
 *     WbSetWowTrapFrame @ 0x1409EA8D0 (WbSetWowTrapFrame.c)
 *     sub_1409EB030 @ 0x1409EB030 (sub_1409EB030.c)
 *     sub_1409EB3C4 @ 0x1409EB3C4 (sub_1409EB3C4.c)
 *     sub_1409EB58C @ 0x1409EB58C (sub_1409EB58C.c)
 *     sub_1409EB6CC @ 0x1409EB6CC (sub_1409EB6CC.c)
 *     sub_1409EB860 @ 0x1409EB860 (sub_1409EB860.c)
 *     sub_1409EBDC0 @ 0x1409EBDC0 (sub_1409EBDC0.c)
 *     sub_1409EBF3C @ 0x1409EBF3C (sub_1409EBF3C.c)
 *     sub_1409EC45C @ 0x1409EC45C (sub_1409EC45C.c)
 *     sub_1409EC554 @ 0x1409EC554 (sub_1409EC554.c)
 *     sub_1409EC6FC @ 0x1409EC6FC (sub_1409EC6FC.c)
 *     sub_1409ECABC @ 0x1409ECABC (sub_1409ECABC.c)
 *     ObQueryDeviceMapInformation @ 0x140A21800 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A21A50 (ObpReferenceCurrentDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x140A21FFC (ObpSetCurrentProcessDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x140A221F0 (ObpReferenceDeviceMapFastRef.c)
 *     ObpSetDeviceMap @ 0x140A2236C (ObpSetDeviceMap.c)
 *     PsTlsSetValue @ 0x140A9E5C0 (PsTlsSetValue.c)
 *     KeCheckCallbackRegistrationsOnDriverUnload @ 0x140AC9820 (KeCheckCallbackRegistrationsOnDriverUnload.c)
 *     ObClearProcessDeviceMap @ 0x140ADA628 (ObClearProcessDeviceMap.c)
 *     WbHeapExecutionUnloadModule @ 0x140AF0A5C (WbHeapExecutionUnloadModule.c)
 *     ObpDeleteSymbolicLinkName @ 0x140B025FC (ObpDeleteSymbolicLinkName.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140B14A0C (WbInPlaceEncryptionUnloadModule.c)
 *     PsPicoWalkUserStack @ 0x140B4C1D8 (PsPicoWalkUserStack.c)
 *     ObQueryRefTraceInformation @ 0x140B618D0 (ObQueryRefTraceInformation.c)
 *     CreateMiniNtBootKey @ 0x140CAFD20 (CreateMiniNtBootKey.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
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
    && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v1, v0, v2, v3);
  }
}
