/*
 * XREFs of ExAllocatePoolWithTag @ 0x140C16340
 * Callers:
 *     SepAdtMarshallAuditRecord @ 0x1402159B0 (SepAdtMarshallAuditRecord.c)
 *     CcAllocateInitializeBcb @ 0x140219DA4 (CcAllocateInitializeBcb.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcInitializeVolumeCacheMap @ 0x14038713C (CcInitializeVolumeCacheMap.c)
 *     CcFindBitmapRangeToDirty @ 0x14039FA80 (CcFindBitmapRangeToDirty.c)
 *     CcAllocateInitializeMbcb @ 0x1403A08D8 (CcAllocateInitializeMbcb.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403BEF30 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403BF7C0 (FsRtlAddEntry.c)
 *     CcExtendVacbArray @ 0x1403C07EC (CcExtendVacbArray.c)
 *     CcDeferWrite @ 0x1403E3400 (CcDeferWrite.c)
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E51AC (CcCreatePrivateVolumeCacheMap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403E6740 (CcInitializePrivateVolumeCacheMap.c)
 *     FsRtlTruncateBaseMcb @ 0x1404145B0 (FsRtlTruncateBaseMcb.c)
 *     CBufferAllocate @ 0x140451E48 (CBufferAllocate.c)
 *     ExAllocatePoolZero @ 0x1404617F0 (ExAllocatePoolZero.c)
 *     CcPostVolumeTelemetry @ 0x140495AE0 (CcPostVolumeTelemetry.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404CE5A4 (FsRtlpOplockSendModernAppTermination.c)
 *     CcAllocateInitializeVacbArray @ 0x1404D2B1C (CcAllocateInitializeVacbArray.c)
 *     CcUpdateDynamicRegistrySettings @ 0x1404D48A0 (CcUpdateDynamicRegistrySettings.c)
 *     CcRegisterExternalCache @ 0x1405B3870 (CcRegisterExternalCache.c)
 *     CcRegisterExternalCacheEx @ 0x1405B3970 (CcRegisterExternalCacheEx.c)
 *     CcSetupWatchForRegistryChanges @ 0x1405B4154 (CcSetupWatchForRegistryChanges.c)
 *     CcCreatePartition @ 0x1405B4998 (CcCreatePartition.c)
 *     CcInitializePartition @ 0x1405B506C (CcInitializePartition.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x1405B5A14 (CcQueueAsyncGetDeviceGuid.c)
 *     FsRtlAllocateAePushLock @ 0x1405B8020 (FsRtlAllocateAePushLock.c)
 *     FsRtlAllocatePool @ 0x1405B85E0 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x1405B8670 (FsRtlAllocatePoolWithTag.c)
 *     CcInitializeProcessor @ 0x14078CBAC (CcInitializeProcessor.c)
 *     CcAllocateObcb @ 0x14078CCA0 (CcAllocateObcb.c)
 *     DbgkCaptureLiveDump @ 0x14078DBB8 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14078E2D4 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpTriageDumpInitialize @ 0x14078F480 (DbgkpTriageDumpInitialize.c)
 *     FsRtlpOplockGetAckTimeoutOverride @ 0x1407919B0 (FsRtlpOplockGetAckTimeoutOverride.c)
 *     RawQueryFileSystemInformation @ 0x140805BB0 (RawQueryFileSystemInformation.c)
 *     SepCaptureAuditPolicy @ 0x1408194F0 (SepCaptureAuditPolicy.c)
 *     SddlpReAlloc @ 0x14081E8D4 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x14081E95C (SddlpUuidToString.c)
 *     ExRegisterHost @ 0x140846CA8 (ExRegisterHost.c)
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408902E4 (AslPathWildcardFindNext.c)
 *     CreateTlgAggregateSession @ 0x1408A661C (CreateTlgAggregateSession.c)
 *     LkmdTelCreateReport @ 0x1408B1AA4 (LkmdTelCreateReport.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     ObpAllocateObject @ 0x140910050 (ObpAllocateObject.c)
 *     RawInitializeVcb @ 0x14091AF1C (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14091B070 (ExAllocateCacheAwareRundownProtection.c)
 *     VrpDestroyNamespaceNode @ 0x140939B04 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x140939D04 (VrpAddNamespaceNodeToList.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1409DE060 (FsRtlFindInTunnelCacheEx.c)
 *     SeCaptureAcl @ 0x1409E0A20 (SeCaptureAcl.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1409E2108 (SeCaptureLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x140A11E40 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A4B46C (VrpHandleIoctlInitializeJobForVreg.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 *     CcCreateVacbArray @ 0x140A87358 (CcCreateVacbArray.c)
 *     VerifierExAllocatePoolWithTag @ 0x140C35BA0 (VerifierExAllocatePoolWithTag.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x140C3DB30 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     CcInitializeVacbs @ 0x140CBBB3C (CcInitializeVacbs.c)
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG_PTR v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  PVOID result; // rax

  v5 = 256LL;
  if ( (PoolType & 1) == 0 )
  {
    v5 = 128LL;
    if ( (PoolType & 0x200) != 0 )
      v5 = 64LL;
  }
  if ( PoolType < NonPagedPool )
    v5 = 64LL;
  v6 = v5 | 4;
  if ( (PoolType & 0x20) == 0 )
    v6 = v5;
  v7 = v6 | 2;
  if ( (PoolType & 0x400) != 0 )
    v7 = v6;
  if ( (PoolType & 0xDE) != 0 )
  {
    v8 = v7 | 8;
    if ( (PoolType & 4) == 0 )
      v8 = v7;
    v9 = v8 | 0x200;
    if ( (PoolType & 0x80u) == 0 )
      v9 = v8;
    v7 = v9 | 0x400;
    if ( (PoolType & 0x40) == 0 )
      v7 = v9;
    if ( (PoolType & 0x10) != 0 )
      v7 |= 0x20uLL;
  }
  result = (PVOID)ExAllocatePool2(v7);
  if ( !result && (PoolType & 2) != 0 )
    KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  return result;
}
