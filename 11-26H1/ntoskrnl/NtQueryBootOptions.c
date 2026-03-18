/*
 * XREFs of NtQueryBootOptions @ 0x140906480
 * Callers:
 *     DifNtQueryBootOptionsWrapper @ 0x1406814F0 (DifNtQueryBootOptionsWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     IoGetEnvironmentVariableEx @ 0x140908318 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtQueryBootOptions(void *a1, unsigned int *a2)
{
  KPROCESSOR_MODE PreviousMode; // si
  unsigned int v5; // ebx
  int ULongFromUser; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // [rsp+34h] [rbp-54h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h] BYREF
  int v15; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-44h]
  __int128 Src; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]

  Src = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v13 = 0;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
    v5 = a1 != 0LL ? RtlReadULongFromUser(a2) : 0;
    v16 = v5;
    if ( v5 )
      ProbeForWrite(a1, v5, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v5 = a1 != 0LL ? *a2 : 0;
    v16 = v5;
  }
  if ( v5 >= 0x16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
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
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
    KeLeaveCriticalRegion();
    if ( !v10 && a1 )
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
  if ( !v10 && a1 )
  {
    if ( PreviousMode )
      RtlCopyToUser(a1, &Src, 0x16uLL);
    else
      RtlCopyVolatileMemory(a1, &Src, 0x16uLL);
  }
  if ( PreviousMode )
    RtlWriteULongToUser(a2, 22);
  else
    *a2 = 22;
  return v10;
}
