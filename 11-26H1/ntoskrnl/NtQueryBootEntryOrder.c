/*
 * XREFs of NtQueryBootEntryOrder @ 0x140B34660
 * Callers:
 *     DifNtQueryBootEntryOrderWrapper @ 0x140681380 (DifNtQueryBootEntryOrderWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x140908318 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtQueryBootEntryOrder(volatile void *Address, unsigned int *a2)
{
  KPROCESSOR_MODE PreviousMode; // si
  int ULongFromUser; // eax
  unsigned int v6; // eax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r14
  int EnvironmentVariable; // ebx
  unsigned int v11; // r8d
  unsigned __int16 *v12; // rcx
  _DWORD *i; // r9
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  v18 = 0;
  P = 0LL;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
    v6 = 4 * RtlReadULongFromUser(a2);
    v18 = v6;
    if ( !Address )
    {
      v18 = 0;
      v6 = 0;
    }
    if ( v6 )
      ProbeForWrite(Address, v6, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v18 = 4 * *a2;
    if ( !Address )
      v18 = 0;
  }
  if ( !v18
    || (result = ExLockUserBuffer((unsigned __int64)Address, v18, PreviousMode, 1, &v16, (struct _MDL **)&P),
        (int)result >= 0) )
  {
    v18 >>= 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
    v9 = v16;
    EnvironmentVariable = IoGetEnvironmentVariableEx(L"BootOrder", (__int64)&EfiBootVariablesGuid, v16, &v18, 0LL);
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
    KeLeaveCriticalRegion();
    if ( EnvironmentVariable < 0 )
    {
      if ( EnvironmentVariable == -1073741568 )
      {
        v18 = 0;
        EnvironmentVariable = 0;
      }
    }
    else
    {
      v11 = v18 >> 1;
      v12 = (unsigned __int16 *)(v9 + 2LL * ((v18 >> 1) - 1));
      for ( i = (_DWORD *)(v9 + 4LL * ((v18 >> 1) - 1)); v11; --v11 )
        *i-- = *v12--;
    }
    v14 = 2 * v18;
    v18 *= 2;
    if ( P )
    {
      ExUnlockUserBuffer((struct _MDL *)P);
      v14 = v18;
    }
    v15 = v14 >> 2;
    if ( PreviousMode )
      RtlWriteULongToUser(a2, v15);
    else
      *a2 = v15;
    return (unsigned int)EnvironmentVariable;
  }
  return result;
}
