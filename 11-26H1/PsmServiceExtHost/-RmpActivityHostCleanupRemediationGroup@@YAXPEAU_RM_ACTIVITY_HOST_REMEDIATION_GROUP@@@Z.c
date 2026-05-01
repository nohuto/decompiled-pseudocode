/*
 * XREFs of ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18005C2B4
 * Callers:
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180003E90 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180006178 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008A39C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpActivityHostCleanupRemediationGroup(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a1)
{
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v1; // rax
  __int64 v3; // rdi
  char *v4; // rcx
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **v5; // rdx

  v1 = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)a1;
  if ( *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)a1 != a1 )
  {
    do
    {
      v3 = *(_QWORD *)v1;
      v4 = (char *)v1 - 1416;
      if ( *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)(*(_QWORD *)v1 + 8LL) != v1
        || (v5 = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)*((_QWORD *)v1 + 1), *v5 != v1) )
      {
        __fastfail(3u);
      }
      *v5 = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v3;
      *(_QWORD *)(v3 + 8) = v5;
      *((_QWORD *)v4 + 176) = 0LL;
      RmpObjectRelease(v4);
      v1 = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v3;
    }
    while ( (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v3 != a1 );
  }
}
