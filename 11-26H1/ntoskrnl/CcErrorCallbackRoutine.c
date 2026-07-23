/*
 * XREFs of CcErrorCallbackRoutine @ 0x1405B4060
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

__int64 __fastcall CcErrorCallbackRoutine(__int64 a1)
{
  unsigned __int64 v1; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 4) == -1073700856 )
  {
    v1 = CcSectionDeletionSequencePhase1;
    memset(&LockHandle, 0, sizeof(LockHandle));
    while ( CcSectionDeletionSequencePhase2 < v1 )
      KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    if ( CcSectionDeletionSequencePhase3 < v1 )
      CcSectionDeletionSequencePhase3 = v1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return 0LL;
}
