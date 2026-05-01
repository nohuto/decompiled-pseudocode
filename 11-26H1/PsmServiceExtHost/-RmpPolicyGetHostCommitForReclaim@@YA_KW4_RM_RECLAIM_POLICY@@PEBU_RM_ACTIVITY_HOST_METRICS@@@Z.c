/*
 * XREFs of ?RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18005A9E0
 * Callers:
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18006BD9C (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyGetHostCommitForReclaim(int a1, _QWORD *a2)
{
  if ( a1 == 2 || !a1 )
    return *a2;
  if ( a1 == 1 )
    return a2[5];
  return 0LL;
}
