/*
 * XREFs of ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180004D20
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18008A7F0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005000 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 *     ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005DF0 (-RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAG.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckMetricsAndRemediate(struct _RM_MEMORY_MONITOR_DATA *a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // eax
  __int64 result; // rax
  char v9; // r9
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v7 = RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(a1, a2, &v10);
    if ( v7 - 3 <= 1 )
      break;
    if ( v7 == 2 )
      goto LABEL_4;
  }
  v3 = v7;
LABEL_4:
  RmpMemoryMonitorUpdateMemoryUsageMetrics(a1, (struct _RM_RESOURCE_USAGE_STATS *)&v10);
  result = v3;
  v9 = v10;
  if ( BYTE1(v10) > (unsigned __int8)v10 )
    v9 = BYTE1(v10);
  *a3 = v9;
  return result;
}
