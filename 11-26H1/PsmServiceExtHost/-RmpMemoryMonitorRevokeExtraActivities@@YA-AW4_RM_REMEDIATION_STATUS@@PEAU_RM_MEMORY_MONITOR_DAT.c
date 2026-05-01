/*
 * XREFs of ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180006178
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005000 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180004230 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180004B90 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800058E0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpActivityHostIsKillable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006444 (-RmpActivityHostIsKillable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180006CE0 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x180006D80 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800083CC (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005C2B4 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006C548 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006DB84 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall RmpMemoryMonitorRevokeExtraActivities(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // r14d
  unsigned __int64 v4; // r15
  __int64 v6; // rbx
  __int128 v7; // xmm0
  __int64 *v8; // rdi
  __int64 v9; // r8
  void *v10; // rcx
  _QWORD *v11; // rbx
  struct _RM_ACTIVITY_HOST *Next; // rax
  struct _RM_ACTIVITY_HOST *v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rax
  int HostListAndRevoke; // ebx
  unsigned int v22; // ebx
  __int64 v24; // rcx
  _QWORD v25[3]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v26[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v27[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  __int128 v29; // [rsp+90h] [rbp-70h]
  _BYTE v30[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v33; // [rsp+188h] [rbp+88h]
  __int64 v34; // [rsp+190h] [rbp+90h]

  v33 = a2;
  v2 = *a1;
  v25[1] = v25;
  v3 = 0;
  v32 = 0;
  v25[0] = v25;
  v4 = a2;
  v25[2] = a1[4];
  v34 = v2;
  RmpAcquireGlobalLock();
  v6 = *a1;
  memset_0(v30, 0, 0x80uLL);
  memset_0(v27, 0, 0x50uLL);
  RmpSystemMemoryMetricsQuery((struct _RM_SYSTEM_MEMORY_METRICS *)v27);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v6 + 200),
    (struct _RM_REMEDIATION_ACTIONS *)(v6 + 256),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v27,
    v27[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)v30);
  v7 = v29;
  v8 = (__int64 *)(v2 + 120);
  *(_WORD *)(v2 + 164) = 0;
  v9 = *(unsigned int *)(v2 + 152);
  v10 = *(void **)(v2 + 120);
  v31 = v7;
  v26[0] = 0LL;
  *(_DWORD *)(v2 + 156) = 0;
  v26[1] = 0LL;
  memset_0(v10, 0, v9 << 6);
  RmpObjectTableEnumerationBegin(
    (struct _RM_OBJECT_TABLE *)(v2 - 296),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v26);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v26);
    v13 = Next;
    if ( !Next )
      break;
    if ( RmpPolicyFilterActivityHostWithFlags(Next, 0LL) )
    {
      v11 = (_QWORD *)(*v8 + ((unsigned __int64)*(unsigned int *)(v2 + 156) << 6));
      memset_0(v11, 0, 0x40uLL);
      v11[6] = v13;
      ++*(_DWORD *)(v2 + 156);
    }
    RmpObjectRelease(v13);
  }
  RtlReleaseSRWLockShared(*(_QWORD *)&v26[0] + 16LL);
  if ( *(_DWORD *)(v2 + 156) )
    RmpActivityHostPopulateMetrics(v2 + 120, 67LL, 0LL);
  v15 = *(_DWORD *)(v2 + 156);
  v16 = v31;
  if ( v15 )
  {
    do
    {
      v17 = *v8;
      v18 = (unsigned __int64)v3 << 6;
      v19 = *(_QWORD *)(v18 + *v8 + 48);
      if ( RmpActivityHostIsKillable((struct _RM_ACTIVITY_HOST *)v19) && (*(_BYTE *)(v19 + 1168) & 0x40) != 0 )
        v20 = *(_QWORD *)(v18 + v17);
      else
        v20 = *(_QWORD *)(v18 + v17 + 40);
      v16 += v20;
      ++v3;
      v15 = *((_DWORD *)v8 + 9);
    }
    while ( v3 < v15 );
    v4 = v33;
    v2 = v34;
  }
  if ( v28 - v16 < v4 )
  {
    v22 = 3;
LABEL_31:
    RmpReleaseGlobalLock();
    return v22;
  }
  if ( !v15 )
  {
    v22 = 2;
    goto LABEL_31;
  }
  HostListAndRevoke = RmpMemoryMonitorGenerateHostListAndRevoke(v2, v14, v28 - v16 - v4, 1LL, 5, v25);
  RmpReleaseGlobalLock();
  if ( HostListAndRevoke )
  {
    if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                         (struct _RM_MEMORY_MONITOR_DATA *)a1,
                         13,
                         *((_DWORD *)a1 + 18),
                         (enum _RM_MEMORY_MONITOR_EVENT *)&v32) )
    {
      if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 1LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          v24,
          &unk_1800D3EE7);
      v22 = 1;
    }
    else if ( v32 == 2 )
    {
      v22 = 4;
    }
    else
    {
      v22 = 0;
    }
    RmpAcquireGlobalLock();
    RmpActivityHostCleanupRemediationGroup((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v25);
    goto LABEL_31;
  }
  return 2;
}
