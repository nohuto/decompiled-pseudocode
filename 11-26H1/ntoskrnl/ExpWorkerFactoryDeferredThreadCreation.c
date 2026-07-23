/*
 * XREFs of ExpWorkerFactoryDeferredThreadCreation @ 0x1404CC738
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x1406D73E0 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 */

LONG_PTR ExpWorkerFactoryDeferredThreadCreation()
{
  LONG_PTR result; // rax
  _QWORD *v1; // rdi
  ULONG_PTR v2; // rbx
  __int64 v3; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_DWORD *)&WheapConfigTableLock.SchedulerApcFill5[56] = 0;
  result = (LONG_PTR)RtlpInterlockedFlushSList(&ExpWorkerFactoryThreadCreationList);
  v1 = (_QWORD *)result;
  if ( result )
  {
    do
    {
      v2 = (ULONG_PTR)v1;
      v1 = (_QWORD *)*v1;
      KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(v2 + 16), &LockHandle);
      *(_DWORD *)(v2 + 408) &= ~8u;
      LOBYTE(v3) = 1;
      ExpWorkerFactoryCheckCreate(v2, (__int64)&LockHandle, v3);
      result = ObfDereferenceObjectWithTag((PVOID)v2, 0x746C6644u);
    }
    while ( v1 );
  }
  return result;
}
