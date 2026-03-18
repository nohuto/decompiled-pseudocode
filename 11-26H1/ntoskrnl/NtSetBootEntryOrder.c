/*
 * XREFs of NtSetBootEntryOrder @ 0x14083E0F0
 * Callers:
 *     DifNtSetBootEntryOrderWrapper @ 0x14068A6C0 (DifNtSetBootEntryOrderWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     IoSetEnvironmentVariableEx @ 0x140906830 (IoSetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetBootEntryOrder(volatile void *Address, unsigned int a2)
{
  void *Pool2; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  __int64 i; // rbx
  unsigned int ULongFromUser; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebx
  unsigned int v11; // esi

  Pool2 = 0LL;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 )
    return 3221225474LL;
  if ( a2 > 0x3FFFFFFF )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
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
      if ( PreviousMode )
        ULongFromUser = RtlReadULongFromUser((unsigned int *)Address + i);
      else
        ULongFromUser = *((_DWORD *)Address + i);
      if ( ULongFromUser > 0xFFFF )
      {
        ExFreePoolWithTag(Pool2, 0);
        return 3221225485LL;
      }
      *((_WORD *)Pool2 + i) = ULongFromUser;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
  v10 = IoSetEnvironmentVariableEx(
          (unsigned int)L"BootOrder",
          (unsigned int)&EfiBootVariablesGuid,
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
