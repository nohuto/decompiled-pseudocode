/*
 * XREFs of PspInsertProcess @ 0x140945AAC
 * Callers:
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x140AD9D10 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x14021628C (PspUnlockProcessListExclusive.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     SepAuditingForSubCategory @ 0x1404BB95C (SepAuditingForSubCategory.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140819488 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SeAuditProcessCreation @ 0x140945DFC (SeAuditProcessCreation.c)
 *     SeCreateAccessStateEx @ 0x1409463F0 (SeCreateAccessStateEx.c)
 *     DbgkCopyProcessDebugPort @ 0x1409465C8 (DbgkCopyProcessDebugPort.c)
 *     ObCheckRefTraceProcess @ 0x140946938 (ObCheckRefTraceProcess.c)
 *     PspInheritSyscallProvider @ 0x140946994 (PspInheritSyscallProvider.c)
 *     PspImplicitAssignProcessToJob @ 0x140946FB8 (PspImplicitAssignProcessToJob.c)
 *     PspValidateJobAffinityState @ 0x140947398 (PspValidateJobAffinityState.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        struct _KPROCESS *a2,
        int a3,
        unsigned int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        struct _ACCESS_STATE *a8)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // r10
  int v12; // eax
  PVOID v13; // r14
  _KPROCESS *Process; // r13
  char v16; // al
  int AccessState; // edi
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v19; // rax
  char v20; // r14
  int v21; // edx
  struct _ACCESS_STATE *v22; // rsi
  int v23; // r13d
  __int64 v24; // rcx
  NTSTATUS v26; // eax
  PACCESS_TOKEN PrimaryToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-20h] BYREF
  PVOID v29; // [rsp+A0h] [rbp+40h] BYREF
  char v30; // [rsp+A8h] [rbp+48h]
  int v31; // [rsp+B0h] [rbp+50h]
  unsigned int v32; // [rsp+B8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  CurrentThread = KeGetCurrentThread();
  v10 = *((_QWORD *)Object + 96);
  v12 = *((_DWORD *)Object + 116);
  v13 = 0LL;
  v30 = 0;
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(v10 + 40) = v12;
  v16 = SepAuditingForSubCategory(134, 1);
  LOBYTE(v29) = v16;
  if ( *(_DWORD *)&SepRmCapTableLock.WaitBlockFill11[96] )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SepAdtIncorporatePerUserPolicy(0x22u, 1, 0, (__int64)PrimaryToken, &v29);
    SeReleaseSubjectContext(&SubjectContext);
    v16 = (char)v29;
  }
  if ( v16 )
    SeAuditProcessCreation((PRKPROCESS)Object);
  if ( !a2
    || (!a2[1].Padding[3]
     || (AccessState = PspImplicitAssignProcessToJob(a2[1].Padding[3], Object, a4), AccessState >= 0))
    && (AccessState = PspInheritSyscallProvider(Object, a2), AccessState >= 0) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    Blink = PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Blink;
    v19 = (struct _LIST_ENTRY *)(Object + 472);
    if ( PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Blink->Flink != (struct _LIST_ENTRY *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[96] )
      __fastfail(3u);
    *((_QWORD *)Object + 60) = PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Blink;
    v19->Flink = &PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry;
    Blink->Flink = v19;
    PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Blink = (struct _LIST_ENTRY *)(Object + 472);
    *((_QWORD *)Object + 207) = ++PsAltSystemCallRegistrationLock.Affinity;
    PspUnlockProcessListExclusive(CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      AccessState = -1073741558;
    }
    else if ( !Handle
           || (v29 = 0LL,
               v26 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &v29,
                       0LL),
               v13 = v29,
               AccessState = v26,
               v26 >= 0) )
    {
      AccessState = DbgkCopyProcessDebugPort((PRKPROCESS)Object);
      if ( v13 )
        ObfDereferenceObject(v13);
      if ( AccessState >= 0 )
      {
        if ( v30 && (v32 & 2) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 2u);
        v20 = 0;
        if ( !a2 || (v21 = (int)PsInitialSystemProcess, a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v21 = (int)Object;
            v20 = 1;
          }
          else
          {
            v21 = (int)Process;
          }
        }
        v22 = a8;
        v23 = v31;
        AccessState = SeCreateAccessStateEx(0, v21, (_DWORD)a8, (int)a8 + 160, v31, (__int64)PsProcessType + 76);
        if ( AccessState >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          AccessState = ObInsertObjectEx(Object, v22, v23, 0, v20, 0LL, 0LL);
          if ( AccessState >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v24 = *((_QWORD *)Object + 84);
            if ( !v24 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 125, 0x4000000u);
LABEL_25:
              ObCheckRefTraceProcess(Object);
              if ( (a6 & 1) != 0 )
                PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
              return 0LL;
            }
            AccessState = PspValidateJobAffinityState(v24, Object);
            if ( AccessState >= 0 )
              goto LABEL_25;
          }
          SeDeleteAccessState((__int64)v22);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
    PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
  return (unsigned int)AccessState;
}
