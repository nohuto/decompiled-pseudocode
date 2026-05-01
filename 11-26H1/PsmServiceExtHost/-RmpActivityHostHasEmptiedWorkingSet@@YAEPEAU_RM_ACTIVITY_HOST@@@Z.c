/*
 * XREFs of ?RmpActivityHostHasEmptiedWorkingSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180047320
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180046C58 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180047190 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpActivityHostHasEmptiedWorkingSet(struct _RM_ACTIVITY_HOST *a1)
{
  __int16 v1; // r9
  int v2; // eax
  int v3; // r8d
  int v4; // ecx
  int v5; // edx

  v1 = *((_WORD *)a1 + 720);
  v2 = 0;
  v3 = *((_DWORD *)a1 + 313);
  v4 = *(_DWORD *)(*((_QWORD *)a1 + 6) + 616LL);
  if ( (v1 & 0x200) == 0 && (v3 & 0x10) == 0 )
  {
    v5 = 2 * (v4 & 1);
    if ( (v1 & 0x100) == 0 )
      v5 |= 2 * (v4 & 2);
    v2 = v5 | 2;
    if ( (v4 & 4) != 0 )
      v2 = v5;
  }
  return (v3 & (v2 | v3 & 0x27)) == (v2 | v3 & 0x27);
}
