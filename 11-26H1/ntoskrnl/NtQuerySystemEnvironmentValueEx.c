/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x140A2F580
 * Callers:
 *     DifNtQuerySystemEnvironmentValueExWrapper @ 0x140689770 (DifNtQuerySystemEnvironmentValueExWrapper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCheckTokenMembershipEx @ 0x140493B40 (RtlCheckTokenMembershipEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PsIsProcessAppContainer @ 0x1409A7110 (PsIsProcessAppContainer.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140A2F990 (ExGetFirmwareEnvironmentVariable.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x140A30478 (IoGetEnvironmentVariableEx.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B48CF8 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        PULONG ValueLength,
        PULONG Attributes)
{
  int v5; // edi
  _WORD *v9; // rsi
  __int64 v10; // rdx
  BOOLEAN v11; // di
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  int ULongFromUser; // eax
  unsigned __int16 v15; // di
  void *ULong64FromUser; // rax
  void *v17; // r15
  unsigned int *v18; // rsi
  int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  _WORD *Pool2; // rax
  NTSTATUS EnvironmentVariable; // edi
  __int64 v24; // r8
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v27; // eax
  BOOLEAN v28; // cl
  BOOLEAN IsMember[4]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-A4h] BYREF
  int v31; // [rsp+38h] [rbp-A0h] BYREF
  int v32; // [rsp+3Ch] [rbp-9Ch]
  void *v33; // [rsp+48h] [rbp-90h]
  PVOID P[2]; // [rsp+50h] [rbp-88h] BYREF
  unsigned int *v35; // [rsp+60h] [rbp-78h]
  __int128 v36; // [rsp+70h] [rbp-68h] BYREF
  __int64 v37; // [rsp+80h] [rbp-58h]
  __int128 v38; // [rsp+88h] [rbp-50h] BYREF

  v5 = (int)ValueLength;
  v35 = ValueLength;
  v9 = 0LL;
  v33 = 0LL;
  v38 = 0LL;
  v30 = 0;
  v31 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable(
             (_DWORD)VariableName,
             (_DWORD)VendorGuid,
             (_DWORD)Value,
             v5,
             (__int64)Attributes);
  v11 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( v11 )
    goto LABEL_4;
  if ( PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process, v10, v12, v13) )
    v11 = ExpFirmwareAccessAppContainerCheck(1LL);
  if ( v11 )
    goto LABEL_4;
  IsMember[0] = 0;
  v27 = RtlCheckTokenMembershipEx(0LL, SeExports->SeUserModeDriversSid, 0, IsMember);
  v28 = IsMember[0];
  if ( v27 < 0 )
    v28 = 0;
  if ( v28 )
  {
LABEL_4:
    if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) == 2 )
    {
      if ( ((unsigned __int8)VariableName & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)P = 0LL;
      ULongFromUser = RtlReadULongFromUser((unsigned int *)&VariableName->Length);
      v15 = ULongFromUser;
      LODWORD(P[0]) = ULongFromUser;
      ULong64FromUser = (void *)RtlReadULong64FromUser(&VariableName->Buffer);
      v17 = ULong64FromUser;
      P[1] = ULong64FromUser;
      v36 = *(_OWORD *)P;
      if ( v15 )
      {
        ProbeForRead(ULong64FromUser, v15, 2u);
        v37 = 1LL;
        ProbeForRead((volatile void *)VendorGuid, 1uLL, 4u);
        v18 = v35;
        v19 = RtlReadULongFromUser(v35);
        RtlWriteULongToUser(v18, v19);
        v20 = RtlReadULongFromUser(v18);
        v30 = v20;
        if ( !Value )
        {
          v30 = 0;
          v20 = 0;
        }
        if ( v20 )
          ProbeForWrite(Value, v20, 1u);
        if ( Attributes )
        {
          v21 = RtlReadULongFromUser(Attributes);
          RtlWriteULongToUser(Attributes, v21);
        }
        RtlCopyFromUser(&v38, (void *)VendorGuid, 0x10uLL);
        Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
        v9 = Pool2;
        v33 = Pool2;
        if ( Pool2 )
        {
          RtlCopyFromUser(Pool2, v17, v15);
          v9[(unsigned __int64)v15 >> 1] = 0;
          P[0] = 0LL;
          *(_QWORD *)&v36 = 0LL;
          if ( !v30
            || (LOBYTE(v24) = 1,
                EnvironmentVariable = ExLockUserBuffer(Value, v30, v24, 1LL, &v36, P),
                EnvironmentVariable >= 0) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (_DWORD)v9,
                                    (unsigned int)&v38,
                                    v36,
                                    (unsigned int)&v30,
                                    (__int64)&v31);
            ExReleaseFastMutexUnsafe((PFAST_MUTEX)&ExSaPageGroupDescriptorArrayLock.QueuedScb);
            KeLeaveCriticalRegion();
            if ( P[0] )
              ExUnlockUserBuffer((struct _MDL *)P[0]);
          }
          if ( (int)(EnvironmentVariable + 0x80000000) < 0 || EnvironmentVariable == -1073741789 )
            RtlWriteULongToUser(v35, v30);
          if ( Attributes && EnvironmentVariable >= 0 )
            RtlWriteULongToUser(Attributes, v31);
        }
        else
        {
          EnvironmentVariable = -1073741670;
          v32 = -1073741670;
        }
      }
      else
      {
        EnvironmentVariable = -1073741819;
        v32 = -1073741819;
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
  return EnvironmentVariable;
}
