/*
 * XREFs of NtDeleteBootEntry @ 0x14083D0F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     IoSetEnvironmentVariableEx @ 0x140906830 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140908318 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtDeleteBootEntry(unsigned int a1)
{
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // edi
  int v6; // [rsp+30h] [rbp-38h] BYREF
  wchar_t Dst[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] == 2 && !PsIsCurrentThreadInServerSilo() )
  {
    if ( a1 > 0xFFFF )
      return 3221225485LL;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
    swprintf_s(Dst, 9uLL, L"Boot%04X", a1);
    v6 = 0;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (unsigned int)Dst,
                            (unsigned int)&EfiBootVariablesGuid,
                            0,
                            (unsigned int)&v6,
                            0LL);
    if ( EnvironmentVariable == -1073741568 )
    {
      if ( ((2 * ((a1 | (2 * a1)) & 0xC4444444)) & a1) == 0 )
      {
LABEL_14:
        ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
        KeLeaveCriticalRegion();
        return EnvironmentVariable;
      }
      swprintf_s(Dst, 9uLL, L"Boot%04x", a1);
      v6 = 0;
      EnvironmentVariable = IoGetEnvironmentVariableEx(
                              (unsigned int)Dst,
                              (unsigned int)&EfiBootVariablesGuid,
                              0,
                              (unsigned int)&v6,
                              0LL);
    }
    if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
      EnvironmentVariable = IoSetEnvironmentVariableEx((unsigned int)Dst, (unsigned int)&EfiBootVariablesGuid, 0, 0, 1);
    goto LABEL_14;
  }
  return 3221225474LL;
}
