/*
 * XREFs of ExAllocatePoolWithTag @ 0x140C10340
 * Callers:
 *     SepAdtMarshallAuditRecord @ 0x140215680 (SepAdtMarshallAuditRecord.c)
 *     CcAllocateInitializeBcb @ 0x140260530 (CcAllocateInitializeBcb.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     CcInitializeVolumeCacheMap @ 0x14038538C (CcInitializeVolumeCacheMap.c)
 *     CcFindBitmapRangeToDirty @ 0x14039DD20 (CcFindBitmapRangeToDirty.c)
 *     CcAllocateInitializeMbcb @ 0x14039EB78 (CcAllocateInitializeMbcb.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403B5030 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403B58C0 (FsRtlAddEntry.c)
 *     CcExtendVacbArray @ 0x1403B68EC (CcExtendVacbArray.c)
 *     CcDeferWrite @ 0x1403E0210 (CcDeferWrite.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E1FBC (CcCreatePrivateVolumeCacheMap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x1403E3550 (CcInitializePrivateVolumeCacheMap.c)
 *     FsRtlTruncateBaseMcb @ 0x14041CD60 (FsRtlTruncateBaseMcb.c)
 *     CBufferAllocate @ 0x14045A5C8 (CBufferAllocate.c)
 *     ExAllocatePoolZero @ 0x1404681B0 (ExAllocatePoolZero.c)
 *     CcPostVolumeTelemetry @ 0x14049BF90 (CcPostVolumeTelemetry.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404D4D34 (FsRtlpOplockSendModernAppTermination.c)
 *     CcAllocateInitializeVacbArray @ 0x1404D943C (CcAllocateInitializeVacbArray.c)
 *     CcUpdateDynamicRegistrySettings @ 0x1404DB1C0 (CcUpdateDynamicRegistrySettings.c)
 *     CcRegisterExternalCache @ 0x1405B1060 (CcRegisterExternalCache.c)
 *     CcRegisterExternalCacheEx @ 0x1405B1160 (CcRegisterExternalCacheEx.c)
 *     CcSetupWatchForRegistryChanges @ 0x1405B1944 (CcSetupWatchForRegistryChanges.c)
 *     CcCreatePartition @ 0x1405B2188 (CcCreatePartition.c)
 *     CcInitializePartition @ 0x1405B285C (CcInitializePartition.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x1405B3204 (CcQueueAsyncGetDeviceGuid.c)
 *     FsRtlAllocateAePushLock @ 0x1405B5810 (FsRtlAllocateAePushLock.c)
 *     FsRtlAllocatePool @ 0x1405B5DD0 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x1405B5E60 (FsRtlAllocatePoolWithTag.c)
 *     CcInitializeProcessor @ 0x14078A07C (CcInitializeProcessor.c)
 *     CcAllocateObcb @ 0x14078A170 (CcAllocateObcb.c)
 *     DbgkCaptureLiveDump @ 0x14078B088 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14078B7A4 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpTriageDumpInitialize @ 0x14078C950 (DbgkpTriageDumpInitialize.c)
 *     FsRtlpOplockGetAckTimeoutOverride @ 0x14078EE80 (FsRtlpOplockGetAckTimeoutOverride.c)
 *     RawQueryFileSystemInformation @ 0x14080012C (RawQueryFileSystemInformation.c)
 *     SepCaptureAuditPolicy @ 0x140813690 (SepCaptureAuditPolicy.c)
 *     SddlpReAlloc @ 0x1408186C4 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x14081874C (SddlpUuidToString.c)
 *     ExRegisterHost @ 0x140840A68 (ExRegisterHost.c)
 *     AslPathWildcardFindFirst @ 0x140889920 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140889EE8 (AslPathWildcardFindNext.c)
 *     CreateTlgAggregateSession @ 0x1408A020C (CreateTlgAggregateSession.c)
 *     LkmdTelCreateReport @ 0x1408AB660 (LkmdTelCreateReport.c)
 *     SeCaptureSid @ 0x1408E9720 (SeCaptureSid.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     SeCaptureSecurityDescriptor @ 0x1409263C0 (SeCaptureSecurityDescriptor.c)
 *     ObpAllocateObject @ 0x1409344A0 (ObpAllocateObject.c)
 *     VrpDestroyNamespaceNode @ 0x140977AF4 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x140977CF4 (VrpAddNamespaceNodeToList.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1409E1060 (FsRtlFindInTunnelCacheEx.c)
 *     SeCaptureAcl @ 0x1409F4CD0 (SeCaptureAcl.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x140A12C50 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 *     RawInitializeVcb @ 0x140A36190 (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140A362F0 (ExAllocateCacheAwareRundownProtection.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140A43158 (SeCaptureLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140A44CF8 (SeCaptureSidAndAttributesArray.c)
 *     SddlpAlloc @ 0x140A62788 (SddlpAlloc.c)
 *     CcCreateVacbArray @ 0x140A814E8 (CcCreateVacbArray.c)
 *     VerifierExAllocatePoolWithTag @ 0x140C2FB90 (VerifierExAllocatePoolWithTag.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x140C37B20 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     CcInitializeVacbs @ 0x140CB5AFC (CcInitializeVacbs.c)
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
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
