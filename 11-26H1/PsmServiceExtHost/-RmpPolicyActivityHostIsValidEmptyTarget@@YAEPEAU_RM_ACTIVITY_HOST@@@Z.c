/*
 * XREFs of ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800473A0
 * Callers:
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x180004B90 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180046C58 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800470F4 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180047190 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x18008A6D0 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpPolicyActivityHostIsValidEmptyTarget(struct _RM_ACTIVITY_HOST *a1)
{
  int v1; // r9d
  __int16 v3; // r10
  int v4; // edx
  int v5; // ecx
  int v6; // eax

  v1 = *((_DWORD *)a1 + 313);
  if ( (*((_WORD *)a1 + 584) & 4) == 0 || (v1 & 0x100) == 0 )
    return 0;
  v3 = *((_WORD *)a1 + 720);
  v4 = 0;
  v5 = *(_DWORD *)(*((_QWORD *)a1 + 6) + 616LL);
  if ( (v3 & 0x200) == 0 && (v1 & 0x10) == 0 )
  {
    v6 = 2 * (v5 & 1);
    if ( (v3 & 0x100) == 0 )
      v6 |= 2 * (v5 & 2);
    if ( (v5 & 4) != 0 )
      v4 = v6;
    else
      v4 = v6 | 0x22;
  }
  return (v1 & (v4 | v1 & 0x27)) != (v4 | v1 & 0x27);
}
