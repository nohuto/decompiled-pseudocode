/*
 * XREFs of CmReleaseLoadKeyContext @ 0x14093D270
 * Callers:
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x1408B7808 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408BABC0 (LOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408CB8AC (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

_QWORD *__fastcall CmReleaseLoadKeyContext(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx

  if ( (int)a2 < 0 )
  {
    LOCK_HIVE_LOAD(BugCheckParameter4, a2, a3, a4);
    CmpLockRegistry(v8, v7, v9, v10);
    if ( *(_BYTE *)(*(_QWORD *)(BugCheckParameter4 + 32) + 2952LL) == 1 )
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter4);
      CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter4 + 32));
    }
    else
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter4);
    }
    CmpUnlockRegistry(v11);
    return UNLOCK_HIVE_LOAD();
  }
  else
  {
    CmpLockRegistry(BugCheckParameter4, a2, a3, a4);
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    return (_QWORD *)CmpUnlockRegistry(v5);
  }
}
