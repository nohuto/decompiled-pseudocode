/*
 * XREFs of NtSetDriverEntryOrder @ 0x14083E500
 * Callers:
 *     DifNtSetDriverEntryOrderWrapper @ 0x14068AE60 (DifNtSetDriverEntryOrderWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     IoSetEnvironmentVariableEx @ 0x140906830 (IoSetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetDriverEntryOrder(volatile void *Address, unsigned int a2)
{
  void *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 i; // rcx
  struct _KTHREAD *v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // esi

  Pool2 = 0LL;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 )
    return 3221225474LL;
  if ( a2 > 0x3FFFFFFF )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return 3221225569LL;
  if ( a2 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return 3221225626LL;
    if ( PreviousMode )
      ProbeForRead(Address, 4 * a2, 4u);
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      if ( *((_DWORD *)Address + i) > 0xFFFFu )
      {
        ExFreePoolWithTag(Pool2, 0);
        return 3221225485LL;
      }
      *((_WORD *)Pool2 + i) = *((_WORD *)Address + 2 * i);
    }
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
  v10 = IoSetEnvironmentVariableEx(
          (unsigned int)L"DriverOrder",
          (unsigned int)&EfiDriverVariablesGuid,
          (_DWORD)Pool2,
          2 * a2,
          1);
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
  KeLeaveCriticalRegion();
  v11 = 0;
  if ( v10 != -1073741568 )
    v11 = v10;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v11;
}
