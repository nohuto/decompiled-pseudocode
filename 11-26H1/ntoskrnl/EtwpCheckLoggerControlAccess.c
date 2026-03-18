/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x140A6FAA4
 * Callers:
 *     EtwTraceRaw @ 0x140516B78 (EtwTraceRaw.c)
 *     EtwpTransitionToRealtime @ 0x14052ECDC (EtwpTransitionToRealtime.c)
 *     EtwpGetPmcSessions @ 0x1406C3C00 (EtwpGetPmcSessions.c)
 *     EtwpSetSoftRestartInformation @ 0x140777D18 (EtwpSetSoftRestartInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x14082E1A8 (EtwpGetSoftRestartInformation.c)
 *     EtwpQueryTrace @ 0x14091F240 (EtwpQueryTrace.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpUpdateTrace @ 0x140A6C6F0 (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x140A6F2BC (EtwpCheckSystemTraceAccess.c)
 *     EtwpStopTrace @ 0x140A6F2F8 (EtwpStopTrace.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A6F5B8 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpFlushTrace @ 0x140A6F6CC (EtwpFlushTrace.c)
 *     EtwpUpdateEnableMask @ 0x140A6F8F4 (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x140B294B0 (EtwpRealtimeConnect.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     ObDereferenceSecurityDescriptor @ 0x140931DF0 (ObDereferenceSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140A6FBA4 (EtwpReferenceLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  v4 = EtwpReferenceLoggerSecurityDescriptor(a2);
  AccessStatus = 0;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = v4;
  SeCaptureSubjectContext(&SubjectContext);
  SeAccessCheck(
    (PSECURITY_DESCRIPTOR)v5,
    &SubjectContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  _m_prefetchw((const void *)(a2 + 784));
  v8 = *(_QWORD *)(a2 + 784);
  while ( (v5 ^ (unsigned __int64)v8) < 0xF )
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 784), v8 + 1, v8);
    if ( v9 == v8 )
      return (unsigned int)AccessStatus;
  }
  ObDereferenceSecurityDescriptor(v5, 1u, v6, v7);
  return (unsigned int)AccessStatus;
}
