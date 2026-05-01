/*
 * XREFs of ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BFDC
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800804C8 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CBD8 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000CC30 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18001562C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180015E08 (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015E68 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019A48 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180033D2C (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180033D9C (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180036228 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003CB1C (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CBCC (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006C8F0 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x18007BBEC (-HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@.c)
 *     ?HamRcRootWaitForEmpty@@YAXPEAU_HAM_RC_TREE_ROOT@@@Z @ 0x18007E8B0 (-HamRcRootWaitForEmpty@@YAXPEAU_HAM_RC_TREE_ROOT@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007F4F8 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampSystemNotificationClientUnregister@@YAXPEAX@Z @ 0x18008BAB4 (-HampSystemNotificationClientUnregister@@YAXPEAX@Z.c)
 *     CemRcTableBeginRundown @ 0x180097E74 (CemRcTableBeginRundown.c)
 *     CemRcTableWaitForEmpty @ 0x180097EC4 (CemRcTableWaitForEmpty.c)
 */

void __fastcall HampManagerRundown(struct _HOST_ACTIVITY_MANAGER *a1)
{
  char *v1; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  void *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  char *v8; // rbx
  __int64 v9; // rsi
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rbx
  struct _HAM_DEPENDENCY_GROUP *v12; // rdx
  struct _HOST_ACTIVITY_MANAGER *v13; // rcx
  struct _HAM_HOST_DEPENDENCY *j; // rax
  struct _HAM_DEPENDENCY_GROUP *v15; // rax
  struct _HAM_DEPENDENCY_GROUP *v16; // rbx
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v1 = (char *)a1 + 680;
  HampWakeManagerPreRundown((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 680));
  if ( *((_QWORD *)a1 + 64) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v3 = (_QWORD *)((char *)a1 + 560);
  v4 = 2LL;
  do
  {
    if ( *v3 )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( *((_QWORD *)a1 + 80) )
    HampPdcExitPlmPhase((struct _HOST_ACTIVITY_MANAGER **)a1 + 72);
  v5 = (void *)*((_QWORD *)a1 + 73);
  if ( v5 )
  {
    HampSystemNotificationClientUnregister(v5);
    *((_QWORD *)a1 + 73) = 0LL;
  }
  *((_DWORD *)a1 + 158) |= 2u;
  if ( *((_QWORD *)a1 + 76) )
  {
    SleepstudyHelperDestroyLibrary();
    *((_QWORD *)a1 + 76) = 0LL;
  }
  v6 = (_QWORD *)((char *)a1 + 520);
  v7 = 4LL;
  do
  {
    if ( *v6 )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    ++v6;
    --v7;
  }
  while ( v7 );
  v8 = (char *)a1 + 16;
  v9 = 7LL;
  do
  {
    CemRcTableBeginRundown(v8);
    CemRcTableWaitForEmpty(v8);
    v8 += 48;
    --v9;
  }
  while ( v9 );
  for ( i = HampHostEnumerateHostsInNode((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352), 0, 0LL);
        ;
        i = HampManagerGetNextHost(v11) )
  {
    v11 = i;
    if ( !i )
      break;
    v17 = 0;
    HampHostQueueTerminateEx((__int64)i, 3, 0xB00u, 0LL, 0, 0, 0LL, &v17);
  }
  v12 = 0LL;
  v13 = a1;
  while ( 1 )
  {
    v15 = HampManagerEnumerateDependencyGroups(v13, v12);
    v16 = v15;
    if ( !v15 )
      break;
    HampDepGroupWaitEnterStateChange(v15);
    HampDepGroupAcquireLockExclusive(v16);
    for ( j = HampDepGroupGetFirstDependency(v16); j; j = HampDepGroupGetNextDependency(j) )
    {
      if ( *((_BYTE *)j + 40) != 2 )
        *((_DWORD *)j + 9) |= 1u;
    }
    HampDepGroupReleaseLockExclusive(v16);
    HampDepGroupRunStateChangeWorker(v16);
    v13 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)v16 + 4);
    v12 = v16;
  }
  HampManagerAcquireLockShared(a1);
  while ( 1 )
  {
    v18 = *((_QWORD *)a1 + 61);
    HampManagerReleaseLockShared(a1);
    if ( !v18 )
      break;
    RtlWaitOnAddress((char *)a1 + 488, &v18, 8LL);
    HampManagerAcquireLockShared(a1);
  }
  HamRcRootWaitForEmpty((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352));
  CemRcTableBeginRundown((char *)a1 + 440);
  CemRcTableWaitForEmpty((char *)a1 + 440);
  CemRcTableBeginRundown(v1 + 32);
  CemRcTableWaitForEmpty(v1 + 32);
  HampHostIdStoreAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 792));
  HampHostIdStoreEnumerateMatchingEntries(
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 792),
    0LL,
    0LL,
    0LL,
    (unsigned int (*)(struct _HAM_HOSTID_ENTRY *, void *))HampHostIdStoreInvalidateEntryCallback,
    0LL);
  HampHostIdStoreReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 792));
  HamRcRootWaitForEmpty((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 808));
}
