/*
 * XREFs of ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006C548
 * Callers:
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180003B84 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180004DC0 (-RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONI.c)
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005000 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180006178 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002409C (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18002C994 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800446D0 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpOfferLazyDecommitQueuePartitionHosts@@YAXPEAU_RM_PARTITION@@PEAU_RM_OFFER_LAZY_DECOMMIT_CONTEXT@@@Z @ 0x18006C418 (-RmpOfferLazyDecommitQueuePartitionHosts@@YAXPEAU_RM_PARTITION@@PEAU_RM_OFFER_LAZY_DECOMMIT_CONT.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180089054 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008A39C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpSystemMemoryMetricsQuery(struct _RM_SYSTEM_MEMORY_METRICS *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 PageCount64; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh]
  int v15; // [rsp+38h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  char v21[64]; // [rsp+88h] [rbp-78h] BYREF
  char v22; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v23; // [rsp+108h] [rbp+8h]

  memset_0(v13, 0, 0xF8uLL);
  v14 = -1;
  v15 = -1;
  NtManagePartition(-2LL, 0LL, 0LL, v13, 248);
  memset_0(a1, 0, 0x50uLL);
  v2 = RmpPageSize;
  v3 = RmpPageSize * v17;
  *(_QWORD *)a1 = RmpPageSize * v23;
  v4 = v2 * v16;
  *((_QWORD *)a1 + 1) = v3;
  v5 = v3 - v4;
  *((_QWORD *)a1 + 2) = v4;
  v6 = v2 * v18;
  *((_QWORD *)a1 + 3) = v5;
  *((_QWORD *)a1 + 5) = v6;
  PageCount64 = SwGetPageCount64(v21, 0LL, 5LL);
  v8 = &v22;
  v9 = 8LL;
  v10 = RmpPageSize * (PageCount64 + v19 + v20);
  v11 = *((_QWORD *)a1 + 5) - v10;
  *((_QWORD *)a1 + 6) = v10;
  *((_QWORD *)a1 + 7) = v11;
  v12 = *((_QWORD *)a1 + 8);
  do
  {
    v12 += *(_QWORD *)v8;
    v8 += 8;
    --v9;
  }
  while ( v9 );
  *((_QWORD *)a1 + 8) = v12;
}
