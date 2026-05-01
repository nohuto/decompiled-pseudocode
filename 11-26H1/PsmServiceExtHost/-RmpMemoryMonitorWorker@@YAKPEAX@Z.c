/*
 * XREFs of ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18008A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180004230 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180004D20 (-RmpMemoryMonitorCheckMetricsAndRemediate@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_.c)
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180004DC0 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180005744 (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpMemoryMonitorPerformPeriodicMaintenance@@YAXPEAVResourceManager@ExecutionModel@@@Z @ 0x1800599B8 (-RmpMemoryMonitorPerformPeriodicMaintenance@@YAXPEAVResourceManager@ExecutionModel@@@Z.c)
 *     ?RmpMemoryMonitorCheckEvent@@YAEPEAX@Z @ 0x18005DE34 (-RmpMemoryMonitorCheckEvent@@YAEPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckPeriod@@YAEKK@Z @ 0x18005E2E0 (-RmpMemoryMonitorCheckPeriod@@YAEKK@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008A39C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18008A7BC (-RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorWorker(__int64 Parameter)
{
  struct _RM_PARTITION *v2; // rsi
  DWORD TickCount; // eax
  unsigned __int8 v4; // di
  char v5; // dl
  int v6; // edi
  int v7; // eax
  _BYTE v9[4]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v10[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  _BYTE v11[128]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v12[144]; // [rsp+B8h] [rbp-50h] BYREF

  memset_0(v12, 0, 0x88uLL);
  v10[0] = 0;
  memset_0(v11, 0, sizeof(v11));
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v2 = *(struct _RM_PARTITION **)Parameter;
  TickCount = GetTickCount();
  *(_DWORD *)(Parameter + 80) = TickCount;
  *(_DWORD *)(Parameter + 88) = TickCount;
  RmpAcquireGlobalLock();
  RmpMemoryMonitorSetTimerIfEnabled(Parameter);
  RmpReleaseGlobalLock();
  RmpPolicyPrepareToCheckMetrics(
    *(struct _RM_PARTITION **)Parameter,
    (struct _RM_PARTITION *)((char *)v2 + 200),
    (struct _RM_RESOURCE_USAGE_LIMITS *)v11,
    0LL);
  v4 = 0;
  v9[0] = 0;
  while ( 1 )
  {
    v5 = 7;
    if ( v4 >= 4u )
      v5 = 39;
    RmpMemoryMonitorWaitForEvents(
      (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
      v5,
      0xFFFFFFFF,
      (enum _RM_MEMORY_MONITOR_EVENT *)v10);
    v6 = v10[0];
    if ( v10[0] == 2 )
      break;
    v7 = RmpMemoryMonitorCheckMetricsAndRemediate((struct _RM_MEMORY_MONITOR_DATA *)Parameter, (__int64)v11, v9);
    if ( v7 == 4 )
      break;
    if ( v7 == 3 && v6 != 1 && (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)&dword_1800E1278,
        byte_1800D3EBE);
    if ( *((_DWORD *)v2 + 74) && RmpMemoryMonitorCheckPeriod(*(_DWORD *)(Parameter + 76), *(_DWORD *)(Parameter + 80)) )
    {
      RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        (struct _RM_MEMORY_MONITOR_DATA *)Parameter,
        (struct _RM_RESOURCE_USAGE_LIMITS *)v11);
      *(_DWORD *)(Parameter + 80) = GetTickCount();
    }
    if ( *((_DWORD *)v2 + 75)
      && RmpMemoryMonitorCheckPeriod(*(_DWORD *)(Parameter + 84), *(_DWORD *)(Parameter + 88))
      && !(unsigned int)RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy((__int64 *)Parameter, (__int64)v11) )
    {
      *(_DWORD *)(Parameter + 88) = GetTickCount();
    }
    RmpMemoryMonitorPerformPeriodicMaintenance(*(struct ExecutionModel::ResourceManager **)(*(_QWORD *)Parameter + 3232LL));
    if ( v6 == 1 || RmpMemoryMonitorCheckEvent(*(void **)(Parameter + 16)) )
    {
      RmpAcquireGlobalLock();
      v4 = v9[0];
      RmpMemoryMonitorSetTimerIfEnabled(Parameter);
      RmpReleaseGlobalLock();
    }
    else
    {
      v4 = v9[0];
    }
  }
  TpSetTimer(*(_QWORD *)(Parameter + 64), 0LL, 0LL, 0LL);
  TpWaitForTimer(*(_QWORD *)(Parameter + 64), 1LL);
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
