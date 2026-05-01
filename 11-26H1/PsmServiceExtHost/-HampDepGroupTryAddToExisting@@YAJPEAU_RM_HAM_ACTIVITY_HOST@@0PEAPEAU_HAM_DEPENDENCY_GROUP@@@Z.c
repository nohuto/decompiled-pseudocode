/*
 * XREFs of ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019794
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019ACC (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016FF8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018C2C (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018D54 (-HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019884 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019A48 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryAddToExisting(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v4; // rdi
  __int64 v6; // rbx
  unsigned int v7; // ebp

  v3 = a1;
  v4 = a2;
  if ( !*((_QWORD *)a1 + 88) )
  {
    v3 = a2;
    v4 = a1;
  }
  v6 = *((_QWORD *)v3 + 88);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 96)) <= 1 )
    __fastfail(0xEu);
  HampHostReleaseTwoLocksExclusive(v3, v4);
  HampDepGroupWaitEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v6);
  HampHostAcquireTwoLocksExclusive(v3, v4);
  if ( *((_QWORD *)v3 + 88) != v6 || *((_QWORD *)v4 + 88) )
  {
    v7 = -1073741267;
    if ( v6 )
    {
      HampHostReleaseTwoLocksExclusive(v3, v4);
      HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v6);
      HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v6);
      HampHostAcquireTwoLocksExclusive(v3, v4);
    }
  }
  else
  {
    HampDepGroupAddHost((struct _HAM_DEPENDENCY_GROUP *)v6, v4);
    v7 = 0;
    *a3 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  }
  return v7;
}
