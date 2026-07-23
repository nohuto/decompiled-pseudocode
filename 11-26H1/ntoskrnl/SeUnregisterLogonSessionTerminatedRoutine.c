/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutine @ 0x14081B440
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeUnregisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  NTSTATUS v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PSE_LOGON_SESSION_TERMINATED_ROUTINE *SparePtr; // rdi
  PVOID *p_SparePtr; // rcx
  PSE_LOGON_SESSION_TERMINATED_ROUTINE v7; // rax

  v1 = 0;
  if ( !CallbackRoutine )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  SparePtr = (PSE_LOGON_SESSION_TERMINATED_ROUTINE *)ExpPlatformBinaryLock.WaitBlock[1].SparePtr;
  p_SparePtr = &ExpPlatformBinaryLock.WaitBlock[1].SparePtr;
  if ( ExpPlatformBinaryLock.WaitBlock[1].SparePtr )
  {
    while ( 1 )
    {
      v7 = *SparePtr;
      if ( SparePtr[1] == CallbackRoutine )
        break;
      p_SparePtr = (PVOID *)SparePtr;
      SparePtr = (PSE_LOGON_SESSION_TERMINATED_ROUTINE *)*SparePtr;
      if ( !v7 )
        goto LABEL_6;
    }
    *p_SparePtr = v7;
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(SparePtr, 0);
  }
  else
  {
LABEL_6:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegion();
    return -1073741275;
  }
  return v1;
}
