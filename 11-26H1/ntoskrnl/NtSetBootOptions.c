/*
 * XREFs of NtSetBootOptions @ 0x1408444F0
 * Callers:
 *     DifNtSetBootOptionsWrapper @ 0x14068E410 (DifNtSetBootOptionsWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x140A2EB60 (IoSetEnvironmentVariableEx.c)
 */

NTSTATUS __cdecl NtSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  char v2; // r14
  char v4; // si
  char PreviousMode; // bl
  unsigned int ULongFromUser; // eax
  NTSTATUS v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // [rsp+34h] [rbp-44h] BYREF
  _DWORD v11[4]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]

  v2 = FieldsToChange;
  v10 = 0;
  v11[0] = 0;
  v12 = 0LL;
  v13 = 0LL;
  v4 = 0;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ULongFromUser = RtlReadULongFromUser(&BootOptions->Length);
  else
    ULongFromUser = BootOptions->Length;
  v11[3] = ULongFromUser;
  if ( ULongFromUser >= 0x14 )
  {
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1) )
    {
      v7 = -1073741727;
      goto LABEL_28;
    }
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)BootOptions & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(&v12, BootOptions, 0x18uLL);
    }
    else
    {
      RtlCopyVolatileMemory(&v12, BootOptions, 0x18uLL);
    }
    DWORD1(v12) = 20;
    if ( (_DWORD)v12 == 1 )
    {
      v10 = DWORD2(v12);
      v11[0] = v13;
      if ( (v2 & 2) == 0 || (unsigned int)v13 <= 0xFFFF )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
        v4 = 1;
        if ( (v2 & 1) == 0 )
          goto LABEL_34;
        if ( v10 == -1 )
        {
          v10 = 0xFFFF;
        }
        else if ( v10 > 0xFFFE )
        {
          v10 = 65534;
        }
        v7 = IoSetEnvironmentVariableEx(
               (unsigned int)L"Timeout",
               (unsigned int)&EfiBootVariablesGuid,
               (unsigned int)&v10,
               2,
               1);
        if ( v7 >= 0 )
        {
LABEL_34:
          if ( (v2 & 2) == 0
            || (v7 = IoSetEnvironmentVariableEx(
                       (unsigned int)L"BootNext",
                       (unsigned int)&EfiBootVariablesGuid,
                       (unsigned int)v11,
                       2,
                       1),
                v7 >= 0) )
          {
            v4 = 0;
            ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
            KeLeaveCriticalRegion();
            v7 = 0;
          }
        }
        goto LABEL_28;
      }
    }
  }
  v7 = -1073741811;
LABEL_28:
  if ( v4 )
  {
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    KeLeaveCriticalRegion();
  }
  return v7;
}
