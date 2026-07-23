/*
 * XREFs of NtDeleteBootEntry @ 0x140843330
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x140A2EB60 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140A30478 (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __cdecl NtDeleteBootEntry(ULONG Id)
{
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // edi
  int v6; // [rsp+30h] [rbp-38h] BYREF
  wchar_t Dst[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) == 2 && !PsIsCurrentThreadInServerSilo() )
  {
    if ( Id > 0xFFFF )
      return -1073741811;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    swprintf_s(Dst, 9uLL, L"Boot%04X", Id);
    v6 = 0;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (unsigned int)Dst,
                            (unsigned int)&EfiBootVariablesGuid,
                            0,
                            (unsigned int)&v6,
                            0LL);
    if ( EnvironmentVariable == -1073741568 )
    {
      if ( ((2 * ((Id | (2 * Id)) & 0xC4444444)) & Id) == 0 )
      {
LABEL_14:
        ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
        KeLeaveCriticalRegion();
        return EnvironmentVariable;
      }
      swprintf_s(Dst, 9uLL, L"Boot%04x", Id);
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
  return -1073741822;
}
