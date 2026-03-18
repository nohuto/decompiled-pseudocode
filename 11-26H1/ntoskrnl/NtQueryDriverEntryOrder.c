/*
 * XREFs of NtQueryDriverEntryOrder @ 0x14083DB70
 * Callers:
 *     DifNtQueryDriverEntryOrderWrapper @ 0x140681F00 (DifNtQueryDriverEntryOrderWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     HalGetEnvironmentVariableEx @ 0x140471D30 (HalGetEnvironmentVariableEx.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtQueryDriverEntryOrder(volatile void *Address, unsigned int *a2)
{
  __int64 v4; // r8
  KPROCESSOR_MODE PreviousMode; // di
  int ULongFromUser; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rbx
  int EnvironmentVariable; // edi
  unsigned int v13; // r8d
  unsigned __int16 *v14; // rcx
  _DWORD *i; // r9
  unsigned int v16; // ebx
  PVOID P[7]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v19 = 0LL;
  P[0] = 0LL;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
    v7 = 4 * *a2;
    v18 = v7;
    v8 = v7;
    if ( !Address )
    {
      v7 = 0;
      v18 = 0;
      v8 = 0;
    }
    if ( v8 )
      ProbeForWrite(Address, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v7 = Address != 0LL ? 4 * *a2 : 0;
    v18 = v7;
  }
  if ( !v7 || (LOBYTE(v4) = PreviousMode, result = ExLockUserBuffer(Address, v7, v4, 1LL, &v19, P), (int)result >= 0) )
  {
    v18 = v7 >> 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
    v11 = v19;
    EnvironmentVariable = HalGetEnvironmentVariableEx(L"DriverOrder", (__int64)&EfiDriverVariablesGuid, v19, &v18, 0LL);
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
      v13 = v18 >> 1;
      v14 = (unsigned __int16 *)(v11 + 2LL * ((v18 >> 1) - 1));
      for ( i = (_DWORD *)(v11 + 4LL * ((v18 >> 1) - 1)); v13; --v13 )
        *i-- = *v14--;
    }
    v16 = 2 * v18;
    if ( P[0] )
      ExUnlockUserBuffer((struct _MDL *)P[0]);
    *a2 = v16 >> 2;
    return (unsigned int)EnvironmentVariable;
  }
  return result;
}
