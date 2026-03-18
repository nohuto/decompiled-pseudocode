/*
 * XREFs of PiUEventApplyAdditionalFilters @ 0x14099A920
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x14099A54C (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1409D5AC8 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1409D60E8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140AEA684 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     PiAuVerifyAccessToObject @ 0x140932170 (PiAuVerifyAccessToObject.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14099B1B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14099B840 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x140A661C0 (SeQuerySessionIdTokenEx.c)
 */

__int64 __fastcall PiUEventApplyAdditionalFilters(__int64 a1, __int64 a2)
{
  int v2; // eax
  struct _SECURITY_SUBJECT_CONTEXT *v5; // rsi
  __int64 v6; // rbx
  int v7; // r13d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *SessionById; // rax
  __int64 v13; // rbx
  PSECURITY_DESCRIPTOR v14; // rbx
  KPROCESSOR_MODE AccessMode; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rdx
  BOOLEAN v17; // bl
  int v18; // eax
  void *v19; // rdx
  PACCESS_TOKEN ClientToken; // rcx
  BOOLEAN v22; // [rsp+58h] [rbp-19h] BYREF
  BOOLEAN v23[3]; // [rsp+59h] [rbp-18h] BYREF
  int v24; // [rsp+5Ch] [rbp-15h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-11h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-9h] BYREF

  v2 = *(_DWORD *)(a1 + 96);
  v22 = 1;
  if ( v2 == 4 )
  {
    v5 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
    v6 = *(_QWORD *)(a2 + 56);
    v7 = PiPnpRtlCtx;
    if ( !v6 )
      v6 = *(_QWORD *)(a2 + 72);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
    v9 = *(_DWORD *)(v6 + 120);
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11);
    if ( v9 )
    {
      SessionById = (_QWORD *)PsGetSessionById(v9);
      if ( !SessionById )
        goto LABEL_15;
      v13 = *(_QWORD *)(SessionById[93] + 160LL);
      ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
      if ( v9 != (unsigned int)PsGetServerSiloServiceSessionId(v13) )
        goto LABEL_15;
    }
    v14 = PiAuLocalSystemSecurityObject;
    GrantedAccess = 0;
    AccessMode = 1;
    v24 = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( !PiAuLocalSystemSecurityObject )
    {
      v18 = -1073741811;
      goto LABEL_16;
    }
    if ( v5 )
    {
      p_SubjectContext = v5;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      p_SubjectContext = &SubjectContext;
      AccessMode = KeGetCurrentThread()->PreviousMode;
    }
    v17 = SeAccessCheck(
            v14,
            p_SubjectContext,
            0,
            0xF0000u,
            0,
            0LL,
            (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
            AccessMode,
            &GrantedAccess,
            &v24);
    if ( !v5 )
      SeReleaseSubjectContext(&SubjectContext);
    if ( v24 < 0 )
      v17 = 0;
    v18 = 0;
    if ( v17 )
      v22 = 1;
    else
LABEL_15:
      v18 = PiPnpRtlApplyMandatoryDeviceFilters(v7, (int)a1 + 128, 0, (_DWORD)v5, (__int64)&v22);
LABEL_16:
    if ( v18 < 0 )
    {
      if ( v18 != -1073741772 )
        return 0;
      v19 = *(void **)(a1 + 48);
      v22 = 1;
      if ( !v19
        || (v23[0] = 0,
            SubjectContext.ClientToken = (PACCESS_TOKEN)0x2000000020001LL,
            SubjectContext.ImpersonationLevel = 0x20000,
            *((_DWORD *)&SubjectContext.ImpersonationLevel + 1) = 983041,
            (int)PiAuVerifyAccessToObject(1u, v19, (PGENERIC_MAPPING)&SubjectContext, v5, v23) < 0)
        || (v22 = v23[0]) != 0 )
      {
        if ( *(_DWORD *)(a1 + 60) != -1 )
        {
          ClientToken = v5->ClientToken;
          v24 = 0;
          v23[0] = 0;
          if ( !ClientToken )
            ClientToken = *(PACCESS_TOKEN *)(a2 + 72);
          SeQuerySessionIdTokenEx(ClientToken, (PULONG)&v24, v23);
          if ( !v23[0] && v24 != *(_DWORD *)(a1 + 60) )
            return 0;
        }
      }
    }
    return v22;
  }
  switch ( v2 )
  {
    case 1:
    case 3:
    case 9:
    case 10:
    case 11:
      v5 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
      v18 = PiPnpRtlApplyMandatoryFilters(
              PiPnpRtlCtx,
              (int)a1 + 128,
              1,
              0,
              (PSECURITY_SUBJECT_CONTEXT)(a2 + 56),
              (__int64)&v22);
      goto LABEL_16;
    case 2:
      v5 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
      v18 = PiPnpRtlApplyMandatoryFilters(
              PiPnpRtlCtx,
              (int)a1 + 144,
              3,
              0,
              (PSECURITY_SUBJECT_CONTEXT)(a2 + 56),
              (__int64)&v22);
      goto LABEL_16;
    default:
      return v22;
  }
  return v22;
}
