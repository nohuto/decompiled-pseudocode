/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutine @ 0x140815140
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall SeRegisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  PVOID *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !CallbackRoutine )
    return -1073741811;
  Pool2 = (PVOID *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return -1073741670;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)RtlpBootStatHandleLock.TracingPrivate);
  *Pool2 = ExpPlatformBinaryLock.WaitBlock[1].SparePtr;
  Pool2[1] = CallbackRoutine;
  ExpPlatformBinaryLock.WaitBlock[1].SparePtr = Pool2;
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)RtlpBootStatHandleLock.TracingPrivate);
  KeLeaveCriticalRegion();
  return 0;
}
