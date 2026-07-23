/*
 * XREFs of NtQueryDriverEntryOrder @ 0x140843DB0
 * Callers:
 *     DifNtQueryDriverEntryOrderWrapper @ 0x140685AE0 (DifNtQueryDriverEntryOrderWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     HalGetEnvironmentVariableEx @ 0x14046B4B0 (HalGetEnvironmentVariableEx.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 */

NTSTATUS __cdecl NtQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v4; // r8
  KPROCESSOR_MODE PreviousMode; // di
  int ULongFromUser; // eax
  ULONG v7; // ebx
  ULONG v8; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rbx
  NTSTATUS EnvironmentVariable; // edi
  ULONG v13; // r8d
  unsigned __int16 *v14; // rcx
  _DWORD *i; // r9
  unsigned int v16; // ebx
  PVOID P[7]; // [rsp+40h] [rbp-38h] BYREF
  ULONG v18; // [rsp+90h] [rbp+18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v19 = 0LL;
  P[0] = 0LL;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(Count);
    RtlWriteULongToUser(Count, ULongFromUser);
    v7 = 4 * *Count;
    v18 = v7;
    v8 = v7;
    if ( !Ids )
    {
      v7 = 0;
      v18 = 0;
      v8 = 0;
    }
    if ( v8 )
      ProbeForWrite(Ids, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v7 = Ids != 0LL ? 4 * *Count : 0;
    v18 = v7;
  }
  if ( !v7 || (LOBYTE(v4) = PreviousMode, result = ExLockUserBuffer(Ids, v7, v4, 1LL, &v19, P), result >= 0) )
  {
    v18 = v7 >> 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    v11 = v19;
    EnvironmentVariable = HalGetEnvironmentVariableEx(L"DriverOrder", (__int64)&EfiDriverVariablesGuid, v19, &v18, 0LL);
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
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
    *Count = v16 >> 2;
    return EnvironmentVariable;
  }
  return result;
}
