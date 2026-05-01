/*
 * XREFs of CempLockAcquireExclusive @ 0x180022DB0
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000CEE0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18000FD5C (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180012EA8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180013DF0 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180015F54 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800160F8 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180017954 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     CrmStateMonitorResourceUsageIsolatedPollCSCallback @ 0x18001CD20 (CrmStateMonitorResourceUsageIsolatedPollCSCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x18001CF00 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x18001CFD0 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18001D270 (CrmStateMonitorResourceUsageLocalPollCSCallback.c)
 *     CrmSessionUserNotification @ 0x18001D49C (CrmSessionUserNotification.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x18001DE38 (CrmGlobalsRegistrationRundownHelper.c)
 *     CrmLogStateMonitorRundown @ 0x18001E23C (CrmLogStateMonitorRundown.c)
 *     CrmStateMonitorNetworkUpdateState @ 0x18001F050 (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorWNFCallback @ 0x18001F2A0 (CrmStateMonitorWNFCallback.c)
 *     CrmRegistrationRemoveActivity @ 0x1800206C8 (CrmRegistrationRemoveActivity.c)
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180021120 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmRegistrationReadyQueueRemove @ 0x18002143C (CrmRegistrationReadyQueueRemove.c)
 *     CrmActivityTelemetryUpdate @ 0x180022CC0 (CrmActivityTelemetryUpdate.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029E80 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x18002D748 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18002E5E0 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18002F650 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180033D2C (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18003EE98 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045B40 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x1800465F0 (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800466F4 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180046FB4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18005B3F0 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005CA70 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18005D9B0 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     CrmActivityTelemetryStop @ 0x18005DD44 (CrmActivityTelemetryStop.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x18005DE60 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmStateMonitorSebCallback @ 0x18005E140 (CrmStateMonitorSebCallback.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060D68 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x180063770 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorAcDcBatteryCallback @ 0x180064AE0 (CrmStateMonitorAcDcBatteryCallback.c)
 *     CrmGlobalsRegistrationRemove @ 0x180065250 (CrmGlobalsRegistrationRemove.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x180066A40 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmSuspendNotification @ 0x1800672E0 (CrmSuspendNotification.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x180067690 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmGlobalsPeriodicNotifier @ 0x180069650 (CrmGlobalsPeriodicNotifier.c)
 *     CrmStateMonitorAcDcDisplayCallback @ 0x18006A020 (CrmStateMonitorAcDcDisplayCallback.c)
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 *     CrmGlobalsCleanup @ 0x180075274 (CrmGlobalsCleanup.c)
 *     CrmGlobalsCleanupWorkers @ 0x180075360 (CrmGlobalsCleanupWorkers.c)
 *     CrmGlobalsRegistrationRemoveAll @ 0x1800754E0 (CrmGlobalsRegistrationRemoveAll.c)
 *     CrmStateMonitorCPUUsageCleanup @ 0x1800760F4 (CrmStateMonitorCPUUsageCleanup.c)
 *     CrmStateMonitorResourceUsageCleanup @ 0x180076EB8 (CrmStateMonitorResourceUsageCleanup.c)
 *     CrmGlobalsCleanupTelemetry @ 0x1800777A0 (CrmGlobalsCleanupTelemetry.c)
 *     ?HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18007EB64 (-HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall CempLockAcquireExclusive(__int64 a1)
{
  DWORD result; // eax

  RtlAcquireSRWLockExclusive(a1);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
