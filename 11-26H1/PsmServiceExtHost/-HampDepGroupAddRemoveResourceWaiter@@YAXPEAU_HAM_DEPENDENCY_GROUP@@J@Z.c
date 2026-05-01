/*
 * XREFs of ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x18006E974
 * Callers:
 *     ?HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BC40 (-HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupAddRemoveResourceWaiter(struct _HAM_DEPENDENCY_GROUP *a1, int a2)
{
  HampDepGroupAcquireLockExclusive(a1);
  *((_DWORD *)a1 + 23) += a2;
  HampDepGroupReleaseLockExclusive(a1);
}
