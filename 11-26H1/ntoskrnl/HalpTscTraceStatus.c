/*
 * XREFs of HalpTscTraceStatus @ 0x14058682C
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x140585B70 (HalpTscAdvSynchLeader.c)
 *     HalpTscFallbackToPlatformSource @ 0x140586204 (HalpTscFallbackToPlatformSource.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall HalpTscTraceStatus(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  if ( HalpDiagnosticEventsRegistered )
  {
    if ( EtwEventEnabled(HalpDiagnosticEventHandle, EventDescriptor) )
    {
      UserData.Ptr = (ULONGLONG)&v4;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWriteEx(HalpDiagnosticEventHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
