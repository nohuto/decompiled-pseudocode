/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutine @ 0x14081B2F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  *Pool2 = ExpPlatformBinaryLock.WaitBlock[1].SparePtr;
  Pool2[1] = CallbackRoutine;
  ExpPlatformBinaryLock.WaitBlock[1].SparePtr = Pool2;
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegion();
  return 0;
}
