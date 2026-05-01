/*
 * XREFs of IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18006FDF4
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000ECE0 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800677E0 (-RmpGameModeUnapplySystemExtensionPolicy@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPI.c)
 *     ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x180069304 (-RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z.c)
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180084D7C (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180086694 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18008C800 (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180070134 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNotifyGameModeExtensionRecipientsPresentPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800E2158 == 1 )
    return 1;
  if ( dword_1800E2158 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"68", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800E2158 = 2 - (v1 != 0);
  return result;
}
