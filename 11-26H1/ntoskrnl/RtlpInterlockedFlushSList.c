/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1407358E0
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A63BC (MiSystemPeriodicTick.c)
 *     RtlpHpVsContextCompact @ 0x140349C64 (RtlpHpVsContextCompact.c)
 *     RtlpDynamicLookasideFlush @ 0x140349D28 (RtlpDynamicLookasideFlush.c)
 *     RtlpHpVsContextFree @ 0x140354D90 (RtlpHpVsContextFree.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403E9E98 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDrainZeroLookasides @ 0x140457D20 (MiDrainZeroLookasides.c)
 *     EtwpCancelPendingApcs @ 0x140460E00 (EtwpCancelPendingApcs.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140484930 (EtwpCovSampCaptureQueueDpc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14049AE18 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     PfFbBufferListFlushStandby @ 0x1404A5A18 (PfFbBufferListFlushStandby.c)
 *     MiStoreDrainWriteSupports @ 0x1404A7674 (MiStoreDrainWriteSupports.c)
 *     MiFreePageFileHashPfns @ 0x1404AC10C (MiFreePageFileHashPfns.c)
 *     ?SmNotifyWriteBatchComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1404AD1B0 (-SmNotifyWriteBatchComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpFlushGeneralLookaside @ 0x1404B6384 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1404B64B0 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x1404CC738 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     EtwpFreeApcPool @ 0x1404D2DE4 (EtwpFreeApcPool.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404F5510 (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x1404FCC9C (MiInsertPteTracker.c)
 *     KiFreeTemporaryStacks @ 0x1405F3160 (KiFreeTemporaryStacks.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406CCA80 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExpPlProcessNotifications @ 0x1406D0BE0 (ExpPlProcessNotifications.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140704108 (MiRemoveNonIdealCachedStacks.c)
 *     ObpInitStackAndObjectTables @ 0x1407C7C48 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1407C85E8 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 *     SmHwAcceleratorPartitionCtxCleanup @ 0x1408219D8 (SmHwAcceleratorPartitionCtxCleanup.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140836EB0 (EtwpCovSampCaptureWorkerThread.c)
 *     CmUnRegisterCallback @ 0x1408568E0 (CmUnRegisterCallback.c)
 *     PfpFlushEventBuffers @ 0x1409F12C0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1409F13D0 (PfpFlushBuffers.c)
 *     EtwpFreeStackCache @ 0x140AC020C (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140B600D8 (EtwpCovSampCaptureFreeLookasides.c)
 *     PfTAccessTracingCleanup @ 0x140BFEDFC (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140C3E740 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
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
