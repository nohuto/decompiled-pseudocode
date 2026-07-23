/*
 * XREFs of IopDeviceInterfaceFilterCallback @ 0x14095B760
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x14095B974 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

char __fastcall IopDeviceInterfaceFilterCallback(int a1, const WCHAR *a2, int a3, PCWSTR *a4)
{
  char v4; // di
  struct _SECURITY_SUBJECT_CONTEXT *v8; // rsi
  PERESOURCE *ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // r14d
  _QWORD *SessionById; // rax
  __int64 v13; // rbx
  PSECURITY_DESCRIPTOR v14; // rbx
  KPROCESSOR_MODE AccessMode; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rdx
  BOOLEAN v17; // bl
  BOOLEAN v18; // al
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-9h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-5h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-1h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp+Fh] BYREF
  char v24; // [rsp+D0h] [rbp+77h] BYREF

  v4 = 0;
  v24 = 0;
  DestinationString = 0LL;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  if ( a3 == 3
    && a4
    && (!*a4
     || RtlInitUnicodeStringEx((PUNICODE_STRING)&SubjectContext, *a4) >= 0
     && RtlInitUnicodeStringEx(&DestinationString, a2) >= 0
     && RtlEqualUnicodeString((PCUNICODE_STRING)&SubjectContext, &DestinationString, 1u) != 1) )
  {
    v8 = (struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 1);
    ClientToken = (PERESOURCE *)v8->ClientToken;
    if ( !v8->ClientToken )
      ClientToken = (PERESOURCE *)v8->PrimaryToken;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(ClientToken[6], 1u);
    v11 = *((_DWORD *)ClientToken + 30);
    ExReleaseResourceLite(ClientToken[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v11
      || (SessionById = (_QWORD *)PsGetSessionById(v11)) != 0LL
      && (v13 = *(_QWORD *)(SessionById[93] + 160LL),
          ObfDereferenceObjectWithTag(SessionById, 0x79517350u),
          v11 == (unsigned int)PsGetServerSiloServiceSessionId(v13)) )
    {
      v14 = PiAuLocalSystemSecurityObject;
      GrantedAccess = 0;
      AccessMode = 1;
      AccessStatus = 0;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      if ( !PiAuLocalSystemSecurityObject )
        return v4;
      if ( v8 )
      {
        p_SubjectContext = v8;
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
              &AccessStatus);
      if ( !v8 )
        SeReleaseSubjectContext(&SubjectContext);
      v18 = v17;
      if ( AccessStatus < 0 )
        v18 = 0;
      if ( v18 )
        return 1;
    }
    if ( (int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, (_DWORD)a2, 0, (_DWORD)v8, (__int64)&v24) >= 0 )
      return v24;
  }
  return v4;
}
