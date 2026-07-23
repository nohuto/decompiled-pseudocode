/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x140843AF0
 * Callers:
 *     DifNtEnumerateSystemEnvironmentValuesExWrapper @ 0x14067AB50 (DifNtEnumerateSystemEnvironmentValuesExWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140A2EC3C (IoEnumerateEnvironmentVariablesEx.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 */

NTSTATUS __cdecl NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, PULONG BufferLength)
{
  __int64 v6; // r8
  KPROCESSOR_MODE PreviousMode; // bl
  int ULongFromUser; // eax
  unsigned int v9; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v12; // esi
  unsigned int v13[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  v14 = 0LL;
  v13[0] = 0;
  P[0] = 0LL;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(BufferLength);
    RtlWriteULongToUser(BufferLength, ULongFromUser);
    v9 = RtlReadULongFromUser(BufferLength);
    v13[0] = v9;
    if ( !Buffer )
    {
      v13[0] = 0;
      v9 = 0;
    }
    if ( v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v13[0] = *BufferLength;
    if ( !Buffer )
      v13[0] = 0;
  }
  if ( !v13[0] || (LOBYTE(v6) = PreviousMode, result = ExLockUserBuffer(Buffer, v13[0], v6, 1LL, &v14, P), result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    v12 = IoEnumerateEnvironmentVariablesEx(InformationClass, 0LL, v14, v13);
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    KeLeaveCriticalRegion();
    if ( P[0] )
      ExUnlockUserBuffer((struct _MDL *)P[0]);
    if ( PreviousMode )
      RtlWriteULongToUser(BufferLength, v13[0]);
    else
      *BufferLength = v13[0];
    return v12;
  }
  return result;
}
