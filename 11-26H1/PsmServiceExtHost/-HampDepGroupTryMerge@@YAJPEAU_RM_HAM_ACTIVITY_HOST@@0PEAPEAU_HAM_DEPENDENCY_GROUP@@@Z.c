/*
 * XREFs of ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007DE48
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019ACC (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180015F54 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180016060 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800160F8 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016FF8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017250 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018C2C (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180018D54 (-HampHostReleaseTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019884 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019A48 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18001A828 (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DCBC (-HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18007EB64 (-HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z.c)
 *     ?HampDepLinkReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x18007EBDC (-HampDepLinkReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampDepGroupTryMerge(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  __int64 v3; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v5; // r13
  __int64 v6; // rdi
  struct _HAM_DEPENDENCY_GROUP *v7; // rcx
  struct _HAM_DEPENDENCY_GROUP *v8; // rsi
  __int128 *i; // rsi
  __int128 *j; // rsi
  struct _HAM_DEPENDENCY_LINK *FirstLink; // r14
  unsigned __int64 *v12; // r13
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  int v15; // r12d
  unsigned __int64 v16; // rax
  unsigned int v17; // esi
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+38h] [rbp-28h]
  struct _HAM_DEPENDENCY_GROUP **v21; // [rsp+40h] [rbp-20h]
  unsigned __int64 v22[2]; // [rsp+48h] [rbp-18h] BYREF

  v3 = *((_QWORD *)a1 + 88);
  v19 = 0LL;
  v21 = a3;
  v5 = a1;
  v20 = a1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 96)) <= 1 )
    __fastfail(0xEu);
  v6 = *((_QWORD *)a2 + 88);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 96)) <= 1 )
    __fastfail(0xEu);
  HampHostReleaseTwoLocksExclusive(a1, a2);
  if ( *(_QWORD *)v3 >= *(_QWORD *)v6 )
  {
    v7 = (struct _HAM_DEPENDENCY_GROUP *)v6;
    v8 = (struct _HAM_DEPENDENCY_GROUP *)v3;
  }
  else
  {
    v7 = (struct _HAM_DEPENDENCY_GROUP *)v3;
    v8 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  }
  HampDepGroupWaitEnterStateChange(v7);
  HampDepGroupWaitEnterStateChange(v8);
  HampHostAcquireTwoLocksExclusive(v5, a2);
  if ( *((_QWORD *)v5 + 88) == v3 && *((_QWORD *)a2 + 88) == v6 )
  {
    HampHostReleaseTwoLocksExclusive(v5, a2);
    *((_QWORD *)&v19 + 1) = &v19;
    *(_QWORD *)&v19 = &v19;
    HampDepGroupTryLockAndReferenceMembers(
      (struct _HAM_DEPENDENCY_GROUP *)v3,
      (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)&v19);
    for ( i = (__int128 *)v19; i != &v19; i = *(__int128 **)i )
      HampDepGroupRemoveHostForMerge(
        (struct _HAM_DEPENDENCY_GROUP *)v3,
        (struct _RM_HAM_ACTIVITY_HOST *)((char *)i - 744));
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
    for ( j = (__int128 *)v19; j != &v19; j = *(__int128 **)j )
      HampDepGroupAddHost((struct _HAM_DEPENDENCY_GROUP *)v6, (struct _RM_HAM_ACTIVITY_HOST *)((char *)j - 744));
    FirstLink = HampDepGroupGetFirstLink((struct _HAM_DEPENDENCY_GROUP *)v3);
    if ( FirstLink )
    {
      v12 = (unsigned __int64 *)(v6 + 72);
      do
      {
        HampDepLinkAcquireLockExclusive(FirstLink);
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        RtlRbRemoveNode(v3 + 72, FirstLink);
        *((_QWORD *)FirstLink + 2) = -1LL;
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        v22[0] = *((_QWORD *)FirstLink + 3);
        v22[1] = *((_QWORD *)FirstLink + 4);
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        if ( (*(_BYTE *)(v6 + 80) & 1) != 0 && *v12 )
          v14 = *v12 ^ (unsigned __int64)v12;
        else
          v14 = *v12;
        LOBYTE(v13) = 0;
        v15 = *(_BYTE *)(v6 + 80) & 1;
        if ( v14 )
        {
          while ( 1 )
          {
            if ( (int)HampDepGroupCompareDependencyLinkForRbTree(v22, (struct _RTL_BALANCED_NODE *)v14) < 0 )
            {
              v16 = *(_QWORD *)v14;
              if ( v15 )
              {
                if ( !v16 )
                  goto LABEL_34;
                v16 ^= v14;
              }
              if ( !v16 )
              {
LABEL_34:
                LOBYTE(v13) = 0;
                break;
              }
            }
            else
            {
              v16 = *(_QWORD *)(v14 + 8);
              if ( v15 )
              {
                if ( !v16 )
                  goto LABEL_28;
                v16 ^= v14;
              }
              if ( !v16 )
              {
LABEL_28:
                LOBYTE(v13) = 1;
                break;
              }
            }
            v14 = v16;
          }
        }
        RtlRbInsertNodeEx(v6 + 72, v14, v13, FirstLink);
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        HampDepGroupDereference(*((struct _HAM_DEPENDENCY_GROUP **)FirstLink + 5));
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 96)) <= 1 )
          __fastfail(0xEu);
        *((_QWORD *)FirstLink + 5) = v6;
        HampDepLinkReleaseLockExclusive(FirstLink);
        FirstLink = HampDepGroupGetFirstLink((struct _HAM_DEPENDENCY_GROUP *)v3);
      }
      while ( FirstLink );
      v5 = v20;
    }
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT **)&v19);
    HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT **)&v19);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
    v17 = 0;
    *v21 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  }
  else
  {
    v17 = -1073741267;
    HampHostReleaseTwoLocksExclusive(v5, a2);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v6);
    if ( v3 )
      HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
    if ( v6 )
      HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v6);
  }
  HampHostAcquireTwoLocksExclusive(v5, a2);
  return v17;
}
