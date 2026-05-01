/*
 * XREFs of ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007954C
 * Callers:
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180082EE8 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018C2C (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029658 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180063B20 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180078D10 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

__int64 __fastcall HampHostTrySetPpleCommitTarget(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v2; // rsi
  int CanStaticallyDonateCommit; // ebx
  int v6; // ebp
  struct _HAM_ACTIVITY *FirstActivity; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int Host; // eax
  __int64 v13; // rax
  struct _HAM_DEPENDENCY_GROUP *v14; // r14
  struct _RM_HAM_ACTIVITY_HOST *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v16 = 0LL;
  if ( (*((_QWORD *)a1 + 83) & 0x200000000000000LL) == 0 )
    return (unsigned int)-1073700845;
  if ( a2 == -1 )
    return (unsigned int)-1073741584;
  if ( a2 )
  {
    HampHostAcquireLockExclusiveEx(a1, 0);
    FirstActivity = HampHostGetFirstActivity(a1);
    while ( 1 )
    {
      if ( !FirstActivity )
        goto LABEL_31;
      v8 = *((_QWORD *)FirstActivity + 9);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 40) == 2 )
          break;
      }
      v9 = *((_QWORD *)FirstActivity + 12);
      v10 = *((_QWORD *)FirstActivity + 10);
      FirstActivity = 0LL;
      if ( v9 != v10 + 608 )
        FirstActivity = (struct _HAM_ACTIVITY *)(v9 - 96);
    }
    v11 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL);
    if ( v11 == -1 )
    {
LABEL_31:
      CanStaticallyDonateCommit = -1058275323;
      goto LABEL_32;
    }
    HampHostReleaseLockExclusive(a1);
    v6 = 0;
    Host = RmHamFindHost(
             (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                    + 120)
                        + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
           - 392,
             v11,
             0,
             &v16);
    v2 = v16;
    CanStaticallyDonateCommit = Host;
    if ( Host >= 0 )
    {
      v6 = 1;
      HampHostAcquireTwoLocksExclusive(v16, a1);
      v13 = *((_QWORD *)v2 + 89);
      if ( v13 )
      {
        if ( *(struct _RM_HAM_ACTIVITY_HOST **)(*(_QWORD *)v13 + 80LL) == a1 )
        {
          CanStaticallyDonateCommit = HampHostCanStaticallyDonateCommit(v2, a2);
          if ( CanStaticallyDonateCommit >= 0 )
          {
            *((_QWORD *)a1 + 119) = a2;
            HampHostCheckQueueStateWorker(a1, 0);
            CanStaticallyDonateCommit = 0;
          }
        }
        else
        {
          CanStaticallyDonateCommit = -1058275322;
        }
      }
      else
      {
        CanStaticallyDonateCommit = -1058275323;
      }
    }
    if ( v2 )
      HampHostReleaseLockExclusive(v2);
    if ( CanStaticallyDonateCommit < 0 )
      goto LABEL_29;
    if ( !v6 )
      HampHostAcquireLockExclusiveEx(a1, 0);
  }
  else
  {
    v6 = 1;
    HampHostAcquireLockExclusiveEx(a1, 0);
    CanStaticallyDonateCommit = 0;
    *((_QWORD *)a1 + 119) = 0LL;
  }
  v14 = HampHostCheckEnterDependencyWorker(a1);
  if ( !v14 )
  {
LABEL_29:
    if ( v6 )
LABEL_32:
      HampHostReleaseLockExclusive(a1);
    goto LABEL_33;
  }
  HampHostReleaseLockExclusive(a1);
  HampDepGroupRunStateChangeWorker(v14);
LABEL_33:
  if ( v2 )
    RmHamHostDereference(v2);
  return (unsigned int)CanStaticallyDonateCommit;
}
