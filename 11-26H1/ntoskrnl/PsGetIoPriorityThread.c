/*
 * XREFs of PsGetIoPriorityThread @ 0x1403750A0
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140204BFC (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     FsRtlpWaitForIoAtEof @ 0x140205058 (FsRtlpWaitForIoAtEof.c)
 *     ExpApplyPrewaitBoost @ 0x140205688 (ExpApplyPrewaitBoost.c)
 *     ExpApplyPriorityBoost @ 0x14020570C (ExpApplyPriorityBoost.c)
 *     CcScheduleReadAheadNuma @ 0x14021D0F8 (CcScheduleReadAheadNuma.c)
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026E664 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 *     ?KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z @ 0x14026F458 (-KiAbTryIncrementIoWaiterCounts@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@0@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140281140 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 *     MiFinishMdlForMappedFileFault @ 0x14036E910 (MiFinishMdlForMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiInitializePageFileInPageSupport @ 0x1403741B8 (MiInitializePageFileInPageSupport.c)
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
 *     PfSnLogPageFault @ 0x140374EF0 (PfSnLogPageFault.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BF0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     MiIssueFlowThroughFault @ 0x14038B1F8 (MiIssueFlowThroughFault.c)
 *     MiInitializeFlushPacket @ 0x14038CD08 (MiInitializeFlushPacket.c)
 *     ExpWorkerThread @ 0x1403F5680 (ExpWorkerThread.c)
 *     EtwpTraceThreadRundown @ 0x140412620 (EtwpTraceThreadRundown.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404B4190 (IopBuildAsynchronousFsdRequest.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404F13AC (CcBoostLowPriorityWorkerThread.c)
 *     NtSetInformationVirtualMemory @ 0x1408F18A0 (NtSetInformationVirtualMemory.c)
 *     PfSnBeginScenario @ 0x14096F3B8 (PfSnBeginScenario.c)
 *     MiLogRelocationRva @ 0x1409CC718 (MiLogRelocationRva.c)
 *     EtwTraceThread @ 0x140A045B0 (EtwTraceThread.c)
 *     MmPrefetchVirtualAddresses @ 0x140A4E9F0 (MmPrefetchVirtualAddresses.c)
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
