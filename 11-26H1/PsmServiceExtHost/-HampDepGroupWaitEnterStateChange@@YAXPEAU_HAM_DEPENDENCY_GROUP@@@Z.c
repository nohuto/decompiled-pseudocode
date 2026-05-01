/*
 * XREFs of ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019A48
 * Callers:
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019794 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019ACC (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001B400 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BFDC (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007DE48 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007E15C (-HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEP.c)
 * Callees:
 *     ?HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800167D0 (-HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017F2C (-HampDepGroupEnterStateChangeUnsafe@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18001B7D8 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupWaitEnterStateChange(struct _HAM_DEPENDENCY_GROUP *a1)
{
  int v2; // edi

  HampDepGroupAcquireLockExclusive(a1);
  while ( 1 )
  {
    ++*((_QWORD *)a1 + 14);
    if ( *((_DWORD *)a1 + 32) )
    {
      v2 = 0;
    }
    else
    {
      HampDepGroupEnterStateChangeUnsafe(a1);
      v2 = 1;
    }
    if ( v2 != HampDepGroupIsCurrentThreadWorker(a1) )
      NT_ASSERT("EnteredStateChange == HampDepGroupIsCurrentThreadWorker(DependencyGroup)");
    if ( v2 )
      break;
    CempLockSleepConditionVariableExclusive((char *)a1 + 8, (char *)a1 + 24, 0LL);
  }
  HampDepGroupReleaseLockExclusive(a1);
}
