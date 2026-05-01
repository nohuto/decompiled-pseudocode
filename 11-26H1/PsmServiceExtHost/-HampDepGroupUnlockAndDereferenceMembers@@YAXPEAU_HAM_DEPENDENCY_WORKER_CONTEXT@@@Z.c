/*
 * XREFs of ?HampDepGroupUnlockAndDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18006EBDC
 * Callers:
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001727C (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079180 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180016060 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

void __fastcall HampDepGroupUnlockAndDereferenceMembers(struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1)
{
  HampDepGroupUnlockMembers(a1);
  HampDepGroupDereferenceMembers(a1);
}
