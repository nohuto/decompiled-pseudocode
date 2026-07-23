/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutineEx @ 0x14081B500
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeUnregisterLogonSessionTerminatedRoutineEx(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v7; // rbx
  unsigned __int16 *p_UserAffinityPrimaryGroup; // rdx

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  v7 = *(unsigned __int16 **)&ExpPlatformBinaryLock.UserAffinityPrimaryGroup;
  p_UserAffinityPrimaryGroup = &ExpPlatformBinaryLock.UserAffinityPrimaryGroup;
  if ( !*(_QWORD *)&ExpPlatformBinaryLock.UserAffinityPrimaryGroup )
    goto LABEL_9;
  do
  {
    if ( *((_QWORD *)v7 + 1) == a1 && *((_QWORD *)v7 + 2) == a2 )
      break;
    p_UserAffinityPrimaryGroup = v7;
    v7 = *(unsigned __int16 **)v7;
  }
  while ( v7 );
  if ( v7 )
  {
    *(_QWORD *)p_UserAffinityPrimaryGroup = *(_QWORD *)v7;
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
LABEL_9:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegion();
    return (unsigned int)-1073741275;
  }
  return v2;
}
