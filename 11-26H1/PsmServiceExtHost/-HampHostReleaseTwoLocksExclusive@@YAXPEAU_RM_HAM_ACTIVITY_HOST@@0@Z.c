/*
 * XREFs of ?HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018D54
 * Callers:
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019794 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019ACC (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007DE48 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007E15C (-HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEP.c)
 * Callees:
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostReleaseTwoLocksExclusive(struct _RM_HAM_ACTIVITY_HOST *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  HampHostReleaseLockExclusive(a1);
  HampHostReleaseLockExclusive(a2);
}
