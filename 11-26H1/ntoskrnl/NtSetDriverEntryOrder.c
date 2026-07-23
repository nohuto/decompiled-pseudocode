/*
 * XREFs of NtSetDriverEntryOrder @ 0x140844740
 * Callers:
 *     DifNtSetDriverEntryOrderWrapper @ 0x14068EA40 (DifNtSetDriverEntryOrderWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x140A2EB60 (IoSetEnvironmentVariableEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  void *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 i; // rcx
  struct _KTHREAD *v9; // rax
  NTSTATUS v10; // ebx
  NTSTATUS v11; // esi

  Pool2 = 0LL;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 )
    return -1073741822;
  if ( Count > 0x3FFFFFFF )
    return -1073741811;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return -1073741727;
  if ( Count )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return -1073741670;
    if ( PreviousMode )
      ProbeForRead(Ids, 4 * Count, 4u);
    for ( i = 0LL; (unsigned int)i < Count; i = (unsigned int)(i + 1) )
    {
      if ( Ids[i] > 0xFFFF )
      {
        ExFreePoolWithTag(Pool2, 0);
        return -1073741811;
      }
      *((_WORD *)Pool2 + i) = Ids[i];
    }
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
  v10 = IoSetEnvironmentVariableEx(
          (unsigned int)L"DriverOrder",
          (unsigned int)&EfiDriverVariablesGuid,
          (_DWORD)Pool2,
          2 * Count,
          1);
  ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
  KeLeaveCriticalRegion();
  v11 = 0;
  if ( v10 != -1073741568 )
    v11 = v10;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v11;
}
