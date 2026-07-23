/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x14097A438
 * Callers:
 *     EtwTraceRaw @ 0x1405105E8 (EtwTraceRaw.c)
 *     EtwpTransitionToRealtime @ 0x1405311FC (EtwpTransitionToRealtime.c)
 *     EtwpGetPmcSessions @ 0x1406C7840 (EtwpGetPmcSessions.c)
 *     EtwpSetSoftRestartInformation @ 0x14077ABB8 (EtwpSetSoftRestartInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1408343E8 (EtwpGetSoftRestartInformation.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpQueryTrace @ 0x140979CA0 (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x14097A288 (EtwpUpdateEnableMask.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A99C44 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x140AB2A20 (EtwpCheckSystemTraceAccess.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140AB2FD0 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140AB34A8 (EtwpRealtimeConnect.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14097A538 (EtwpReferenceLoggerSecurityDescriptor.c)
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
