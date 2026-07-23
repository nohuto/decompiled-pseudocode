/*
 * XREFs of NtSetBootEntryOrder @ 0x140844330
 * Callers:
 *     DifNtSetBootEntryOrderWrapper @ 0x14068E2A0 (DifNtSetBootEntryOrderWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x140A2EB60 (IoSetEnvironmentVariableEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  void *Pool2; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  __int64 i; // rbx
  ULONG ULongFromUser; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx
  NTSTATUS v11; // esi

  Pool2 = 0LL;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 )
    return -1073741822;
  if ( Count > 0x3FFFFFFF )
    return -1073741811;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
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
      if ( PreviousMode )
        ULongFromUser = RtlReadULongFromUser(&Ids[i]);
      else
        ULongFromUser = Ids[i];
      if ( ULongFromUser > 0xFFFF )
      {
        ExFreePoolWithTag(Pool2, 0);
        return -1073741811;
      }
      *((_WORD *)Pool2 + i) = ULongFromUser;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
  v10 = IoSetEnvironmentVariableEx(
          (unsigned int)L"BootOrder",
          (unsigned int)&EfiBootVariablesGuid,
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
