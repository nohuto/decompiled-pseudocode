/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x140B8A304
 * Callers:
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140B983E4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     ViLowerIrql @ 0x1406082A8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406082E0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140B891F4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140B8922C (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x140B8A1DC (ViDeadlockSearchThread.c)
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
