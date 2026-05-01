/*
 * XREFs of ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800476B0
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180046C58 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180069E68 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostAddToRemediationGroup(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a2)
{
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v2; // rax
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **v3; // r8

  *((_QWORD *)a1 + 176) = a2;
  v2 = (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1416);
  v3 = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)*((_QWORD *)a2 + 1);
  if ( *v3 != a2 )
    __fastfail(3u);
  *(_QWORD *)v2 = a2;
  *((_QWORD *)a1 + 178) = v3;
  *v3 = v2;
  *((_QWORD *)a2 + 1) = v2;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 2) <= 1 )
    __fastfail(0xEu);
}
