/*
 * XREFs of RtlpInterlockedFlushSList @ 0x140730D10
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A6FA0 (MiSystemPeriodicTick.c)
 *     RtlpHpVsContextCompact @ 0x140347BE4 (RtlpHpVsContextCompact.c)
 *     RtlpDynamicLookasideFlush @ 0x140347CA8 (RtlpDynamicLookasideFlush.c)
 *     RtlpHpVsContextFree @ 0x140352D10 (RtlpHpVsContextFree.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403F04C8 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDrainZeroLookasides @ 0x14045E180 (MiDrainZeroLookasides.c)
 *     EtwpCancelPendingApcs @ 0x1404676B0 (EtwpCancelPendingApcs.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x14048ADF0 (EtwpCovSampCaptureQueueDpc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1404A12E8 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     PfFbBufferListFlushStandby @ 0x1404AC388 (PfFbBufferListFlushStandby.c)
 *     MiStoreDrainWriteSupports @ 0x1404ADFE4 (MiStoreDrainWriteSupports.c)
 *     MiFreePageFileHashPfns @ 0x1404B2A90 (MiFreePageFileHashPfns.c)
 *     ?SmNotifyWriteBatchComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1404B3BE4 (-SmNotifyWriteBatchComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpFlushGeneralLookaside @ 0x1404BCBA4 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1404BCCD0 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x1404D2EC8 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     EtwpFreeApcPool @ 0x1404D9704 (EtwpFreeApcPool.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404FBFC4 (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x1405033CC (MiInsertPteTracker.c)
 *     KiFreeTemporaryStacks @ 0x1405F07F0 (KiFreeTemporaryStacks.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406C8AA0 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExpPlProcessNotifications @ 0x1406CCBB0 (ExpPlProcessNotifications.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406FF438 (MiRemoveNonIdealCachedStacks.c)
 *     ObpInitStackAndObjectTables @ 0x1407C4BE8 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C5588 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1407C6254 (PfTCleanup.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x14081B7C8 (SmHwAcceleratorPartitionCtxCleanup.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140830C70 (EtwpCovSampCaptureWorkerThread.c)
 *     CmUnRegisterCallback @ 0x1408505D0 (CmUnRegisterCallback.c)
 *     PfpFlushEventBuffers @ 0x140A05AD0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140A05BE0 (PfpFlushBuffers.c)
 *     EtwpFreeStackCache @ 0x140ABDC1C (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140B5CF58 (EtwpCovSampCaptureFreeLookasides.c)
 *     PfTAccessTracingCleanup @ 0x140BF8DFC (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140C38730 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  union _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}
