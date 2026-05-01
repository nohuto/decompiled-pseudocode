/*
 * XREFs of ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F294
 * Callers:
 *     ?RmpGameModeUnapplyUnusedGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000DAC0 (-RmpGameModeUnapplyUnusedGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeDemoteActiveRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAE@Z @ 0x18000DB48 (-RmpGameModeDemoteActiveRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAE@Z.c)
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000ECE0 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F9E4 (-RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x1800644A0 (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x180064E00 (-RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800698A0 (-RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18006E028 (-RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006E8F0 (-RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800804C8 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x1800870F4 (-RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x1800878D8 (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x180087984 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180087C14 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180087D80 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180087E88 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180088440 (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModeAcquireLock(struct _RM_GAME_MODE_CONTEXT *a1)
{
  RtlAcquireSRWLockExclusive((char *)a1 + 72);
  *((_DWORD *)a1 + 20) = GetCurrentThreadId();
}
