/*
 * XREFs of ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180069E68
 * Callers:
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006DB84 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x1800888E8 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800449A0 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800476B0 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpOfferedDecommitInfoInitialize@@YAXPEAU_RM_ACTIVITY_HOST@@_KKKPEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800669D8 (-RmpOfferedDecommitInfoInitialize@@YAXPEAU_RM_ACTIVITY_HOST@@_KKKPEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18006D394 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPolicyReclaimHostList(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v10; // rax
  struct _RM_ACTIVITY_HOST *v11; // r11
  struct _RM_ACTIVITY_HOST *v12; // r11
  __int128 i; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]

  result = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  for ( i = 0LL; (unsigned int)v5 < *(_DWORD *)(a1 + 40); v5 = (unsigned int)(v5 + 1) )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(struct _RM_ACTIVITY_HOST **)(v10 + 24 * v5 + 8);
    if ( *(_DWORD *)(v10 + 24 * v5 + 16) == 1 )
    {
      RmpOfferedDecommitInfoInitialize(
        v11,
        *(_QWORD *)(v10 + 24 * v5),
        0,
        *(_DWORD *)(v10 + 24 * v5 + 20) & 1,
        (struct _RM_OFFERED_DECOMMIT_INFO *)&i);
      result = RmpActivityHostDecommitOfferedMemory(v12, (struct _RM_OFFERED_DECOMMIT_INFO *)&i);
    }
    else
    {
      if ( a4 )
        RmpActivityHostAddToRemediationGroup(*(struct _RM_ACTIVITY_HOST **)(v10 + 24 * v5 + 8), a4);
      result = RmpActivityHostRevokeResourceSets(v11, a2, a3);
    }
  }
  return result;
}
