/*
 * XREFs of PsGetIoPriorityThread @ 0x140376E50
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140204CDC (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     FsRtlpWaitForIoAtEof @ 0x140205138 (FsRtlpWaitForIoAtEof.c)
 *     ExpApplyPrewaitBoost @ 0x140205768 (ExpApplyPrewaitBoost.c)
 *     ExpApplyPriorityBoost @ 0x1402057EC (ExpApplyPriorityBoost.c)
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026DBD4 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 *     ?KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z @ 0x14026E9C8 (-KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402806B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403706B0 (MiFinishMdlForMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiInitializePageFileInPageSupport @ 0x140375F68 (MiInitializePageFileInPageSupport.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 *     PfSnLogPageFault @ 0x140376CA0 (PfSnLogPageFault.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     MiIssueFlowThroughFault @ 0x14038CFA8 (MiIssueFlowThroughFault.c)
 *     MiInitializeFlushPacket @ 0x14038EAB4 (MiInitializeFlushPacket.c)
 *     ExpWorkerThread @ 0x1403EF030 (ExpWorkerThread.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404AD760 (IopBuildAsynchronousFsdRequest.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404EA98C (CcBoostLowPriorityWorkerThread.c)
 *     EtwpTraceThreadRundown @ 0x14051ED18 (EtwpTraceThreadRundown.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 *     MiLogRelocationRva @ 0x14099D6F8 (MiLogRelocationRva.c)
 *     PfSnBeginScenario @ 0x1409D16A0 (PfSnBeginScenario.c)
 *     MmPrefetchVirtualAddresses @ 0x140A57CE0 (MmPrefetchVirtualAddresses.c)
 *     EtwTraceThread @ 0x140A7C440 (EtwTraceThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // edx

  result = (*(_DWORD *)(a1 + 1440) >> 9) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1084);
    if ( (int)result >= v3 )
      result = (unsigned int)v3;
  }
  if ( (int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1504) )
      return 2LL;
  }
  return result;
}
