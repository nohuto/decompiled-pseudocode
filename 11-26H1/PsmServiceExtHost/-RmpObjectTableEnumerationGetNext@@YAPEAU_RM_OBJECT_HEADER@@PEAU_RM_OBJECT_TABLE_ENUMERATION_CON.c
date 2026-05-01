/*
 * XREFs of ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180006CE0
 * Callers:
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180006178 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800065D0 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180006A40 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180084D7C (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180086694 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180086AE4 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008A1B0 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_OBJECT_HEADER *__fastcall RmpObjectTableEnumerationGetNext(struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *a1)
{
  struct _RM_OBJECT_HEADER **v1; // rdx
  struct _RM_OBJECT_HEADER *result; // rax
  struct _RM_OBJECT_HEADER **i; // rdx

  v1 = (struct _RM_OBJECT_HEADER **)*((_QWORD *)a1 + 2);
  if ( !v1 || (result = *v1, ((unsigned __int8)*v1 & 1) != 0) )
  {
    for ( i = (struct _RM_OBJECT_HEADER **)(*((_QWORD *)a1 + 3) + 8LL);
          (unsigned __int64)i < *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL)
                              + 8 * ((unsigned __int64)*(unsigned int *)(*((_QWORD *)a1 + 1) + 4LL) >> 5);
          ++i )
    {
      result = *i;
      if ( ((unsigned __int8)*i & 1) == 0 )
      {
        *((_QWORD *)a1 + 3) = i;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
LABEL_7:
  *((_QWORD *)a1 + 2) = result;
  if ( !result )
    return 0LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)result + 2) <= 1 )
    __fastfail(0xEu);
  return result;
}
