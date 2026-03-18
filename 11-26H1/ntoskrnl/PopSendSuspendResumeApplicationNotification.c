/*
 * XREFs of PopSendSuspendResumeApplicationNotification @ 0x1407D10E8
 * Callers:
 *     PopSendSuspendResumeNotifications @ 0x140B606E0 (PopSendSuspendResumeNotifications.c)
 * Callees:
 *     PsGetSessionId @ 0x140447280 (PsGetSessionId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopDiagTraceSuspendResumeNotification @ 0x1407D54FC (PopDiagTraceSuspendResumeNotification.c)
 *     PopDispatchStateCallout @ 0x140A39B10 (PopDispatchStateCallout.c)
 *     PsGetNextSession @ 0x140A7D980 (PsGetNextSession.c)
 *     PopSuspendResumeInvocation @ 0x140B35570 (PopSuspendResumeInvocation.c)
 */

__int64 __fastcall PopSendSuspendResumeApplicationNotification(__int64 a1, __int64 a2)
{
  char v2; // si
  unsigned int v3; // ebx
  void *i; // rcx
  __int64 NextSession; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rdi
  int SessionId; // [rsp+20h] [rbp-50h] BYREF
  __int128 v11; // [rsp+28h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+60h] [rbp-10h]

  SessionId = 0;
  v15 = 0;
  v13 = 0LL;
  LOBYTE(a2) = 1;
  v2 = a1;
  v3 = 0;
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  PopDiagTraceSuspendResumeNotification(a1, a2);
  for ( i = 0LL; ; i = v8 )
  {
    NextSession = PsGetNextSession(i);
    v8 = (void *)NextSession;
    if ( !NextSession )
      break;
    SessionId = PsGetSessionId(NextSession);
    v15 = SessionId;
    DWORD2(v14) = 0;
    HIDWORD(v14) = v2 == 0;
    v3 = PopSuspendResumeInvocation(&v14);
    if ( !v2 )
    {
      HIDWORD(v14) = 2;
      v3 = PopSuspendResumeInvocation(&v14);
    }
    if ( !v3 )
    {
      LOBYTE(v12) = 0;
      DWORD1(v12) = 2;
      HIDWORD(v12) = 0x80000000;
      v13 = 0x140000000ELL;
      DWORD2(v12) = v2 != 0 ? 5 : 1;
      v3 = PopDispatchStateCallout(&v11, &SessionId);
    }
  }
  LOBYTE(v6) = 1;
  LOBYTE(v7) = v2;
  PopDiagTraceSuspendResumeNotification(v7, v6);
  return v3;
}
