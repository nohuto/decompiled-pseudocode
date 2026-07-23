/*
 * XREFs of AlpcpCheckConnectionSecurity @ 0x1408EF444
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 */

__int64 __fastcall AlpcpCheckConnectionSecurity(__int64 a1, KPROCESSOR_MODE a2, void *a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v8; // rax
  ACCESS_MASK v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  ULONG_PTR v14; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 *v16; // rdx
  unsigned int v17; // eax
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-59h] BYREF
  ACCESS_MASK GrantedAccess[2]; // [rsp+58h] [rbp-51h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+60h] [rbp-49h] BYREF
  _BYTE Sid2[80]; // [rsp+80h] [rbp-29h] BYREF

  AccessStatus = 0;
  if ( a3 )
  {
    *(_QWORD *)GrantedAccess = 0LL;
    memset_0(Sid2, 0, 0x44uLL);
    v14 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v12, v13);
    AccessStatus = SeQueryInformationToken((PACCESS_TOKEN)v14, TokenIsAppContainer, (PVOID *)GrantedAccess);
    if ( AccessStatus >= 0 )
    {
      if ( *(_QWORD *)GrantedAccess )
      {
        AccessStatus = -1073741152;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v14 + 48), 1u);
        v16 = **(unsigned __int8 ***)(v14 + 152);
        v17 = 4 * v16[1] + 8;
        if ( v17 <= 0x44 )
          memmove(Sid2, v16, v17);
        ExReleaseResourceLite(*(PERESOURCE *)(v14 + 48));
        KeLeaveCriticalRegion();
      }
    }
    ObFastDereferenceObject((signed __int64 *)(a1 + 584), v14, 0x746C6644u);
    v10 = AccessStatus;
    if ( AccessStatus < 0 )
      return v10;
    if ( !RtlEqualSid(a3, Sid2) )
    {
      v10 = -1073741152;
      AccessStatus = -1073741152;
    }
    if ( (v10 & 0x80000000) != 0 )
      return v10;
  }
  if ( !a4 )
    return 0LL;
  SubjectSecurityContext.ProcessAuditId = *(PVOID *)(a1 + 464);
  *(_QWORD *)&SubjectSecurityContext.ImpersonationLevel = 0LL;
  GrantedAccess[0] = 0;
  SubjectSecurityContext.ClientToken = 0LL;
  v8 = (_QWORD *)PsReferencePrimaryTokenWithTag(a1, 0x75536553u, (__int64)a3, a4);
  SubjectSecurityContext.PrimaryToken = v8;
  if ( SeTokenLeakTracking )
  {
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8[143] + 284LL));
      if ( SubjectSecurityContext.PrimaryToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    if ( SubjectSecurityContext.ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectSecurityContext.ClientToken + 143) + 284LL));
      if ( SubjectSecurityContext.ClientToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
  }
  SeAccessCheck(
    a4,
    &SubjectSecurityContext,
    0,
    0x2000000u,
    0,
    0LL,
    &AlpcPortObjectType->TypeInfo.GenericMapping,
    a2,
    GrantedAccess,
    &AccessStatus);
  v9 = GrantedAccess[0];
  if ( (GrantedAccess[0] & 0x80000000) != 0 )
    v9 = AlpcPortObjectType->TypeInfo.GenericMapping.GenericRead | GrantedAccess[0];
  if ( (v9 & 0x40000000) != 0 )
    v9 |= AlpcPortObjectType->TypeInfo.GenericMapping.GenericWrite;
  if ( (v9 & 0x20000000) != 0 )
    v9 |= AlpcPortObjectType->TypeInfo.GenericMapping.GenericExecute;
  if ( (v9 & 0x10000000) != 0 )
    v9 |= AlpcPortObjectType->TypeInfo.GenericMapping.GenericAll;
  GrantedAccess[0] = v9 & 0xFFFFFFF;
  if ( (v9 & 1) == 0 )
    AccessStatus = -1073741152;
  SeReleaseSubjectContext(&SubjectSecurityContext);
  v10 = AccessStatus;
  if ( AccessStatus < 0 )
    return v10;
  else
    return 0LL;
}
