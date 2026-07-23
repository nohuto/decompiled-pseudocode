/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x14095BC10
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x140950150 (PiDqQueryApplyObjectEvent.c)
 *     PiCMValidateDeviceInstance @ 0x14095AA88 (PiCMValidateDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 *     PiCMMandatoryFilterCallback @ 0x14095B710 (PiCMMandatoryFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     PiDqQueryEnumObject @ 0x140968E04 (PiDqQueryEnumObject.c)
 *     IoGetDeviceInterfaceAlias @ 0x140A18390 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14095C6C0 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     _PnpGetObjectPropertyWorker @ 0x14095CB50 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409A9750 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 v13; // rbx
  _QWORD *SessionById; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  struct _SECURITY_SUBJECT_CONTEXT *v17; // rdx
  BOOLEAN v18; // al
  _BYTE *v19; // r14
  PERESOURCE *PrimaryToken; // rdi
  struct _KTHREAD *v21; // rax
  unsigned int v22; // r15d
  struct _ERESOURCE *v23; // rcx
  int v24; // ecx
  _QWORD *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // r15d
  int v29; // eax
  int IsDeviceEnumerableForUser; // edi
  __int64 result; // rax
  ACCESS_MASK v32; // eax
  ACCESS_MASK v33; // edi
  ACCESS_MASK *Pool2; // r14
  int v35; // ecx
  __int64 v36; // rax
  int v37; // eax
  int v38; // edi
  int ObjectPropertyWorker; // eax
  int v40; // eax
  int v41; // eax
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-69h] BYREF
  int v43; // [rsp+64h] [rbp-65h] BYREF
  __int64 v44; // [rsp+68h] [rbp-61h]
  __int64 v45; // [rsp+70h] [rbp-59h]
  __int64 v46; // [rsp+80h] [rbp-49h]
  __int64 v47; // [rsp+88h] [rbp-41h]
  __int64 v48; // [rsp+90h] [rbp-39h]
  __int64 v49; // [rsp+98h] [rbp-31h]
  const DEVPROPKEY *v50; // [rsp+A0h] [rbp-29h]
  PSECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // [rsp+A8h] [rbp-21h]
  ACCESS_MASK *p_GrantedAccess; // [rsp+B0h] [rbp-19h]
  __int64 v53; // [rsp+B8h] [rbp-11h]
  PSECURITY_SUBJECT_CONTEXT *v54; // [rsp+C0h] [rbp-9h]
  __int64 v55; // [rsp+C8h] [rbp-1h]
  _OWORD v56[2]; // [rsp+D0h] [rbp+7h] BYREF

  v6 = SubjectSecurityContext;
  ClientToken = (PERESOURCE *)SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
    ClientToken = (PERESOURCE *)SubjectSecurityContext->PrimaryToken;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(ClientToken[6], 1u);
  v12 = *((_DWORD *)ClientToken + 30);
  ExReleaseResourceLite(ClientToken[6]);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v13 = 0LL;
  if ( !v12
    || (SessionById = (_QWORD *)PsGetSessionById(v12)) != 0LL
    && (v16 = *(_QWORD *)(SessionById[93] + 160LL),
        ObfDereferenceObjectWithTag(SessionById, 0x79517350u),
        v12 == (unsigned int)PsGetServerSiloServiceSessionId(v16)) )
  {
    GrantedAccess = 0;
    LODWORD(SubjectSecurityContext) = 0;
    memset(v56, 0, sizeof(v56));
    if ( !PiAuLocalSystemSecurityObject )
      return 3221225485LL;
    v17 = (struct _SECURITY_SUBJECT_CONTEXT *)v56;
    if ( v6 )
      v17 = v6;
    v18 = SeAccessCheck(
            PiAuLocalSystemSecurityObject,
            v17,
            0,
            0xF0000u,
            0,
            0LL,
            (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
            1,
            &GrantedAccess,
            (PNTSTATUS)&SubjectSecurityContext);
    if ( (int)SubjectSecurityContext < 0 )
      v18 = 0;
    if ( v18 )
    {
      result = 0LL;
      *a6 = 1;
      return result;
    }
  }
  if ( a3 == 1 )
  {
    v19 = a6;
    GrantedAccess = 0;
    v43 = 0;
    LODWORD(SubjectSecurityContext) = 0;
    *a6 = 0;
    PrimaryToken = (PERESOURCE *)v6->ClientToken;
    if ( !v6->ClientToken )
      PrimaryToken = (PERESOURCE *)v6->PrimaryToken;
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    ExAcquireResourceSharedLite(PrimaryToken[6], 1u);
    v23 = PrimaryToken[6];
    LODWORD(v44) = *((_DWORD *)PrimaryToken + 30);
    v22 = v44;
    ExReleaseResourceLite(v23);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v22
      || (v25 = (_QWORD *)PsGetSessionById(v22)) != 0LL
      && (v26 = *(_QWORD *)(v25[93] + 160LL),
          ObfDereferenceObjectWithTag(v25, 0x79517350u),
          v22 == (unsigned int)PsGetServerSiloServiceSessionId(v26)) )
    {
      v28 = a2;
      goto LABEL_26;
    }
    v27 = *(_QWORD *)(a1 + 488);
    v28 = a2;
    v50 = &DEVPKEY_Device_SessionId;
    p_SubjectSecurityContext = &SubjectSecurityContext;
    p_GrantedAccess = &GrantedAccess;
    v54 = (PSECURITY_SUBJECT_CONTEXT *)&v43;
    v46 = 0LL;
    v47 = 0LL;
    v53 = 4LL;
    v55 = 0LL;
    v45 = v27;
    v48 = a4;
    v49 = 0LL;
    if ( v27 )
    {
      v29 = guard_dispatch_icall_no_overrides(a1, a2);
      if ( v29 == -1073741536 )
      {
LABEL_20:
        IsDeviceEnumerableForUser = v46;
        goto LABEL_21;
      }
      if ( v29 != -1073741822 )
      {
        if ( v29 )
          goto LABEL_57;
        v13 = v45;
      }
    }
    else
    {
      v13 = 0LL;
    }
    ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                             a1,
                             a2,
                             1,
                             v48,
                             v49,
                             (__int64)v50,
                             (__int64)p_SubjectSecurityContext,
                             (__int64)p_GrantedAccess,
                             v53,
                             (__int64)v54,
                             v55);
    IsDeviceEnumerableForUser = ObjectPropertyWorker;
    if ( !v13 )
      goto LABEL_21;
    LODWORD(v46) = ObjectPropertyWorker;
    v40 = guard_dispatch_icall_no_overrides(a1, a2);
    switch ( v40 )
    {
      case -1073741822:
        goto LABEL_21;
      case -1073741536:
        goto LABEL_20;
      case 0:
LABEL_21:
        if ( IsDeviceEnumerableForUser != -1073741275 )
        {
          v24 = IsDeviceEnumerableForUser;
          if ( IsDeviceEnumerableForUser < 0 )
            goto LABEL_23;
          if ( (_DWORD)SubjectSecurityContext == 7 )
          {
            if ( GrantedAccess != (_DWORD)v44 )
            {
LABEL_23:
              if ( IsDeviceEnumerableForUser < 0 )
                goto LABEL_28;
              goto LABEL_75;
            }
            *v19 = 1;
          }
          else
          {
            *v19 = 1;
          }
LABEL_75:
          if ( !*v19 )
            return (unsigned int)IsDeviceEnumerableForUser;
LABEL_27:
          IsDeviceEnumerableForUser = PiPnpRtlIsDeviceEnumerableForUser(v24, v28, a4, (_DWORD)v6, (__int64)v19);
          if ( IsDeviceEnumerableForUser >= 0 )
            return (unsigned int)IsDeviceEnumerableForUser;
LABEL_28:
          *v19 = 0;
          return (unsigned int)IsDeviceEnumerableForUser;
        }
LABEL_26:
        *v19 = 1;
        goto LABEL_27;
    }
LABEL_57:
    IsDeviceEnumerableForUser = -1073741595;
    goto LABEL_28;
  }
  if ( a3 == 3 )
  {
    v32 = 200;
    LODWORD(SubjectSecurityContext) = 200;
    v33 = 0;
    v43 = 0;
    Pool2 = 0LL;
    for ( GrantedAccess = 0; ; v33 = GrantedAccess )
    {
      if ( v32 > v33 )
      {
        v33 = v32;
        GrantedAccess = v32;
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0x47706E50u);
        Pool2 = (ACCESS_MASK *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return 3221225626LL;
      }
      v35 = PiPnpRtlCtx;
      v50 = &DEVPKEY_Device_InstanceId;
      LODWORD(SubjectSecurityContext) = 0;
      p_SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT *)&v43;
      v36 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 488LL);
      v54 = &SubjectSecurityContext;
      v44 = *(_QWORD *)&PiPnpRtlCtx;
      v46 = 0LL;
      v47 = 0LL;
      v55 = 0LL;
      v45 = v36;
      v48 = a4;
      v49 = 0LL;
      p_GrantedAccess = Pool2;
      v53 = v33;
      if ( v36 )
      {
        v37 = guard_dispatch_icall_no_overrides(*(__int64 *)&PiPnpRtlCtx, a2);
        if ( v37 == -1073741822 )
        {
          v45 = 0LL;
        }
        else
        {
          if ( v37 == -1073741536 )
          {
            v38 = v46;
            goto LABEL_41;
          }
          if ( v37 )
            goto LABEL_64;
        }
        v35 = v44;
      }
      v38 = PnpGetObjectPropertyWorker(
              v35,
              a2,
              3,
              v48,
              v49,
              (__int64)v50,
              (__int64)p_SubjectSecurityContext,
              (__int64)p_GrantedAccess,
              v53,
              (__int64)v54,
              v55);
      if ( v45 )
      {
        LODWORD(v46) = v38;
        v41 = guard_dispatch_icall_no_overrides(v44, a2);
        if ( v41 != -1073741822 )
        {
          if ( v41 == -1073741536 )
          {
            v38 = v46;
          }
          else if ( v41 )
          {
LABEL_64:
            v38 = -1073741595;
            goto LABEL_43;
          }
        }
      }
LABEL_41:
      if ( v38 != -1073741789 )
      {
        if ( v38 >= 0 )
        {
          if ( !(_DWORD)SubjectSecurityContext && Pool2 )
          {
            ExFreePoolWithTag(Pool2, 0x47706E50u);
            Pool2 = 0LL;
          }
          v38 = PiPnpRtlApplyMandatoryDeviceFilters(a1, (_DWORD)Pool2, 0, (_DWORD)v6, (__int64)a6);
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x47706E50u);
        }
        else
        {
LABEL_43:
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x47706E50u);
        }
        return (unsigned int)v38;
      }
      v32 = (unsigned int)SubjectSecurityContext;
    }
  }
  if ( a3 == 5 )
    return PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v15, v6, a6);
  *a6 = 1;
  return 0LL;
}
