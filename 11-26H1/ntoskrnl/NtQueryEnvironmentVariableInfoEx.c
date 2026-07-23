/*
 * XREFs of NtQueryEnvironmentVariableInfoEx @ 0x140843FC0
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x140B3EEA0 (PopEnableSystemSleepCheckpoint.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     IoQueryEnvironmentVariableInfoEx @ 0x14079CE14 (IoQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall NtQueryEnvironmentVariableInfoEx(int a1, PDEVICE_OBJECT *a2, __int64 *a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariableInfo; // ebx

  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
  EnvironmentVariableInfo = IoQueryEnvironmentVariableInfoEx(a1, a2, a3, a4);
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
  KeLeaveCriticalRegion();
  return EnvironmentVariableInfo;
}
