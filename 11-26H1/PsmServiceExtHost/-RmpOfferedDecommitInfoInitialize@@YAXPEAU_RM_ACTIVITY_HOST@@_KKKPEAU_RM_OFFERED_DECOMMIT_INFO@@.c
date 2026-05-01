/*
 * XREFs of ?RmpOfferedDecommitInfoInitialize@@YAXPEAU_RM_ACTIVITY_HOST@@_KKKPEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800669D8
 * Callers:
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180069E68 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpOfferedDecommitInfoInitialize(
        struct _RM_ACTIVITY_HOST *a1,
        __int64 a2,
        char a3,
        int a4,
        struct _RM_OFFERED_DECOMMIT_INFO *a5)
{
  __int64 v5; // rax
  unsigned int v6; // edx

  v5 = -1LL;
  if ( !a4 )
    v5 = a2;
  *((_QWORD *)a5 + 1) = 0LL;
  *((_QWORD *)a5 + 2) = 0LL;
  *(_QWORD *)a5 = v5;
  v6 = *((_DWORD *)a5 + 4) & 0xFFFFFFFE | (*((_DWORD *)a1 + 313) >> 4) & 1;
  *((_DWORD *)a5 + 4) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(2 * a3)) & 2 ^ ((unsigned __int8)(v6 ^ (v6 ^ (2 * a3)) & 2) ^ (unsigned __int8)(4 * a4)) & 4;
}
