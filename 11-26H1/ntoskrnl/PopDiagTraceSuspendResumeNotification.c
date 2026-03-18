/*
 * XREFs of PopDiagTraceSuspendResumeNotification @ 0x1407D54FC
 * Callers:
 *     PopSendSuspendResumeApplicationNotification @ 0x1407D10E8 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x1407D1218 (PopSendSuspendResumeServiceNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 */

void __fastcall PopDiagTraceSuspendResumeNotification(char a1, char a2, char a3)
{
  __int64 *v3; // rax
  __int64 *v4; // rcx

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = (__int64 *)&POP_ETW_EVENT_SUSPENDAPPS_NOTIFICATION_END;
      v4 = POP_ETW_EVENT_SUSPENDAPPS_NOTIFICATION;
    }
    else
    {
      v4 = POP_ETW_EVENT_SUSPENDSERVICES_NOTIFICATION;
      v3 = POP_ETW_EVENT_SUSPENDSERVICES_NOTIFICATION_END;
    }
  }
  else if ( a2 )
  {
    v3 = POP_ETW_EVENT_RESUMEAPPS_NOTIFICATION_END;
    v4 = POP_ETW_EVENT_RESUMEAPPS_NOTIFICATION;
  }
  else
  {
    v4 = POP_ETW_EVENT_RESUMESERVICES_NOTIFICATION;
    v3 = POP_ETW_EVENT_RESUMESERVICES_NOTIFICATION_END;
  }
  if ( !a3 )
    v4 = v3;
  PopDiagTraceEventNoPayload((PCEVENT_DESCRIPTOR)v4);
}
