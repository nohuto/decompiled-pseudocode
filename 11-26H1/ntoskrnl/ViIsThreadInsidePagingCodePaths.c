/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x140C384F0
 * Callers:
 *     VfDeadlockReleaseResource @ 0x140C4493C (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140C47314 (VfDeadlockAcquireResource.c)
 * Callees:
 *     ViLowerIrql @ 0x14064738C (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406473C4 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140C37460 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140C37498 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x140C383CC (ViDeadlockSearchThread.c)
 */

_BOOL8 ViIsThreadInsidePagingCodePaths()
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v1; // edi
  unsigned __int8 v2; // si
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  v2 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(0);
  v3 = ViDeadlockSearchThread((unsigned __int64)CurrentThread);
  if ( v3 )
    v1 = *((_DWORD *)v3 + 11) != 0;
  ViDeadlockDetectionUnlock(0);
  ViLowerIrql(v2);
  return v1;
}
