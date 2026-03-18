/*
 * XREFs of KiQueryUnbiasedInterruptTime @ 0x140446880
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C5B0 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1403918A0 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     KiInitializeUserApc @ 0x140446248 (KiInitializeUserApc.c)
 *     CmpCompleteLazyWrite @ 0x1404D48EC (CmpCompleteLazyWrite.c)
 *     PsThawMultiProcess @ 0x14051967C (PsThawMultiProcess.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x140613304 (PopRecordPoIrpBlackboxInformation.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14063D5EC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     PsFreezeProcess @ 0x14077B540 (PsFreezeProcess.c)
 *     FsRtlpOplockPerfPrepareToSendData @ 0x14078F2FC (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSummarizeData @ 0x14078F3AC (FsRtlpOplockPerfSummarizeData.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopEtEnergyTrackerCreate @ 0x1407DBF90 (PopEtEnergyTrackerCreate.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     sub_140838310 @ 0x140838310 (sub_140838310.c)
 *     ?ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x140846D5C (-ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 *     CmpInitializeDelayedCloseTable @ 0x14085B75C (CmpInitializeDelayedCloseTable.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     ObpProcessRemoveObjectQueue @ 0x140A59D90 (ObpProcessRemoveObjectQueue.c)
 *     PopBlackBoxDirectAccess @ 0x140B58654 (PopBlackBoxDirectAccess.c)
 *     PopEtEnergyTrackerQuery @ 0x140B66F4C (PopEtEnergyTrackerQuery.c)
 *     PopBlackBoxUpdate @ 0x140B71EFC (PopBlackBoxUpdate.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140BFD590 (PopBroadcastBlameBugcheckCallback.c)
 *     FsRtlInitializeOplockPerf @ 0x140CB90F0 (FsRtlInitializeOplockPerf.c)
 *     PopDiagInitialize @ 0x140CD1950 (PopDiagInitialize.c)
 *     PspInitPhase2 @ 0x140CD842C (PspInitPhase2.c)
 *     ExpWorkerInitialization @ 0x140CE6768 (ExpWorkerInitialization.c)
 *     CmpInitializeTransactions @ 0x140CEDFDC (CmpInitializeTransactions.c)
 * Callees:
 *     <none>
 */

__int64 KiQueryUnbiasedInterruptTime()
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
