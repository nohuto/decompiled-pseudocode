/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x14099B1B0
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x14098F6F0 (PiDqQueryApplyObjectEvent.c)
 *     PiCMValidateDeviceInstance @ 0x14099A028 (PiCMValidateDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x14099ACB0 (PiCMMandatoryFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x14099F270 (IopGetDeviceInterfaces.c)
 *     PiDqQueryEnumObject @ 0x1409A83F4 (PiDqQueryEnumObject.c)
 *     IoGetDeviceInterfaceAlias @ 0x1409DB140 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14099B840 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14099BC60 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     _PnpGetObjectPropertyWorker @ 0x14099C0F0 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409D8860 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryFilters(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        _BYTE *a6)
{
  PSECURITY_SUBJECT_CONTEXT v6; // rsi
  PERESOURCE *ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  _QWORD *SessionById; // rax
  __int64 v17; // r8
  __int64 v18; // rdi
  struct _SECURITY_SUBJECT_CONTEXT *v19; // rdx
  BOOLEAN v20; // al
  _BYTE *v21; // r14
  PERESOURCE *PrimaryToken; // rdi
  struct _KTHREAD *v23; // rax
  unsigned int v24; // r15d
  struct _ERESOURCE *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // ecx
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  int v32; // r15d
  int v33; // eax
  int IsDeviceEnumerableForUser; // edi
  __int64 result; // rax
  ACCESS_MASK v36; // eax
  ACCESS_MASK v37; // edi
  ACCESS_MASK *Pool2; // r14
  int v39; // ecx
  __int64 v40; // rax
  int v41; // eax
  int v42; // edi
  int ObjectPropertyWorker; // eax
  int v44; // eax
  int v45; // eax
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-69h] BYREF
  int v47; // [rsp+64h] [rbp-65h] BYREF
  __int64 v48; // [rsp+68h] [rbp-61h]
  __int64 v49; // [rsp+70h] [rbp-59h]
  __int64 v50; // [rsp+80h] [rbp-49h]
  __int64 v51; // [rsp+88h] [rbp-41h]
  __int64 v52; // [rsp+90h] [rbp-39h]
  __int64 v53; // [rsp+98h] [rbp-31h]
  const DEVPROPKEY *v54; // [rsp+A0h] [rbp-29h]
  PSECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // [rsp+A8h] [rbp-21h]
  ACCESS_MASK *p_GrantedAccess; // [rsp+B0h] [rbp-19h]
  __int64 v57; // [rsp+B8h] [rbp-11h]
  PSECURITY_SUBJECT_CONTEXT *v58; // [rsp+C0h] [rbp-9h]
  __int64 v59; // [rsp+C8h] [rbp-1h]
  _OWORD v60[2]; // [rsp+D0h] [rbp+7h] BYREF

  v6 = SubjectSecurityContext;
  ClientToken = (PERESOURCE *)SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
    ClientToken = (PERESOURCE *)SubjectSecurityContext->PrimaryToken;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(ClientToken[6], 1u);
  v12 = *((_DWORD *)ClientToken + 30);
  ExReleaseResourceLite(ClientToken[6]);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14);
  v15 = 0LL;
  if ( !v12
    || (SessionById = (_QWORD *)PsGetSessionById(v12)) != 0LL
    && (v18 = *(_QWORD *)(SessionById[93] + 160LL),
        ObfDereferenceObjectWithTag(SessionById, 0x79517350u),
        v12 == (unsigned int)PsGetServerSiloServiceSessionId(v18)) )
  {
    GrantedAccess = 0;
    LODWORD(SubjectSecurityContext) = 0;
    memset(v60, 0, sizeof(v60));
    if ( !PiAuLocalSystemSecurityObject )
      return 3221225485LL;
    v19 = (struct _SECURITY_SUBJECT_CONTEXT *)v60;
    if ( v6 )
      v19 = v6;
    v20 = SeAccessCheck(
            PiAuLocalSystemSecurityObject,
            v19,
            0,
            0xF0000u,
            0,
            0LL,
            (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
            1,
            &GrantedAccess,
            (PNTSTATUS)&SubjectSecurityContext);
    if ( (int)SubjectSecurityContext < 0 )
      v20 = 0;
    if ( v20 )
    {
      result = 0LL;
      *a6 = 1;
      return result;
    }
  }
  if ( a3 == 1 )
  {
    v21 = a6;
    GrantedAccess = 0;
    v47 = 0;
    LODWORD(SubjectSecurityContext) = 0;
    *a6 = 0;
    PrimaryToken = (PERESOURCE *)v6->ClientToken;
    if ( !v6->ClientToken )
      PrimaryToken = (PERESOURCE *)v6->PrimaryToken;
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    ExAcquireResourceSharedLite(PrimaryToken[6], 1u);
    v25 = PrimaryToken[6];
    LODWORD(v48) = *((_DWORD *)PrimaryToken + 30);
    v24 = v48;
    ExReleaseResourceLite(v25);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27);
    if ( !v24
      || (v29 = (_QWORD *)PsGetSessionById(v24)) != 0LL
      && (v30 = *(_QWORD *)(v29[93] + 160LL),
          ObfDereferenceObjectWithTag(v29, 0x79517350u),
          v24 == (unsigned int)PsGetServerSiloServiceSessionId(v30)) )
    {
      v32 = a2;
      goto LABEL_26;
    }
    v31 = *(_QWORD *)(a1 + 488);
    v32 = a2;
    v54 = &DEVPKEY_Device_SessionId;
    p_SubjectSecurityContext = &SubjectSecurityContext;
    p_GrantedAccess = &GrantedAccess;
    v58 = (PSECURITY_SUBJECT_CONTEXT *)&v47;
    v50 = 0LL;
    v51 = 0LL;
    v57 = 4LL;
    v59 = 0LL;
    v49 = v31;
    v52 = a4;
    v53 = 0LL;
    if ( v31 )
    {
      v33 = guard_dispatch_icall_no_overrides(a1, a2);
      if ( v33 == -1073741536 )
      {
LABEL_20:
        IsDeviceEnumerableForUser = v50;
        goto LABEL_21;
      }
      if ( v33 != -1073741822 )
      {
        if ( v33 )
          goto LABEL_57;
        v15 = v49;
      }
    }
    else
    {
      v15 = 0LL;
    }
    ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                             a1,
                             a2,
                             1,
                             v52,
                             v53,
                             (__int64)v54,
                             (__int64)p_SubjectSecurityContext,
                             (__int64)p_GrantedAccess,
                             v57,
                             (__int64)v58,
                             v59);
    IsDeviceEnumerableForUser = ObjectPropertyWorker;
    if ( !v15 )
      goto LABEL_21;
    LODWORD(v50) = ObjectPropertyWorker;
    v44 = guard_dispatch_icall_no_overrides(a1, a2);
    switch ( v44 )
    {
      case -1073741822:
        goto LABEL_21;
      case -1073741536:
        goto LABEL_20;
      case 0:
LABEL_21:
        if ( IsDeviceEnumerableForUser != -1073741275 )
        {
          v28 = IsDeviceEnumerableForUser;
          if ( IsDeviceEnumerableForUser < 0 )
            goto LABEL_23;
          if ( (_DWORD)SubjectSecurityContext == 7 )
          {
            if ( GrantedAccess != (_DWORD)v48 )
            {
LABEL_23:
              if ( IsDeviceEnumerableForUser < 0 )
                goto LABEL_28;
              goto LABEL_75;
            }
            *v21 = 1;
          }
          else
          {
            *v21 = 1;
          }
LABEL_75:
          if ( !*v21 )
            return (unsigned int)IsDeviceEnumerableForUser;
LABEL_27:
          IsDeviceEnumerableForUser = PiPnpRtlIsDeviceEnumerableForUser(v28, v32, a4, (_DWORD)v6, (__int64)v21);
          if ( IsDeviceEnumerableForUser >= 0 )
            return (unsigned int)IsDeviceEnumerableForUser;
LABEL_28:
          *v21 = 0;
          return (unsigned int)IsDeviceEnumerableForUser;
        }
LABEL_26:
        *v21 = 1;
        goto LABEL_27;
    }
LABEL_57:
    IsDeviceEnumerableForUser = -1073741595;
    goto LABEL_28;
  }
  if ( a3 == 3 )
  {
    v36 = 200;
    LODWORD(SubjectSecurityContext) = 200;
    v37 = 0;
    v47 = 0;
    Pool2 = 0LL;
    for ( GrantedAccess = 0; ; v37 = GrantedAccess )
    {
      if ( v36 > v37 )
      {
        v37 = v36;
        GrantedAccess = v36;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0x47706E50u);
        Pool2 = (ACCESS_MASK *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return 3221225626LL;
      }
      v39 = PiPnpRtlCtx;
      v54 = &DEVPKEY_Device_InstanceId;
      LODWORD(SubjectSecurityContext) = 0;
      p_SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT *)&v47;
      v40 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 488LL);
      v58 = &SubjectSecurityContext;
      v48 = *(_QWORD *)&PiPnpRtlCtx;
      v50 = 0LL;
      v51 = 0LL;
      v59 = 0LL;
      v49 = v40;
      v52 = a4;
      v53 = 0LL;
      p_GrantedAccess = Pool2;
      v57 = v37;
      if ( v40 )
      {
        v41 = guard_dispatch_icall_no_overrides(*(__int64 *)&PiPnpRtlCtx, a2);
        if ( v41 == -1073741822 )
        {
          v49 = 0LL;
        }
        else
        {
          if ( v41 == -1073741536 )
          {
            v42 = v50;
            goto LABEL_41;
          }
          if ( v41 )
            goto LABEL_64;
        }
        v39 = v48;
      }
      v42 = PnpGetObjectPropertyWorker(
              v39,
              a2,
              3,
              v52,
              v53,
              (__int64)v54,
              (__int64)p_SubjectSecurityContext,
              (__int64)p_GrantedAccess,
              v57,
              (__int64)v58,
              v59);
      if ( v49 )
      {
        LODWORD(v50) = v42;
        v45 = guard_dispatch_icall_no_overrides(v48, a2);
        if ( v45 != -1073741822 )
        {
          if ( v45 == -1073741536 )
          {
            v42 = v50;
          }
          else if ( v45 )
          {
LABEL_64:
            v42 = -1073741595;
            goto LABEL_43;
          }
        }
      }
LABEL_41:
      if ( v42 != -1073741789 )
      {
        if ( v42 >= 0 )
        {
          if ( !(_DWORD)SubjectSecurityContext && Pool2 )
          {
            ExFreePoolWithTag(Pool2, 0x47706E50u);
            Pool2 = 0LL;
          }
          v42 = PiPnpRtlApplyMandatoryDeviceFilters(a1, (_DWORD)Pool2, 0, (_DWORD)v6, (__int64)a6);
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x47706E50u);
        }
        else
        {
LABEL_43:
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x47706E50u);
        }
        return (unsigned int)v42;
      }
      v36 = (unsigned int)SubjectSecurityContext;
    }
  }
  if ( a3 == 5 )
    return PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v17, v6, a6);
  *a6 = 1;
  return 0LL;
}
