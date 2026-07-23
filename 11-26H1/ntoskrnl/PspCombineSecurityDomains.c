/*
 * XREFs of PspCombineSecurityDomains @ 0x14091CFB8
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14043B0F0 (SepCreateAccessStateFromSubjectContext.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x1404BFAD8 (PspSynchronizeThreadIsolationDomains.c)
 *     KeSynchronizeSecurityDomain @ 0x1404D6B28 (KeSynchronizeSecurityDomain.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 */

__int64 __fastcall PspCombineSecurityDomains(PEPROCESS Process, __int64 Object)
{
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rbx
  HANDLE v9; // r14
  struct _LIST_ENTRY *v10; // rax
  int v11; // ebx
  NTSTATUS v12; // eax
  _DWORD *v14; // rbx
  unsigned __int64 v15; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-100h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-B8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-B0h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[28]; // [rsp+110h] [rbp+10h] BYREF

  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v21, 0, sizeof(v21));
  if ( !_bittest((const signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1, 0x16u)
    || !_bittest((const signed __int32 *)(Object + 1532), 0x16u) )
  {
    return 3221225596LL;
  }
  _InterlockedOr(v16, 0);
  v6 = *(_QWORD *)&Process[4].ProcessLock;
  v7 = *(_QWORD *)(Object + 1888);
  if ( v6 == v7 )
    return 0LL;
  if ( !v6 || !v7 || SLODWORD(Process[4].ThreadListHead.Flink) < 0 || *(int *)(Object + 1872) < 0 )
    return 3221226597LL;
  v8 = (_DWORD *)PsProcessType + 19;
  SubjectContext.ProcessAuditId = *(PVOID *)(Object + 464);
  Handle = 0LL;
  v9 = 0LL;
  v18 = 0LL;
  *(_QWORD *)&SubjectContext.ImpersonationLevel = 0LL;
  SubjectContext.ClientToken = 0LL;
  v10 = (struct _LIST_ENTRY *)PsReferencePrimaryTokenWithTag(Object, 0x75536553u, v4, v5);
  SubjectContext.PrimaryToken = v10;
  if ( SeTokenLeakTracking )
  {
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v10[71].Blink[17].Blink + 1);
      if ( v10 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
  }
  v11 = SepCreateAccessStateFromSubjectContext(&SubjectContext, &PassedAccessState, v21, 40, v8);
  if ( v11 >= 0 )
  {
    v12 = ObOpenObjectByPointer(Process, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle);
    v11 = v12;
    if ( v12 >= 0 )
    {
      SeDeleteAccessState((__int64)&PassedAccessState);
      v14 = (_DWORD *)PsProcessType + 19;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContextEx(0LL, Process, &SubjectContext);
      v11 = SepCreateAccessStateFromSubjectContext(&SubjectContext, &PassedAccessState, v21, 40, v14);
      if ( v11 < 0 )
        goto LABEL_15;
      v12 = ObOpenObjectByPointer((PVOID)Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &v18);
      v11 = v12;
      if ( v12 >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&Process[3].ActiveGroupsMask.Masks[1] + 1, 0x200000u);
        *(_QWORD *)&Process[4].ProcessLock = *(_QWORD *)(Object + 1888);
        if ( (*(_DWORD *)(Object + 1872) | LODWORD(Process[4].ThreadListHead.Flink)) < 0 )
        {
          v15 = _InterlockedIncrement64(&PsNextSecurityDomain);
          v11 = -1073740699;
          *(_QWORD *)&Process[4].ProcessLock = v15;
          Process[4].DeepFreezeStartTime = v15;
        }
        KeSynchronizeSecurityDomain(Process);
        PspSynchronizeThreadIsolationDomains((__int64)Process);
        v9 = v18;
        goto LABEL_14;
      }
    }
    else
    {
      Handle = 0LL;
    }
    if ( v12 == -1073741790 )
      v11 = -1073740699;
LABEL_14:
    SeDeleteAccessState((__int64)&PassedAccessState);
  }
LABEL_15:
  if ( v9 )
    ObCloseHandle(v9, 0);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v11;
}
