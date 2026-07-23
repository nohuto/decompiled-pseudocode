/*
 * XREFs of NtShutdownWorkerFactory @ 0x1406D77B0
 * Callers:
 *     DifNtShutdownWorkerFactoryWrapper @ 0x140692780 (DifNtShutdownWorkerFactoryWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpShutdownWorkerFactory @ 0x1403B3AE0 (ExpShutdownWorkerFactory.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExSystemExceptionFilter @ 0x14083CCA0 (ExSystemExceptionFilter.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  KPROCESSOR_MODE PreviousMode; // bl
  int v5; // edi
  char *v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  char *v10; // [rsp+88h] [rbp+20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ProbeForRead(PendingWorkerCount, 4uLL, 4u);
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(WorkerFactoryHandle, 0x20u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object;
    ExpShutdownWorkerFactory((ULONG_PTR)Object);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v6 + 13);
    v10 = v6 + 392;
    _InterlockedAdd(PendingWorkerCount, *((_DWORD *)v6 + 98));
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v6 + 2), &LockHandle);
    *((_DWORD *)v6 + 98) = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  return v5;
}
