/*
 * XREFs of ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006B8A8
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029E80 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023F34 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026554 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002933C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CBCC (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F27C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003F30C (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180043D60 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18006E6D4 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006E74C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18007D2A8 (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 */

__int64 __fastcall HampHostCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  struct _RM_HAM_ACTIVITY_HOST *v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _RM_HAM_ACTIVITY_HOST *v11; // rbp
  int v12; // eax
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v14; // rsi
  __int64 v15; // rcx

  v1 = *((_QWORD *)a1 + 99);
  v3 = *(_QWORD *)(v1 + 88);
  HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v1);
  v4 = *(_QWORD **)(v1 + 608);
  v5 = (_QWORD *)((char *)a1 + 816);
  if ( *v4 != v1 + 600 )
    __fastfail(3u);
  *v5 = v1 + 600;
  *((_QWORD *)a1 + 103) = v4;
  *v4 = v5;
  *(_QWORD *)(v1 + 608) = v5;
  if ( (unsigned int)RmHamHostGetJobType(a1) != 2 )
    goto LABEL_7;
  if ( *((_BYTE *)a1 + 592) )
  {
    if ( !*(_QWORD *)(v1 + 576) )
    {
      *(_QWORD *)(v1 + 576) = a1;
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
      return 0;
    }
    MicrosoftTelemetryAssertTriggeredNoArgs();
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
    v9 = 4867LL;
LABEL_14:
    HampAppQueueTerminate(v1, v8, v9);
    return (unsigned int)-1058275322;
  }
  if ( *(_QWORD *)(v1 + 568) )
  {
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
    v9 = 4864LL;
    goto LABEL_14;
  }
  *(_QWORD *)(v1 + 568) = a1;
LABEL_7:
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
  if ( (unsigned int)RmHamHostGetJobType(a1) != 2 )
    return 0;
  if ( (*((_QWORD *)a1 + 83) & 0x200000000000000LL) != 0 )
  {
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v3);
    *(_QWORD *)(v3 + 328) = a1;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
    for ( i = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)v3, 3, 0LL); ; i = HampPkgGetNextHost(v14) )
    {
      v14 = i;
      if ( !i )
        break;
      if ( *((_BYTE *)i + 592) != 1
        && (unsigned int)RmHamHostGetJobType(i) == 2
        && (struct _RM_HAM_ACTIVITY_HOST *)v15 != a1
        && !*(_QWORD *)(v15 + 712) )
      {
        v7 = HampDepGroupAddPpleDependency((struct _RM_HAM_ACTIVITY_HOST *)v15, a1);
        if ( v7 < 0 )
          return (unsigned int)v7;
      }
    }
    return 0;
  }
  if ( *((_QWORD *)a1 + 89) )
    return 0;
  RmpAcquireGlobalLock();
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v3);
  v6 = *(struct _RM_HAM_ACTIVITY_HOST **)(v3 + 328);
  if ( v6 && (unsigned int)RmHamHostReferenceUnsafe(v6) )
  {
    v11 = *(struct _RM_HAM_ACTIVITY_HOST **)(v3 + 328);
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
    RmpReleaseGlobalLock();
    v12 = HampDepGroupAddPpleDependency(a1, v11);
    v7 = 0;
    if ( v12 < 0 )
      v7 = v12;
    if ( v11 )
      RmHamHostDereference(v11);
  }
  else
  {
    v7 = 0;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
    RmpReleaseGlobalLock();
  }
  return (unsigned int)v7;
}
