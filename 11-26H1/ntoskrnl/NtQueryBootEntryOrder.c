/*
 * XREFs of NtQueryBootEntryOrder @ 0x140A2E370
 * Callers:
 *     DifNtQueryBootEntryOrderWrapper @ 0x140684F60 (DifNtQueryBootEntryOrderWrapper.c)
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
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x140A30478 (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __cdecl NtQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v4; // r8
  KPROCESSOR_MODE PreviousMode; // si
  int ULongFromUser; // eax
  ULONG v7; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r14
  NTSTATUS EnvironmentVariable; // ebx
  ULONG v12; // r8d
  unsigned __int16 *v13; // rcx
  _DWORD *i; // r9
  unsigned int v15; // eax
  ULONG v16; // eax
  __int64 v17; // [rsp+38h] [rbp-30h] BYREF
  PVOID P[5]; // [rsp+40h] [rbp-28h] BYREF
  ULONG v19; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v19 = 0;
  P[0] = 0LL;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(Count);
    RtlWriteULongToUser(Count, ULongFromUser);
    v7 = 4 * RtlReadULongFromUser(Count);
    v19 = v7;
    if ( !Ids )
    {
      v19 = 0;
      v7 = 0;
    }
    if ( v7 )
      ProbeForWrite(Ids, v7, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v19 = 4 * *Count;
    if ( !Ids )
      v19 = 0;
  }
  if ( !v19 || (LOBYTE(v4) = PreviousMode, result = ExLockUserBuffer(Ids, v19, v4, 1LL, &v17, P), result >= 0) )
  {
    v19 >>= 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    v10 = v17;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (unsigned int)L"BootOrder",
                            (unsigned int)&EfiBootVariablesGuid,
                            v17,
                            (unsigned int)&v19,
                            0LL);
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    KeLeaveCriticalRegion();
    if ( EnvironmentVariable < 0 )
    {
      if ( EnvironmentVariable == -1073741568 )
      {
        v19 = 0;
        EnvironmentVariable = 0;
      }
    }
    else
    {
      v12 = v19 >> 1;
      v13 = (unsigned __int16 *)(v10 + 2LL * ((v19 >> 1) - 1));
      for ( i = (_DWORD *)(v10 + 4LL * ((v19 >> 1) - 1)); v12; --v12 )
        *i-- = *v13--;
    }
    v15 = 2 * v19;
    v19 *= 2;
    if ( P[0] )
    {
      ExUnlockUserBuffer((struct _MDL *)P[0]);
      v15 = v19;
    }
    v16 = v15 >> 2;
    if ( PreviousMode )
      RtlWriteULongToUser(Count, v16);
    else
      *Count = v16;
    return EnvironmentVariable;
  }
  return result;
}
