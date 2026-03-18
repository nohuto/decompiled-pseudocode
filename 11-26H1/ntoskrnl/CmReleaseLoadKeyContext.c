/*
 * XREFs of CmReleaseLoadKeyContext @ 0x14097B260
 * Callers:
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x1408B11FC (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408B45EC (LOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408C52DC (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

_QWORD *__fastcall CmReleaseLoadKeyContext(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( (int)a2 < 0 )
  {
    LOCK_HIVE_LOAD(BugCheckParameter4, a2, a3, a4);
    CmpLockRegistry(v7);
    if ( *(_BYTE *)(*(_QWORD *)(BugCheckParameter4 + 32) + 2952LL) == 1 )
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter4);
      CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter4 + 32));
    }
    else
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter4);
    }
    CmpUnlockRegistry(v8);
    return UNLOCK_HIVE_LOAD();
  }
  else
  {
    CmpLockRegistry(BugCheckParameter4);
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    return (_QWORD *)CmpUnlockRegistry(v5);
  }
}
