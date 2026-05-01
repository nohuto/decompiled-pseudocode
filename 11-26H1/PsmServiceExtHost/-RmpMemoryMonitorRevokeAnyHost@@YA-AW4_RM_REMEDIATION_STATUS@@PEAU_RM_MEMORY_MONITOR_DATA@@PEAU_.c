/*
 * XREFs of ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180003E90
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005000 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180003B84 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180004230 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180006A40 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005C2B4 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006DB84 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeAnyHost(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _RM_RESOURCE_USAGE_LIMITS *a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebx
  __int64 v10; // rdx
  __int64 v12; // rcx
  _QWORD v13[4]; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF

  v4 = *a1;
  v13[1] = v13;
  v5 = 0;
  v14 = 0;
  v13[0] = v13;
  v13[2] = a1[4];
  RmpAcquireGlobalLock();
  *(_WORD *)(v4 + 164) = 0;
  RmpPolicyPopulateActivityHostMetrics(v4, 0LL, v4 + 120, 67LL, RmpPolicyFilterActivityHostWithFlags, 0LL);
  if ( *(_DWORD *)(v4 + 156)
    && (RmpMemoryMonitorGenerateHostListAndRevoke(v4, v10, *(_QWORD *)(a3 + 24) - *(_QWORD *)(a2 + 24), 3LL, 7, v13),
        *(_DWORD *)(v4 + 160)) )
  {
    if ( (_QWORD *)v13[0] != v13 )
    {
      RmpReleaseGlobalLock();
      if ( RmpMemoryMonitorWaitForEvents(
             (struct _RM_MEMORY_MONITOR_DATA *)a1,
             0x1Cu,
             *((_DWORD *)a1 + 18),
             (enum _RM_MEMORY_MONITOR_EVENT *)&v14) )
      {
        if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 1LL) )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            v12,
            &unk_1800D3E8B);
        v5 = 1;
      }
      else if ( v14 == 2 )
      {
        v5 = 4;
      }
      RmpAcquireGlobalLock();
      RmpActivityHostCleanupRemediationGroup((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v13);
    }
    RmpReleaseGlobalLock();
  }
  else
  {
    RmpReleaseGlobalLock();
    RmpMemoryMonitorRebootIfAble((struct _RM_MEMORY_MONITOR_DATA *)a1, a4);
    return 2;
  }
  return v5;
}
