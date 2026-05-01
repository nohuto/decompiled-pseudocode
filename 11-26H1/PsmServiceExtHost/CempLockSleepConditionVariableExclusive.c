/*
 * XREFs of CempLockSleepConditionVariableExclusive @ 0x18001B7D8
 * Callers:
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D45C (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019A48 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x180061D64 (-HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18006B3E4 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180078E70 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z @ 0x180079730 (-HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x18007F970 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockSleepConditionVariableExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx

  *(_DWORD *)(a1 + 8) = 0;
  v4 = RtlSleepConditionVariableSRW(a2, a1, a3, 0LL);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  return v4;
}
