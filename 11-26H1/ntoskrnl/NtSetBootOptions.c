/*
 * XREFs of NtSetBootOptions @ 0x14083E2B0
 * Callers:
 *     DifNtSetBootOptionsWrapper @ 0x14068A830 (DifNtSetBootOptionsWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     IoSetEnvironmentVariableEx @ 0x140906830 (IoSetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtSetBootOptions(unsigned int *Src, char a2)
{
  char v4; // si
  char PreviousMode; // bl
  unsigned int ULongFromUser; // eax
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // [rsp+34h] [rbp-44h] BYREF
  _DWORD v11[4]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]

  v10 = 0;
  v11[0] = 0;
  v12 = 0LL;
  v13 = 0LL;
  v4 = 0;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ULongFromUser = RtlReadULongFromUser(Src + 1);
  else
    ULongFromUser = Src[1];
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
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(&v12, Src, 0x18uLL);
    }
    else
    {
      RtlCopyVolatileMemory(&v12, Src, 0x18uLL);
    }
    DWORD1(v12) = 20;
    if ( (_DWORD)v12 == 1 )
    {
      v10 = DWORD2(v12);
      v11[0] = v13;
      if ( (a2 & 2) == 0 || (unsigned int)v13 <= 0xFFFF )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
        v4 = 1;
        if ( (a2 & 1) == 0 )
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
          if ( (a2 & 2) == 0
            || (v7 = IoSetEnvironmentVariableEx(
                       (unsigned int)L"BootNext",
                       (unsigned int)&EfiBootVariablesGuid,
                       (unsigned int)v11,
                       2,
                       1),
                v7 >= 0) )
          {
            v4 = 0;
            ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
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
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v7;
}
