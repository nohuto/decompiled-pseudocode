/*
 * XREFs of NtQueryBootOptions @ 0x140A2E7B0
 * Callers:
 *     DifNtQueryBootOptionsWrapper @ 0x1406850D0 (DifNtQueryBootOptionsWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     IoGetEnvironmentVariableEx @ 0x140A30478 (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __cdecl NtQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  KPROCESSOR_MODE PreviousMode; // si
  ULONG v5; // ebx
  int ULongFromUser; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // eax
  NTSTATUS v10; // ebx
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  unsigned int v13; // [rsp+34h] [rbp-54h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h] BYREF
  int v15; // [rsp+40h] [rbp-48h] BYREF
  ULONG v16; // [rsp+44h] [rbp-44h]
  __int128 Src; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]

  Src = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v13 = 0;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(BootOptionsLength);
    RtlWriteULongToUser(BootOptionsLength, ULongFromUser);
    v5 = BootOptions != 0LL ? RtlReadULongFromUser(BootOptionsLength) : 0;
    v16 = v5;
    if ( v5 )
      ProbeForWrite(BootOptions, v5, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v5 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v16 = v5;
  }
  if ( v5 >= 0x16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    v13 = 4;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (unsigned int)L"Timeout",
                            (unsigned int)&EfiBootVariablesGuid,
                            (unsigned int)&v14,
                            (unsigned int)&v13,
                            0LL);
    v10 = EnvironmentVariable;
    if ( EnvironmentVariable == -1073741568 )
    {
LABEL_11:
      LODWORD(v14) = -1;
      goto LABEL_12;
    }
    if ( EnvironmentVariable == -1073741789 )
    {
      LODWORD(v14) = -2;
    }
    else
    {
      if ( EnvironmentVariable )
        goto LABEL_20;
      if ( v13 > 2 )
      {
        if ( (_DWORD)v14 == -1 )
          goto LABEL_11;
        if ( (unsigned int)v14 > 0xFFFE )
          LODWORD(v14) = 65534;
      }
      if ( (_DWORD)v14 == 0xFFFF )
        goto LABEL_11;
    }
LABEL_12:
    v13 = 4;
    v11 = IoGetEnvironmentVariableEx(
            (unsigned int)L"BootCurrent",
            (unsigned int)&EfiBootVariablesGuid,
            (unsigned int)&v14 + 4,
            (unsigned int)&v13,
            0LL);
    v10 = v11;
    if ( v11 == -1073741789 || v11 == -1073741568 )
    {
      HIDWORD(v14) = -2;
LABEL_17:
      v13 = 2;
      v12 = IoGetEnvironmentVariableEx(
              (unsigned int)L"BootNext",
              (unsigned int)&EfiBootVariablesGuid,
              (unsigned int)&v15,
              (unsigned int)&v13,
              0LL);
      v10 = v12;
      if ( v12 == -1073741789 || v12 == -1073741568 )
      {
        v15 = -2;
        v10 = 0;
      }
      else if ( !v12 && v13 > 2 )
      {
        v15 = (unsigned __int16)v15;
      }
      goto LABEL_20;
    }
    if ( !v11 )
    {
      if ( v13 > 2 )
        HIDWORD(v14) = WORD2(v14);
      goto LABEL_17;
    }
LABEL_20:
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
    KeLeaveCriticalRegion();
    if ( !v10 && BootOptions )
    {
      *(_QWORD *)&Src = 0x1600000001LL;
      *((_QWORD *)&Src + 1) = v14;
      LODWORD(v18) = v15;
      WORD2(v18) = 0;
    }
    goto LABEL_21;
  }
  v10 = -1073741789;
LABEL_21:
  if ( !v10 && BootOptions )
  {
    if ( PreviousMode )
      RtlCopyToUser(BootOptions, &Src, 0x16uLL);
    else
      RtlCopyVolatileMemory(BootOptions, &Src, 0x16uLL);
  }
  if ( PreviousMode )
    RtlWriteULongToUser(BootOptionsLength, 22);
  else
    *BootOptionsLength = 22;
  return v10;
}
