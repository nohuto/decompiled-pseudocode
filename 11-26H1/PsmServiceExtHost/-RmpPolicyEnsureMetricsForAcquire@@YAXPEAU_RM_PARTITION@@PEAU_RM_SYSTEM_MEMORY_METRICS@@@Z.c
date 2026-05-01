/*
 * XREFs of ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006E20C
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18002AA30 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180006A40 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 */

void __fastcall RmpPolicyEnsureMetricsForAcquire(char **a1, struct _RM_SYSTEM_MEMORY_METRICS *a2)
{
  struct _RM_POLICY_WORK_BUFFER *v2; // rbx

  v2 = (struct _RM_POLICY_WORK_BUFFER *)(a1 + 15);
  RmpPolicyPopulateActivityHostMetrics(
    (__int64)a1,
    0,
    a1 + 15,
    0x43u,
    (unsigned __int8 (__fastcall *)(volatile signed __int64 *, __int64))RmpPolicyFilterActivityHostWithFlags,
    0LL);
  RmpPolicyPopulateFastCommitUse(a2, v2);
}
