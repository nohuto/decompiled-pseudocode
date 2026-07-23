/*
 * XREFs of PiUEventApplyAdditionalFilters @ 0x14095B380
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x14095AFAC (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1409A6AA8 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1409AA6B8 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140AED174 (PiUEventNotifyDeviceInstanceChange.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     PiAuVerifyAccessToObject @ 0x14090DD40 (PiAuVerifyAccessToObject.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x140A73190 (SeQuerySessionIdTokenEx.c)
 */

__int64 __fastcall PiUEventApplyAdditionalFilters(__int64 a1, __int64 a2)
{
  int v2; // eax
  struct _SECURITY_SUBJECT_CONTEXT *v5; // rsi
  __int64 v6; // rbx
  int v7; // r13d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // r15d
  _QWORD *SessionById; // rax
  __int64 v11; // rbx
  PSECURITY_DESCRIPTOR v12; // rbx
  KPROCESSOR_MODE AccessMode; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rdx
  BOOLEAN v15; // bl
  int v16; // eax
  void *v17; // rdx
  PACCESS_TOKEN ClientToken; // rcx
  BOOLEAN v20; // [rsp+58h] [rbp-19h] BYREF
  BOOLEAN v21[3]; // [rsp+59h] [rbp-18h] BYREF
  int v22; // [rsp+5Ch] [rbp-15h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-11h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-9h] BYREF

  v2 = *(_DWORD *)(a1 + 96);
  v20 = 1;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v9 )
    {
      SessionById = (_QWORD *)PsGetSessionById(v9);
      if ( !SessionById )
        goto LABEL_15;
      v11 = *(_QWORD *)(SessionById[93] + 160LL);
      ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
      if ( v9 != (unsigned int)PsGetServerSiloServiceSessionId(v11) )
        goto LABEL_15;
    }
    v12 = PiAuLocalSystemSecurityObject;
    GrantedAccess = 0;
    AccessMode = 1;
    v22 = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    if ( !PiAuLocalSystemSecurityObject )
    {
      v16 = -1073741811;
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
    v15 = SeAccessCheck(
            v12,
            p_SubjectContext,
            0,
            0xF0000u,
            0,
            0LL,
            (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
            AccessMode,
            &GrantedAccess,
            &v22);
    if ( !v5 )
      SeReleaseSubjectContext(&SubjectContext);
    if ( v22 < 0 )
      v15 = 0;
    v16 = 0;
    if ( v15 )
      v20 = 1;
    else
LABEL_15:
      v16 = PiPnpRtlApplyMandatoryDeviceFilters(v7, (int)a1 + 128, 0, (_DWORD)v5, (__int64)&v20);
LABEL_16:
    if ( v16 < 0 )
    {
      if ( v16 != -1073741772 )
        return 0;
      v17 = *(void **)(a1 + 48);
      v20 = 1;
      if ( !v17
        || (v21[0] = 0,
            SubjectContext.ClientToken = (PACCESS_TOKEN)0x2000000020001LL,
            SubjectContext.ImpersonationLevel = 0x20000,
            *((_DWORD *)&SubjectContext.ImpersonationLevel + 1) = 983041,
            (int)PiAuVerifyAccessToObject(1u, v17, (PGENERIC_MAPPING)&SubjectContext, v5, v21) < 0)
        || (v20 = v21[0]) != 0 )
      {
        if ( *(_DWORD *)(a1 + 60) != -1 )
        {
          ClientToken = v5->ClientToken;
          v22 = 0;
          v21[0] = 0;
          if ( !ClientToken )
            ClientToken = *(PACCESS_TOKEN *)(a2 + 72);
          SeQuerySessionIdTokenEx(ClientToken, (PULONG)&v22, v21);
          if ( !v21[0] && v22 != *(_DWORD *)(a1 + 60) )
            return 0;
        }
      }
    }
    return v20;
  }
  switch ( v2 )
  {
    case 1:
    case 3:
    case 9:
    case 10:
    case 11:
      v5 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
      v16 = PiPnpRtlApplyMandatoryFilters(
              PiPnpRtlCtx,
              (int)a1 + 128,
              1,
              0,
              (PSECURITY_SUBJECT_CONTEXT)(a2 + 56),
              (__int64)&v20);
      goto LABEL_16;
    case 2:
      v5 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
      v16 = PiPnpRtlApplyMandatoryFilters(
              PiPnpRtlCtx,
              (int)a1 + 144,
              3,
              0,
              (PSECURITY_SUBJECT_CONTEXT)(a2 + 56),
              (__int64)&v20);
      goto LABEL_16;
    default:
      return v20;
  }
  return v20;
}
