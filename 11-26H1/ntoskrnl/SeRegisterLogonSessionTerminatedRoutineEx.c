/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutineEx @ 0x1408151E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall SeRegisterLogonSessionTerminatedRoutineEx(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 )
    return 3221225485LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)RtlpBootStatHandleLock.TracingPrivate);
  *Pool2 = *(_QWORD *)&ExpPlatformBinaryLock.NextProcessor;
  Pool2[1] = a1;
  Pool2[2] = a2;
  *(_QWORD *)&ExpPlatformBinaryLock.NextProcessor = Pool2;
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)RtlpBootStatHandleLock.TracingPrivate);
  KeLeaveCriticalRegion();
  return 0LL;
}
