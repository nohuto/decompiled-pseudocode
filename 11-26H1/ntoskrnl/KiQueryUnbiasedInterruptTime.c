/*
 * XREFs of KiQueryUnbiasedInterruptTime @ 0x14043F380
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 *     CmpCompleteLazyWrite @ 0x1404CE15C (CmpCompleteLazyWrite.c)
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1406161C0 (PopRecordPoIrpBlackboxInformation.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406411CC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     PsFreezeProcess @ 0x14077E180 (PsFreezeProcess.c)
 *     FsRtlpOplockPerfPrepareToSendData @ 0x140791E2C (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSummarizeData @ 0x140791EDC (FsRtlpOplockPerfSummarizeData.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopEtEnergyTrackerCreate @ 0x1407E01B0 (PopEtEnergyTrackerCreate.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     sub_14083E550 @ 0x14083E550 (sub_14083E550.c)
 *     ?ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x14084CFBC (-ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 *     CmpInitializeDelayedCloseTable @ 0x140861A50 (CmpInitializeDelayedCloseTable.c)
 *     ObpProcessRemoveObjectQueue @ 0x140A66D00 (ObpProcessRemoveObjectQueue.c)
 *     PopBlackBoxDirectAccess @ 0x140B5B474 (PopBlackBoxDirectAccess.c)
 *     PopEtEnergyTrackerQuery @ 0x140B69ED8 (PopEtEnergyTrackerQuery.c)
 *     PopBlackBoxUpdate @ 0x140B76EF4 (PopBlackBoxUpdate.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     PopBroadcastBlameBugcheckCallback @ 0x140C03590 (PopBroadcastBlameBugcheckCallback.c)
 *     FsRtlInitializeOplockPerf @ 0x140CBF134 (FsRtlInitializeOplockPerf.c)
 *     PopDiagInitialize @ 0x140CD7AF8 (PopDiagInitialize.c)
 *     PspInitPhase2 @ 0x140CDE7AC (PspInitPhase2.c)
 *     ExpWorkerInitialization @ 0x140CECB08 (ExpWorkerInitialization.c)
 *     CmpInitializeTransactions @ 0x140CF4358 (CmpInitializeTransactions.c)
 * Callees:
 *     <none>
 */

__int64 KiQueryUnbiasedInterruptTime()
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
