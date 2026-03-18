/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140815350
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeUnregisterLogonSessionTerminatedRoutineEx(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  $8F5FBFE9BC2E192187C511DF41804DD6 *v7; // rbx
  $8F5FBFE9BC2E192187C511DF41804DD6 *v8; // rdx

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)RtlpBootStatHandleLock.TracingPrivate);
  v7 = *($8F5FBFE9BC2E192187C511DF41804DD6 **)&ExpPlatformBinaryLock.NextProcessor;
  v8 = &ExpPlatformBinaryLock.536;
  if ( !*(_QWORD *)&ExpPlatformBinaryLock.NextProcessor )
    goto LABEL_9;
  do
  {
    if ( *(_QWORD *)&v7[2].NextProcessor == a1 && *(_QWORD *)&v7[4].NextProcessor == a2 )
      break;
    v8 = v7;
    v7 = *($8F5FBFE9BC2E192187C511DF41804DD6 **)&v7->NextProcessor;
  }
  while ( v7 );
  if ( v7 )
  {
    *(_QWORD *)&v8->NextProcessor = *(_QWORD *)&v7->NextProcessor;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)RtlpBootStatHandleLock.TracingPrivate);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
LABEL_9:
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)RtlpBootStatHandleLock.TracingPrivate);
    KeLeaveCriticalRegion();
    return (unsigned int)-1073741275;
  }
  return v2;
}
