/*
 * XREFs of ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800160F8
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015B68 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001727C (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007DE48 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015EFC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180016258 (-HampDepGroupGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800162F4 (-HampDepGroupGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023E50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002933C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryLockAndReferenceMembers(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_WORKER_CONTEXT *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *FirstHost; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v7; // rdx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v8; // rax
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // r14
  DWORD v10; // r12d
  _QWORD *Value; // rbp
  struct _RM_HAM_ACTIVITY_HOST *j; // rax
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v13; // r8

  RmpAcquireGlobalLock();
  HampDepGroupAcquireLockExclusive(a1);
  FirstHost = HampDepGroupGetFirstHost(a1);
  v5 = 0;
  while ( FirstHost )
  {
    if ( RmHamHostReferenceUnsafe(FirstHost) )
    {
      v7 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)a2 + 1);
      v8 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)(v6 + 744);
      if ( *v7 != a2 )
        __fastfail(3u);
      *(_QWORD *)v8 = a2;
      *(_QWORD *)(v6 + 752) = v7;
      *v7 = v8;
      *((_QWORD *)a2 + 1) = v8;
    }
    FirstHost = HampDepGroupGetNextHost((struct _RM_HAM_ACTIVITY_HOST *)v6);
  }
  HampDepGroupReleaseLockExclusive(a1);
  for ( i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2; i != a2; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
  {
    *((_DWORD *)i + 10) |= 1u;
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    CempLockAcquireExclusive((char *)i - 744);
  }
  HampDepGroupAcquireLockExclusive(a1);
  for ( j = HampDepGroupGetFirstHost(a1); ; j = HampDepGroupGetNextHost(j) )
  {
    if ( !j )
    {
      v5 = 1;
      goto LABEL_17;
    }
    if ( *((int *)j - 8) >= 0 && (v13 == a2 || (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v13 - 744) != j) )
      break;
  }
  HampDepGroupReleaseLockExclusive(a1);
LABEL_17:
  RmpReleaseGlobalLock();
  return v5;
}
