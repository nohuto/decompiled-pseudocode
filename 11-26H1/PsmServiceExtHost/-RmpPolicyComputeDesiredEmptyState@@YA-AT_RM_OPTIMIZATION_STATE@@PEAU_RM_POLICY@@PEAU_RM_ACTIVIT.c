/*
 * XREFs of ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180046BE0
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180046C58 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyComputeDesiredEmptyState(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  int v4; // eax
  __int16 v5; // r11
  int v6; // ecx
  int v7; // edx
  int v8; // ecx

  v3 = *(_DWORD *)(a2 + 1252);
  v4 = 0;
  v5 = *(_WORD *)(a2 + 1440);
  v6 = *(_DWORD *)(a1 + 104);
  if ( (v5 & 0x200) == 0 && (v3 & 0x10) == 0 )
  {
    v4 = 2 * (v6 & 1);
    if ( (v5 & 0x100) == 0 )
      v4 = (2 * (v6 & 1)) | (2 * (v6 & 2));
    if ( a3 > 0 )
    {
      v7 = v4 | 2;
      v8 = v6 & 4;
      if ( v8 )
        v7 = v4;
      v4 = v7;
      if ( a3 > 1 && !v8 )
        v4 = v7 | 0x20;
    }
  }
  return v3 & 0x27 | (unsigned int)v4;
}
