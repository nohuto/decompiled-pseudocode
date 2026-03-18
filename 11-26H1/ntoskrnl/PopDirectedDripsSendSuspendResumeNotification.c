/*
 * XREFs of PopDirectedDripsSendSuspendResumeNotification @ 0x1407CC494
 * Callers:
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CC0E0 (PopDirectedDripsNotifyAppsAndServices.c)
 * Callees:
 *     PsGetSessionId @ 0x140447280 (PsGetSessionId.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PsGetNextSession @ 0x140A7D980 (PsGetNextSession.c)
 *     PopUmpoSendLegacyEvent @ 0x140B33664 (PopUmpoSendLegacyEvent.c)
 *     PopSuspendResumeInvocation @ 0x140B35570 (PopSuspendResumeInvocation.c)
 */

__int64 __fastcall PopDirectedDripsSendSuspendResumeNotification(char a1, char a2)
{
  __int64 result; // rax
  void *i; // rcx
  int SessionId; // eax
  void *v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v8[20]; // [rsp+30h] [rbp-20h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( a1 )
  {
    for ( i = 0LL; ; i = v6 )
    {
      result = PsGetNextSession(i);
      v6 = (void *)result;
      if ( !result )
        break;
      SessionId = PsGetSessionId(result);
      if ( SessionId )
      {
        *(_QWORD *)v8 = 0LL;
        *(_DWORD *)&v8[16] = SessionId;
        if ( a2 )
        {
          *(_QWORD *)&v8[8] = 0LL;
        }
        else
        {
          *(_QWORD *)&v8[8] = 0x100000000LL;
          PopSuspendResumeInvocation(v8);
          *(_DWORD *)&v8[12] = 2;
        }
        PopSuspendResumeInvocation(v8);
      }
    }
  }
  else
  {
    if ( !a2 )
    {
      *(_QWORD *)&v8[12] = 1LL;
      PopSuspendResumeInvocation(v8);
      *(_DWORD *)&v8[12] = 2;
    }
    PopSuspendResumeInvocation(v8);
    v7 = 0LL;
    if ( a2 )
    {
      *(_QWORD *)&v7 = 0x400000000LL;
      WORD6(v7) = 256;
    }
    else
    {
      *(_QWORD *)&v7 = 0x1200000003LL;
      WORD6(v7) = 1;
      PopUmpoSendLegacyEvent(&v7);
      DWORD1(v7) = 7;
    }
    return PopUmpoSendLegacyEvent(&v7);
  }
  return result;
}
