/*
 * XREFs of PsOpenProcess @ 0x1408F6200
 * Callers:
 *     NtAlpcOpenSenderProcess @ 0x1408ECAD0 (NtAlpcOpenSenderProcess.c)
 *     NtOpenProcess @ 0x1408F61D0 (NtOpenProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14043B0F0 (SepCreateAccessStateFromSubjectContext.c)
 *     PspLockThreadSecurityShared @ 0x140442F10 (PspLockThreadSecurityShared.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 */

__int64 __fastcall PsOpenProcess(HANDLE *a1, int a2, unsigned int *a3, _OWORD *a4, char a5, KPROCESSOR_MODE a6)
{
  PETHREAD v9; // r13
  int v10; // r12d
  _KPROCESS *v11; // rsi
  __int64 ULong64FromUser; // rax
  bool v13; // r15
  char v14; // al
  int v15; // ebx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  int i; // r13d
  _DWORD *v19; // r12
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v21; // r14
  struct _LIST_ENTRY *v22; // r15
  struct _LIST_ENTRY *v23; // rax
  ULONG v24; // ebx
  int v25; // r14d
  KPROCESSOR_MODE AccessMode; // r15
  KPROCESSOR_MODE v27; // dl
  NTSTATUS v28; // eax
  int v30; // eax
  PETHREAD v31; // rbx
  char v32; // [rsp+40h] [rbp-2F8h] BYREF
  bool v33; // [rsp+41h] [rbp-2F7h] BYREF
  int v34; // [rsp+48h] [rbp-2F0h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-2E8h] BYREF
  int ULongFromUser; // [rsp+58h] [rbp-2E0h] BYREF
  PETHREAD Thread; // [rsp+60h] [rbp-2D8h] BYREF
  ULONG HandleAttributes[2]; // [rsp+68h] [rbp-2D0h] BYREF
  PEPROCESS Process; // [rsp+70h] [rbp-2C8h] BYREF
  int Flink; // [rsp+78h] [rbp-2C0h]
  HANDLE Handle; // [rsp+88h] [rbp-2B0h] BYREF
  HANDLE *v42; // [rsp+90h] [rbp-2A8h]
  HANDLE ProcessId[2]; // [rsp+98h] [rbp-2A0h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-290h]
  __int64 v45; // [rsp+B0h] [rbp-288h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+C0h] [rbp-278h] BYREF
  _QWORD v47[28]; // [rsp+160h] [rbp-1D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+240h] [rbp-F8h] BYREF
  unsigned int *v49; // [rsp+250h] [rbp-E8h]
  __int64 v50; // [rsp+258h] [rbp-E0h]
  int *v51; // [rsp+260h] [rbp-D8h]
  __int64 v52; // [rsp+268h] [rbp-D0h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+270h] [rbp-C8h] BYREF
  unsigned int *v54; // [rsp+290h] [rbp-A8h]
  __int64 v55; // [rsp+298h] [rbp-A0h]
  int *p_ULongFromUser; // [rsp+2A0h] [rbp-98h]
  __int64 v57; // [rsp+2A8h] [rbp-90h]
  ULONG *v58; // [rsp+2B0h] [rbp-88h]
  __int64 v59; // [rsp+2B8h] [rbp-80h]
  char *v60; // [rsp+2C0h] [rbp-78h]
  __int64 v61; // [rsp+2C8h] [rbp-70h]
  bool *v62; // [rsp+2D0h] [rbp-68h]
  __int64 v63; // [rsp+2D8h] [rbp-60h]
  PETHREAD *p_Thread; // [rsp+2E0h] [rbp-58h]
  __int64 v65; // [rsp+2E8h] [rbp-50h]

  v42 = a1;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v47, 0, sizeof(v47));
  *(_OWORD *)ProcessId = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v10 = 0;
  v34 = 0;
  v11 = 0LL;
  Process = 0LL;
  Flink = -1;
  if ( a5 )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    HandleAttributes[1] = HIDWORD(ULong64FromUser);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
    v44 = 1LL;
    ProbeForRead(a3, 1uLL, 4u);
    v45 = RtlReadULong64FromUser(a3 + 4);
    v13 = v45 != 0;
    v33 = v45 != 0;
    ULongFromUser = RtlReadULongFromUser(a3 + 6);
    HandleAttributes[0] = ULongFromUser & 0x1DF2;
    v35 = HandleAttributes[0];
    LODWORD(Thread) = HandleAttributes[0];
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(ProcessId, a4, 0x10uLL);
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    v32 = v14;
  }
  else
  {
    v13 = *((_QWORD *)a3 + 2) != 0LL;
    v30 = 73714;
    if ( a6 )
      v30 = 7666;
    HandleAttributes[0] = a3[6] & v30;
    if ( a4 )
    {
      *(_OWORD *)ProcessId = *a4;
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
  }
  if ( v13 || !v14 )
  {
    v15 = -1073741776;
    goto LABEL_30;
  }
  if ( ProcessId[1] )
  {
    Thread = 0LL;
    v15 = PsLookupThreadByThreadId(ProcessId[1], &Thread);
    if ( v15 >= 0 )
    {
      v31 = Thread;
      if ( (HANDLE)Thread[1].CycleTime == ProcessId[0] )
      {
        v11 = Thread->Process;
        ObfReferenceObjectWithTag(v11, 0x746C6644u);
        Process = v11;
        v9 = v31;
        v15 = 0;
      }
      else
      {
        ObfDereferenceObject(Thread);
        v15 = -1073741813;
      }
    }
    if ( v15 < 0 )
      goto LABEL_30;
    ObfDereferenceObject(v9);
  }
  else
  {
    v15 = PsLookupProcessByProcessId(ProcessId[0], &Process);
    v11 = Process;
    if ( v15 < 0 )
      goto LABEL_30;
  }
  Flink = (int)v11[1].Header.WaitListHead.Flink;
  for ( i = 0; ; i = 1 )
  {
    v19 = (_DWORD *)PsProcessType + 19;
    CurrentThread = KeGetCurrentThread();
    v21 = (__int64)CurrentThread->ApcState.Process;
    *(_QWORD *)&UserData.Size = 0LL;
    v50 = *(_QWORD *)(v21 + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      Thread = KeGetCurrentThread();
      PspLockThreadSecurityShared((__int64)CurrentThread, (__int64)Thread, v16, v17);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v22 = (struct _LIST_ENTRY *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v22, 0x75536553u);
        UserData.Size = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v22 = 0LL;
      }
      PspUnlockThreadSecurityShared((__int64)CurrentThread, Thread);
    }
    else
    {
      v22 = 0LL;
    }
    UserData.Ptr = (ULONGLONG)v22;
    v23 = (struct _LIST_ENTRY *)PsReferencePrimaryTokenWithTag(v21, 0x75536553u, v16, v17);
    v49 = (unsigned int *)v23;
    if ( SeTokenLeakTracking )
    {
      if ( v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v23[71].Blink[17].Blink + 1);
        if ( v23 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
      if ( v22 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v22[71].Blink[17].Blink + 1);
        if ( v22 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
    }
    v15 = SepCreateAccessStateFromSubjectContext(&UserData, &PassedAccessState, v47, a2, v19);
    if ( v15 < 0 )
    {
      v10 = 0;
      goto LABEL_30;
    }
    v10 = 1;
    v34 = 1;
    v24 = HandleAttributes[0];
    v25 = HandleAttributes[0] & 0x400;
    if ( (HandleAttributes[0] & 0x400) == 0 || i )
    {
      AccessMode = a6;
      v27 = a6;
    }
    else
    {
      v27 = 1;
      AccessMode = a6;
    }
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v27) )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    v28 = ObOpenObjectByPointer(v11, v24, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, AccessMode, &Handle);
    v15 = v28;
    if ( v28 >= 0 )
      break;
    if ( !v25 || v28 != -1073741790 || i )
      goto LABEL_30;
    SeDeleteAccessState(&PassedAccessState);
  }
  if ( i
    && *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
    && ((__int64)SshpBlockerCollections.SchedulerApc.Thread & 0x400000000000LL) != 0
    && (struct _LIST_ENTRY *)((__int64)SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink & 0x400000000000LL) == SshpBlockerCollections.SchedulerApc.ApcListEntry.Flink )
  {
    v35 = (unsigned int)PsGetProcessId(v11);
    v54 = &v35;
    v55 = 4LL;
    ULongFromUser = a2;
    p_ULongFromUser = &ULongFromUser;
    v57 = 4LL;
    v58 = HandleAttributes;
    v59 = 4LL;
    v32 = a5;
    v60 = &v32;
    v61 = 1LL;
    v33 = AccessMode;
    v62 = &v33;
    v63 = 1LL;
    Thread = (PETHREAD)0x1000000;
    p_Thread = &Thread;
    v65 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
      (unsigned __int8 *)&dword_140053749 + 1,
      0LL,
      0LL,
      8u,
      &v53);
  }
  if ( a5 )
    RtlWriteULong64ToUser(v42, (__int64)Handle);
  else
    *v42 = Handle;
LABEL_30:
  v34 = v15;
  v35 = a2;
  ULongFromUser = Flink;
  UserData.Ptr = (ULONGLONG)&ULongFromUser;
  *(_QWORD *)&UserData.Size = 4LL;
  v49 = &v35;
  v50 = 4LL;
  v51 = &v34;
  v52 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  if ( v10 )
    SeDeleteAccessState(&PassedAccessState);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)v15;
}
