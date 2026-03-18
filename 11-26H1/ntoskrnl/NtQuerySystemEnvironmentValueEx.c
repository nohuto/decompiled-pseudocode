/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x140907320
 * Callers:
 *     DifNtQuerySystemEnvironmentValueExWrapper @ 0x140685B90 (DifNtQuerySystemEnvironmentValueExWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCheckTokenMembershipEx @ 0x140499FF0 (RtlCheckTokenMembershipEx.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140907830 (ExGetFirmwareEnvironmentVariable.c)
 *     ExLockUserBuffer @ 0x140907E40 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x140908318 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x1409D6220 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B46CC8 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySystemEnvironmentValueEx(
        unsigned int *a1,
        volatile void *a2,
        volatile void *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int v5; // edi
  _WORD *v9; // rsi
  BOOLEAN v10; // di
  int ULongFromUser; // eax
  unsigned __int16 v12; // di
  void *ULong64FromUser; // rax
  void *v14; // r15
  unsigned int *v15; // rsi
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  _WORD *Pool2; // rax
  int EnvironmentVariable; // edi
  __int64 v21; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v24; // eax
  char v25; // cl
  char v26[4]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-A4h] BYREF
  int v28; // [rsp+38h] [rbp-A0h] BYREF
  int v29; // [rsp+3Ch] [rbp-9Ch]
  void *v30; // [rsp+48h] [rbp-90h]
  PVOID P[2]; // [rsp+50h] [rbp-88h] BYREF
  unsigned int *v32; // [rsp+60h] [rbp-78h]
  __int128 v33; // [rsp+70h] [rbp-68h] BYREF
  __int64 v34; // [rsp+80h] [rbp-58h]
  __int128 v35; // [rsp+88h] [rbp-50h] BYREF

  v5 = (int)a4;
  v32 = a4;
  v9 = 0LL;
  v30 = 0LL;
  v35 = 0LL;
  v27 = 0;
  v28 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, v5, (__int64)a5);
  v10 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( v10 )
    goto LABEL_4;
  if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    v10 = ExpFirmwareAccessAppContainerCheck(1LL);
  if ( v10 )
    goto LABEL_4;
  v26[0] = 0;
  v24 = RtlCheckTokenMembershipEx(0LL, SeExports->SeUserModeDriversSid, 0, v26);
  v25 = v26[0];
  if ( v24 < 0 )
    v25 = 0;
  if ( v25 )
  {
LABEL_4:
    if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] == 2 )
    {
      if ( ((unsigned __int8)a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)P = 0LL;
      ULongFromUser = RtlReadULongFromUser(a1);
      v12 = ULongFromUser;
      LODWORD(P[0]) = ULongFromUser;
      ULong64FromUser = (void *)RtlReadULong64FromUser(a1 + 2);
      v14 = ULong64FromUser;
      P[1] = ULong64FromUser;
      v33 = *(_OWORD *)P;
      if ( v12 )
      {
        ProbeForRead(ULong64FromUser, v12, 2u);
        v34 = 1LL;
        ProbeForRead(a2, 1uLL, 4u);
        v15 = v32;
        v16 = RtlReadULongFromUser(v32);
        RtlWriteULongToUser(v15, v16);
        v17 = RtlReadULongFromUser(v15);
        v27 = v17;
        if ( !a3 )
        {
          v27 = 0;
          v17 = 0;
        }
        if ( v17 )
          ProbeForWrite(a3, v17, 1u);
        if ( a5 )
        {
          v18 = RtlReadULongFromUser(a5);
          RtlWriteULongToUser(a5, v18);
        }
        RtlCopyFromUser(&v35, (void *)a2, 0x10uLL);
        Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
        v9 = Pool2;
        v30 = Pool2;
        if ( Pool2 )
        {
          RtlCopyFromUser(Pool2, v14, v12);
          v9[(unsigned __int64)v12 >> 1] = 0;
          P[0] = 0LL;
          *(_QWORD *)&v33 = 0LL;
          if ( !v27
            || (LOBYTE(v21) = 1,
                EnvironmentVariable = ExLockUserBuffer(a3, v27, v21, 1LL, &v33, P),
                EnvironmentVariable >= 0) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (_DWORD)v9,
                                    (unsigned int)&v35,
                                    v33,
                                    (unsigned int)&v27,
                                    (__int64)&v28);
            ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.WriteOperationCount);
            KeLeaveCriticalRegion();
            if ( P[0] )
              ExUnlockUserBuffer((struct _MDL *)P[0]);
          }
          if ( (int)(EnvironmentVariable + 0x80000000) < 0 || EnvironmentVariable == -1073741789 )
            RtlWriteULongToUser(v32, v27);
          if ( a5 && EnvironmentVariable >= 0 )
            RtlWriteULongToUser(a5, v28);
        }
        else
        {
          EnvironmentVariable = -1073741670;
          v29 = -1073741670;
        }
      }
      else
      {
        EnvironmentVariable = -1073741819;
        v29 = -1073741819;
      }
    }
    else
    {
      EnvironmentVariable = -1073741822;
    }
  }
  else
  {
    EnvironmentVariable = -1073741727;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)EnvironmentVariable;
}
