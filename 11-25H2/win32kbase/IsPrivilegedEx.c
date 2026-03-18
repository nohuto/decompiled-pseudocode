/*
 * XREFs of IsPrivilegedEx @ 0x1401AF540
 * Callers:
 *     HasPrivilege @ 0x1401AF490 (HasPrivilege.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dsds @ 0x1401AF6AC (WPP_RECORDER_AND_TRACE_SF_Dsds.c)
 */

bool __fastcall IsPrivilegedEx(PEPROCESS Process, PETHREAD Thread, PPRIVILEGE_SET RequiredPrivileges)
{
  char v5; // si
  BOOLEAN v6; // r15
  bool v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  int v14; // [rsp+20h] [rbp-78h]
  int v15; // [rsp+28h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+60h] [rbp-38h] BYREF

  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  SeCaptureSubjectContextEx(Thread, Process, &SubjectSecurityContext);
  v5 = 1;
  v6 = SePrivilegeCheck(RequiredPrivileges, &SubjectSecurityContext, 1);
  SePrivilegeObjectAuditAlarm(0LL, &SubjectSecurityContext, 0LL, RequiredPrivileges, v6 != 0, 1);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetProcessId(Process);
    UserSessionState = W32GetUserSessionState(v9, v8);
    LOBYTE(v11) = v7;
    LOBYTE(v12) = v5;
    WPP_RECORDER_AND_TRACE_SF_Dsds(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69144),
      v14,
      v15);
  }
  return v6 != 0;
}
