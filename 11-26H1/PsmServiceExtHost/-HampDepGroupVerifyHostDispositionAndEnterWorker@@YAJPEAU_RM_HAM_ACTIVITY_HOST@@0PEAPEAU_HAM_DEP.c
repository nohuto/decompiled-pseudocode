/*
 * XREFs of ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007E15C
 * Callers:
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18007DAE0 (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 * Callees:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016FF8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018C2C (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018D54 (-HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019A48 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetDepGroupDisposition@@YA?AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180019C28 (-HampHostGetDepGroupDisposition@@YA-AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIV.c)
 */

__int64 __fastcall HampDepGroupVerifyHostDispositionAndEnterWorker(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdi

  HampHostAcquireTwoLocksExclusive(a1, a2);
  v6 = 0;
  if ( (unsigned int)HampHostGetDepGroupDisposition((__int64)a1, (__int64)a2) )
  {
    v6 = -1073740007;
  }
  else
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)a1 + 88);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 96)) <= 1 )
        __fastfail(0xEu);
      HampHostReleaseTwoLocksExclusive(a1, a2);
      HampDepGroupWaitEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v7);
      HampHostAcquireTwoLocksExclusive(a1, a2);
      if ( *((_QWORD *)a1 + 88) == v7 )
        break;
      HampHostReleaseTwoLocksExclusive(a1, a2);
      HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v7);
      HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v7);
      HampHostAcquireTwoLocksExclusive(a1, a2);
    }
    *a3 = (struct _HAM_DEPENDENCY_GROUP *)v7;
  }
  HampHostReleaseTwoLocksExclusive(a1, a2);
  return v6;
}
