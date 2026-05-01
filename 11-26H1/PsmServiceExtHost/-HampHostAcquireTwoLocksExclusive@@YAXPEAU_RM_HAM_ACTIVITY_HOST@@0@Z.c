/*
 * XREFs of ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018C2C
 * Callers:
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019794 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019ACC (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007954C (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007DE48 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007E15C (-HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEP.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampHostAcquireTwoLocksExclusive(struct _RM_HAM_ACTIVITY_HOST *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v2; // r9
  struct _RM_HAM_ACTIVITY_HOST *v3; // rsi
  __int64 v4; // rax
  struct _RM_HAM_ACTIVITY_HOST *v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx

  v2 = 32LL;
  v3 = a1;
  v4 = 32LL;
  v5 = a2;
  if ( a1 )
    v4 = (__int64)a1 - 24;
  v6 = *(_QWORD *)v4;
  if ( a2 )
    v2 = (__int64)a2 - 24;
  v7 = *(_QWORD *)v2;
  if ( v6 >= *(_QWORD *)v2 )
    a1 = a2;
  HampHostAcquireLockExclusiveEx(a1, 1u);
  if ( v6 >= v7 )
    v5 = v3;
  HampHostAcquireLockExclusiveEx(v5, 1u);
}
