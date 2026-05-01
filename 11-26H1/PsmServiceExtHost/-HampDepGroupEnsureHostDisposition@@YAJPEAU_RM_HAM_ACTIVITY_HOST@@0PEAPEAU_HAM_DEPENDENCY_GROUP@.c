/*
 * XREFs of ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019ACC
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A2EC (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016FF8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018C2C (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018D54 (-HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019794 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019A48 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetDepGroupDisposition@@YA?AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180019C28 (-HampHostGetDepGroupDisposition@@YA-AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIV.c)
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B6B0 (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007DE48 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupEnsureHostDisposition(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  int DepGroupDisposition; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  struct _HAM_DEPENDENCY_GROUP *v9; // rsi
  int v10; // r14d
  unsigned int v11; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct _HAM_DEPENDENCY_GROUP *v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  HampHostAcquireTwoLocksExclusive(a1, a2);
  do
  {
    DepGroupDisposition = HampHostGetDepGroupDisposition(a1, a2);
    if ( !DepGroupDisposition )
    {
      v9 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 88);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v9 + 12) <= 1 )
        __fastfail(0xEu);
      HampHostReleaseTwoLocksExclusive(a1, v7);
      v10 = 0;
      HampDepGroupWaitEnterStateChange(v9);
      v11 = 0;
      goto LABEL_5;
    }
    v13 = DepGroupDisposition - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
          v9 = v16[0];
          v11 = -1073741823;
          goto LABEL_14;
        }
        v15 = HampDepGroupTryMerge(v8, v7, v16);
      }
      else
      {
        v15 = HampDepGroupTryAddToExisting(v8, v7, v16);
      }
    }
    else
    {
      v15 = HampDepGroupCreate(
              (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99)
                                                                                                + 88LL)
                                                                                    + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                       + 120)
                                                           + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                              - 392),
              a1,
              a2,
              v16);
    }
    v11 = v15;
    v10 = 1;
  }
  while ( v15 == -1073741267 );
  v9 = v16[0];
  if ( v15 >= 0 )
  {
LABEL_5:
    *a3 = v9;
    v9 = 0LL;
  }
  if ( !v10 )
    goto LABEL_7;
LABEL_14:
  HampHostReleaseTwoLocksExclusive(a1, a2);
LABEL_7:
  if ( v9 )
    HampDepGroupDereference(v9);
  return v11;
}
