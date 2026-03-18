/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x14083D8B0
 * Callers:
 *     DifNtEnumerateSystemEnvironmentValuesExWrapper @ 0x140676F70 (DifNtEnumerateSystemEnvironmentValuesExWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1409069DC (IoEnumerateEnvironmentVariablesEx.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtEnumerateSystemEnvironmentValuesEx(unsigned int a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // r8
  KPROCESSOR_MODE PreviousMode; // bl
  int ULongFromUser; // eax
  unsigned int v9; // eax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // esi
  unsigned int v13[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  v14 = 0LL;
  v13[0] = 0;
  P[0] = 0LL;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a3);
    RtlWriteULongToUser(a3, ULongFromUser);
    v9 = RtlReadULongFromUser(a3);
    v13[0] = v9;
    if ( !a2 )
    {
      v13[0] = 0;
      v9 = 0;
    }
    if ( v9 )
      ProbeForWrite(a2, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v13[0] = *a3;
    if ( !a2 )
      v13[0] = 0;
  }
  if ( !v13[0] || (LOBYTE(v6) = PreviousMode, result = ExLockUserBuffer(a2, v13[0], v6, 1LL, &v14, P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
    v12 = IoEnumerateEnvironmentVariablesEx(a1, 0LL, v14, v13);
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
    KeLeaveCriticalRegion();
    if ( P[0] )
      ExUnlockUserBuffer((struct _MDL *)P[0]);
    if ( PreviousMode )
      RtlWriteULongToUser(a3, v13[0]);
    else
      *a3 = v13[0];
    return v12;
  }
  return result;
}
